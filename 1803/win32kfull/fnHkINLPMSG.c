/*
 * XREFs of fnHkINLPMSG @ 0x1C00439D0
 * Callers:
 *     xxxCallCtfHook @ 0x1C001C1F4 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C010E578 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01A9250 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01D8130 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C022B318 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // edi
  _DWORD *v16; // rax
  int v17; // r9d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // r14
  __int64 *v31; // rax
  unsigned int v32; // eax
  tagObjLock *v33; // rax
  __int64 *v34; // rax
  __int64 v35; // r14
  ULONG64 v36; // rax
  _OWORD *v37; // xmm1_8
  __int64 v38; // rcx
  int v39; // edx
  _QWORD *v40; // rdx
  __int64 v42; // [rsp+38h] [rbp-110h]
  __int64 v43; // [rsp+40h] [rbp-108h]
  unsigned __int64 v44[3]; // [rsp+48h] [rbp-100h] BYREF
  _OWORD v45[6]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-88h]
  __int128 v47; // [rsp+D8h] [rbp-70h]
  volatile void *Address; // [rsp+E8h] [rbp-60h]
  __int128 v49; // [rsp+F0h] [rbp-58h]
  _OWORD *v50; // [rsp+100h] [rbp-48h]
  char v51; // [rsp+150h] [rbp+8h]
  int v52; // [rsp+158h] [rbp+10h]
  int v53; // [rsp+160h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memset(v45, 0, 0x58uLL);
  LODWORD(v45[0]) = a1;
  *((_QWORD *)&v45[0] + 1) = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  v45[2] = *(_OWORD *)a3;
  v45[3] = *(_OWORD *)(a3 + 16);
  v45[4] = *(_OWORD *)(a3 + 32);
  v15 = *(_DWORD *)(a3 + 8);
  if ( ((v15 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v15 == 576 || ((v15 - 281) & 0xFFFFFFFD) == 0 )
    {
      v12 = *(_QWORD *)(a3 + 16);
      v13 = *(_QWORD *)(a3 + 24);
      v16 = (_DWORD *)HMValidateHandle(v13, 255);
      if ( !v16 )
        return 0LL;
      v17 = *(_DWORD *)(a3 + 8);
      if ( v17 == 576
        && *(_BYTE *)((unsigned int)(unsigned __int16)*v16 * LODWORD(gSharedInfo[2]) + gSharedInfo[1] + 24LL) != 20 )
      {
        return 0LL;
      }
      if ( ((v17 - 281) & 0xFFFFFFFD) == 0
        && *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v16 + gSharedInfo[1] + 24LL) != 21 )
      {
        return 0LL;
      }
      v42 = *(_QWORD *)(gptiCurrent + 688LL);
      v43 = *(_QWORD *)(gptiCurrent + 696LL);
      *(_QWORD *)(gptiCurrent + 688LL) = v13;
      v14 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 696LL) = v12;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v15, &v45[3]);
  }
  *(_QWORD *)&v45[1] = a4;
  *((_QWORD *)&v45[1] + 1) = a5;
  LODWORD(v45[5]) = *a7;
  if ( gdwInAtomicOperation )
  {
    v14 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, gdwInAtomicOperation) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
  }
  v51 = *(_BYTE *)(v19 + 1464);
  *(_BYTE *)(v19 + 1464) = 0;
  if ( (v51 & 1) != 0 )
  {
    tagObjLock::UnLock((tagObjLock *)(v19 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v27 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  EtwTraceBeginCallback(47LL);
  v52 = KeUserModeCallback(47LL, v45, 88LL, v44, &v53);
  EtwTraceEndCallback(47LL);
  if ( v27 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v30 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28) )
  {
    v31 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v31 )
      v11 = *v31;
  }
  if ( (v51 & 1) != 0 )
  {
    v32 = DLT_THREADINFO::getDLT();
    v33 = (tagObjLock *)GetDomainLockRef(v32);
    tagObjLock::LockShared(v33);
    tagObjLock::LockExclusive((tagObjLock *)(v11 + 384));
  }
  *(_BYTE *)(v11 + 1464) = v51;
  if ( v15 == 576 || ((v15 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 688LL) = v42;
    *(_QWORD *)(gptiCurrent + 696LL) = v43;
  }
  if ( v52 < 0 || v53 != 24 )
    return 0LL;
  v34 = (__int64 *)v44[0];
  if ( v44[0] + 8 < v44[0] || v44[0] + 8 > MmUserProbeAddress )
    v34 = (__int64 *)MmUserProbeAddress;
  v35 = *v34;
  v46 = *v34;
  v36 = v44[0];
  if ( v44[0] + 24 < v44[0] || v44[0] + 24 > MmUserProbeAddress )
    v36 = MmUserProbeAddress;
  v47 = *(_OWORD *)v36;
  v37 = *(_OWORD **)(v36 + 16);
  Address = v37;
  v49 = v47;
  v50 = v37;
  ProbeForRead(v37, 0x38uLL, 4u);
  *(_OWORD *)a3 = *v37;
  *(_OWORD *)(a3 + 16) = v37[1];
  *(_OWORD *)(a3 + 32) = v37[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v37 + 12)) & 0x10;
  v38 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v38 == 258 || (v39 = *(_DWORD *)(a3 + 8), (_DWORD)v38 == 262) )
  {
    v39 = *(_DWORD *)(a3 + 8);
    if ( a6 )
    {
      v40 = (_QWORD *)(a3 + 16);
      if ( *(_QWORD *)&v45[3] == *(_QWORD *)(a3 + 16) )
      {
        *v40 = v12;
        v39 = v38;
      }
      else
      {
        RtlMBMessageWParamCharToWCS(v38, v40);
        v39 = *(_DWORD *)(a3 + 8);
      }
    }
  }
  if ( v39 == 576 || ((v39 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a3 + 8) = v15;
    *(_QWORD *)(a3 + 16) = v12;
    *(_QWORD *)(a3 + 24) = v13;
  }
  else if ( v12 == 1 )
  {
    if ( v15 == 576 )
      FreeTouchInputInfo(v13, 1LL);
    if ( ((v15 - 281) & 0xFFFFFFFD) == 0 )
    {
      FreeGestureInfo(v13, 1LL);
      return v35;
    }
  }
  return v35;
}
