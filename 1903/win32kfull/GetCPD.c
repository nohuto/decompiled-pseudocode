/*
 * XREFs of GetCPD @ 0x1C00BE82C
 * Callers:
 *     _GetClassInfoEx @ 0x1C001ECF4 (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     NtUserGetCPD @ 0x1C00BE7A0 (NtUserGetCPD.c)
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00BEA88 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 *__fastcall GetCPD(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int16 v6; // di
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 *i; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rax
  _QWORD *v22; // rcx
  __int64 *v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  __int128 v26; // [rsp+30h] [rbp-40h]
  __int128 v27; // [rsp+40h] [rbp-30h]
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int128 v29; // [rsp+60h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  v25 = 0LL;
  v24 = (__int64 *)gSmartObjNullRef;
  v25 = *(_QWORD *)(v8 + 1472);
  *(_QWORD *)(v8 + 1472) = &v25;
  if ( (v6 & 0x60) != 0 )
  {
    v7 = *(_QWORD *)(v7 + 136);
    goto LABEL_6;
  }
  if ( (v6 & 0x80u) == 0 )
  {
LABEL_6:
    if ( v7 != *v24 )
    {
      SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v24);
LABEL_8:
      if ( v7 )
      {
        v24 = *(__int64 **)(v7 + 128);
        ++*((_DWORD *)v24 + 2);
      }
      else
      {
        v24 = (__int64 *)gSmartObjNullRef;
      }
      goto LABEL_17;
    }
    goto LABEL_17;
  }
  v7 = *(_QWORD *)(v7 + 136);
  if ( v7 != *v24 )
  {
    if ( v24 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v24 + 2) )
    {
      if ( *((_BYTE *)v24 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v24);
    }
    goto LABEL_8;
  }
LABEL_17:
  v13 = *v24;
  for ( i = *(__int64 **)(*v24 + 48); i; i = (__int64 *)i[7] )
  {
    v13 = i[5];
    if ( *(_QWORD *)(v13 + 16) == a3 && *(_WORD *)(v13 + 24) == v6 )
      break;
  }
  if ( i )
  {
    v15 = *i;
LABEL_26:
    v17 = (__int64 *)((unsigned int)v15 | 0xFFFF0000LL);
    goto LABEL_27;
  }
  LOBYTE(v10) = 7;
  v16 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 448LL), v10);
  v17 = (__int64 *)v16;
  if ( v16 )
  {
    v18 = *v24;
    *(_QWORD *)&v26 = v16 + 56;
    *((_QWORD *)&v26 + 1) = *(_QWORD *)(v18 + 48);
    v28 = v26;
    HMAssignmentLock(&v28);
    *((_QWORD *)&v27 + 1) = v17;
    *(_QWORD *)&v27 = *v24 + 48;
    v29 = v27;
    HMAssignmentLock(&v29);
    *(_QWORD *)(v17[5] + 16) = a3;
    *(_WORD *)(v17[5] + 24) = v6;
    v15 = *v17;
    goto LABEL_26;
  }
LABEL_27:
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v9, v10, v11) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v21 )
      v20 = *v21;
  }
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v24);
  v22 = *(_QWORD **)(v20 + 1472);
  if ( v22 )
    *(_QWORD *)(v20 + 1472) = *v22;
  return v17;
}
