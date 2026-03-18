/*
 * XREFs of GetCPD @ 0x1C00F86FC
 * Callers:
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x1C00AED40 (_GetClassInfoEx.c)
 *     NtUserGetCPD @ 0x1C00F8670 (NtUserGetCPD.c)
 *     xxxSetClassData @ 0x1C00FC374 (xxxSetClassData.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00F88FC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 *__fastcall GetCPD(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 *i; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rax
  _QWORD *v20; // rcx
  _DWORD *v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+28h] [rbp-28h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  __int128 v25; // [rsp+40h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v23 = 0LL;
  v22 = (_DWORD *)gSmartObjNullRef;
  v23 = *(_QWORD *)(v7 + 1448);
  *(_QWORD *)(v7 + 1448) = &v23;
  if ( (v5 & 0x60) != 0 || (v5 & 0x80u) != 0 )
    v6 = *(_QWORD *)(v6 + 112);
  if ( v6 != *(_QWORD *)v22 )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v22);
    if ( v6 )
    {
      v22 = *(_DWORD **)(v6 + 128);
      ++v22[2];
    }
    else
    {
      v22 = (_DWORD *)gSmartObjNullRef;
    }
  }
  v11 = *(_QWORD *)v22;
  for ( i = *(__int64 **)(*(_QWORD *)v22 + 48LL); i; i = (__int64 *)i[7] )
  {
    v11 = i[5];
    if ( *(_QWORD *)(v11 + 16) == a3 && *(_WORD *)(v11 + 24) == v5 )
      break;
  }
  if ( i )
  {
    v13 = *i;
LABEL_20:
    v15 = (__int64 *)((unsigned int)v13 | 0xFFFF0000LL);
    goto LABEL_21;
  }
  LOBYTE(v9) = 7;
  v14 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 456LL), v9, 72LL);
  v15 = (__int64 *)v14;
  if ( v14 )
  {
    v16 = *(_QWORD *)v22;
    *(_QWORD *)&v24 = v14 + 56;
    *((_QWORD *)&v24 + 1) = *(_QWORD *)(v16 + 48);
    HMAssignmentLock(&v24);
    *((_QWORD *)&v24 + 1) = v15;
    *(_QWORD *)&v24 = *(_QWORD *)v22 + 48LL;
    v25 = v24;
    HMAssignmentLock(&v25);
    *(_QWORD *)(v15[5] + 16) = a3;
    *(_WORD *)(v15[5] + 24) = v5;
    v13 = *v15;
    goto LABEL_20;
  }
LABEL_21:
  v17 = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v8) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v19 )
      v18 = *v19;
  }
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v22);
  v20 = *(_QWORD **)(v18 + 1448);
  if ( v20 )
    *(_QWORD *)(v18 + 1448) = *v20;
  return v15;
}
