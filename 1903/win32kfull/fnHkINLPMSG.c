/*
 * XREFs of fnHkINLPMSG @ 0x1C00A6380
 * Callers:
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C00AA118 (xxxCallCtfHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01396B0 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _FreeTouchInputInfo @ 0x1C01DF6A0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0214470 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025A004 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v16; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v20; // rcx
  bool v21; // si
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rsi
  __int64 *v27; // rax
  unsigned int v28; // eax
  tagDomLock *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rsi
  ULONG64 v32; // rax
  _OWORD *v33; // xmm0_8
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // rdx
  __int64 v38; // [rsp+38h] [rbp-110h]
  __int64 v39; // [rsp+40h] [rbp-108h]
  unsigned __int64 v40[3]; // [rsp+48h] [rbp-100h] BYREF
  _DWORD v41[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-E0h]
  __int64 v43; // [rsp+70h] [rbp-D8h]
  __int64 v44; // [rsp+78h] [rbp-D0h]
  __int128 v45; // [rsp+80h] [rbp-C8h]
  _OWORD v46[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-98h]
  __int64 v48; // [rsp+C0h] [rbp-88h]
  __int128 v49; // [rsp+D8h] [rbp-70h]
  volatile void *Address; // [rsp+E8h] [rbp-60h]
  __int128 v51; // [rsp+F0h] [rbp-58h]
  _OWORD *v52; // [rsp+100h] [rbp-48h]
  char v53; // [rsp+150h] [rbp+8h]
  int v54; // [rsp+158h] [rbp+10h]
  int v55; // [rsp+160h] [rbp+18h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v41[1] = 0;
  v43 = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  v41[0] = a1;
  v42 = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  v45 = *(_OWORD *)a3;
  v46[0] = *(_OWORD *)(a3 + 16);
  v46[1] = *(_OWORD *)(a3 + 32);
  v12 = *(_DWORD *)(a3 + 8);
  if ( ((v12 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
    {
      v10 = *(_QWORD *)(a3 + 16);
      v11 = *(_QWORD *)(a3 + 24);
      LOBYTE(a2) = -1;
      v13 = HMValidateHandle(v11, a2, a3, a4);
      v14 = v13;
      if ( !v13
        || *(_DWORD *)(a3 + 8) == 576 && *(_BYTE *)(_HMPheFromObject(v13) + 24) != 20
        || ((*(_DWORD *)(a3 + 8) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v14) + 24) != 21 )
      {
        return 0LL;
      }
      v38 = *(_QWORD *)(gptiCurrent + 696LL);
      v39 = *(_QWORD *)(gptiCurrent + 704LL);
      *(_QWORD *)(gptiCurrent + 696LL) = v11;
      a1 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 704LL) = v10;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v12, v46);
  }
  v43 = a4;
  v44 = a5;
  LODWORD(v47) = *a7;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, gdwInAtomicOperation, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
  }
  v53 = *(_BYTE *)(v16 + 1480);
  *(_BYTE *)(v16 + 1480) = 0;
  if ( (v53 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v16 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v21 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v20);
  EtwTraceBeginCallback(47LL);
  v54 = KeUserModeCallback(47LL, v41, 88LL, v40, &v55);
  EtwTraceEndCallback(47LL);
  if ( v21 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v26 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22, v24, v25) )
  {
    v27 = (__int64 *)PsGetThreadWin32Thread(v26);
    if ( v27 )
      v9 = *v27;
  }
  if ( (v53 & 1) != 0 )
  {
    v28 = DLT_THREADINFO::getDLT();
    v29 = (tagDomLock *)GetDomainLockRef(v28);
    tagDomLock::LockShared(v29);
    tagObjLock::LockExclusive((tagObjLock *)(v9 + 384));
  }
  *(_BYTE *)(v9 + 1480) = v53;
  if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 696LL) = v38;
    *(_QWORD *)(gptiCurrent + 704LL) = v39;
  }
  if ( v54 < 0 || v55 != 24 )
    return 0LL;
  v30 = (__int64 *)v40[0];
  if ( v40[0] + 8 < v40[0] || v40[0] + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v48 = *v30;
  v32 = v40[0];
  if ( v40[0] + 24 < v40[0] || v40[0] + 24 > MmUserProbeAddress )
    v32 = MmUserProbeAddress;
  v49 = *(_OWORD *)v32;
  v33 = *(_OWORD **)(v32 + 16);
  Address = v33;
  v51 = v49;
  v52 = v33;
  ProbeForRead(v33, 0x38uLL, 4u);
  *(_OWORD *)a3 = *v33;
  *(_OWORD *)(a3 + 16) = v33[1];
  *(_OWORD *)(a3 + 32) = v33[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v33 + 12)) & 0x10;
  v34 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v34 == 258 || (v35 = *(_DWORD *)(a3 + 8), (_DWORD)v34 == 262) )
  {
    v35 = *(_DWORD *)(a3 + 8);
    if ( a6 )
    {
      v36 = (_QWORD *)(a3 + 16);
      if ( *(_QWORD *)&v46[0] == *(_QWORD *)(a3 + 16) )
      {
        *v36 = v10;
        v35 = v34;
      }
      else
      {
        RtlMBMessageWParamCharToWCS(v34, v36);
        v35 = *(_DWORD *)(a3 + 8);
      }
    }
  }
  if ( v35 == 576 || v35 == 283 || v35 == 281 )
  {
    *(_DWORD *)(a3 + 8) = v12;
    *(_QWORD *)(a3 + 16) = v10;
    *(_QWORD *)(a3 + 24) = v11;
  }
  else if ( v10 == 1 )
  {
    if ( v12 == 576 )
      FreeTouchInputInfo(v11, 1LL);
    if ( ((v12 - 281) & 0xFFFFFFFD) == 0 )
    {
      FreeGestureInfo(v11, 1LL);
      return v31;
    }
  }
  return v31;
}
