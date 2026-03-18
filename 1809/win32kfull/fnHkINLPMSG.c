/*
 * XREFs of fnHkINLPMSG @ 0x1C0016960
 * Callers:
 *     xxxCallCtfHook @ 0x1C00167C8 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C002AC90 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01303C4 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01CB7C0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01FCF30 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0241274 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        _DWORD *a7)
{
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned int v13; // r14d
  _DWORD *v14; // rax
  int v15; // r9d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // di
  __int64 v26; // rdi
  __int64 *v27; // rax
  unsigned int v28; // eax
  tagObjLock *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdi
  ULONG64 v32; // rcx
  __int128 v33; // xmm2
  _OWORD *v34; // xmm0_8
  int v35; // ecx
  int v36; // eax
  __int64 v38; // [rsp+38h] [rbp-110h]
  __int64 v39; // [rsp+40h] [rbp-108h]
  unsigned __int64 v40; // [rsp+48h] [rbp-100h] BYREF
  struct _KTHREAD *v41; // [rsp+58h] [rbp-F0h]
  _OWORD v42[6]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-88h]
  __int128 v44; // [rsp+D8h] [rbp-70h]
  _OWORD *v45; // [rsp+E8h] [rbp-60h]
  volatile void *Address; // [rsp+100h] [rbp-48h]
  char v47; // [rsp+150h] [rbp+8h]
  int v48; // [rsp+158h] [rbp+10h]
  int v49; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v50; // [rsp+168h] [rbp+20h]

  v50 = a4;
  v10 = 0LL;
  v11 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  memset(v42, 0, 0x58uLL);
  LODWORD(v42[0]) = a1;
  *((_QWORD *)&v42[0] + 1) = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  v42[2] = *(_OWORD *)a3;
  v42[3] = *(_OWORD *)(a3 + 16);
  v42[4] = *(_OWORD *)(a3 + 32);
  v13 = *(_DWORD *)(a3 + 8);
  if ( ((v13 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v13 == 576 || ((v13 - 281) & 0xFFFFFFFD) == 0 )
    {
      v10 = *(_QWORD *)(a3 + 16);
      v11 = *(_QWORD *)(a3 + 24);
      LOBYTE(v12) = -1;
      v14 = (_DWORD *)HMValidateHandle(v11, v12);
      if ( !v14 )
        return 0LL;
      v15 = *(_DWORD *)(a3 + 8);
      if ( v15 == 576
        && *(_BYTE *)((unsigned int)(unsigned __int16)*v14 * *((_DWORD *)&gSharedInfo + 4)
                    + *((_QWORD *)&gSharedInfo + 1)
                    + 24LL) != 20 )
      {
        return 0LL;
      }
      if ( ((v15 - 281) & 0xFFFFFFFD) == 0
        && *(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*v14
                    + *((_QWORD *)&gSharedInfo + 1)
                    + 24LL) != 21 )
      {
        return 0LL;
      }
      v38 = *(_QWORD *)(gptiCurrent + 704LL);
      v39 = *(_QWORD *)(gptiCurrent + 712LL);
      *(_QWORD *)(gptiCurrent + 704LL) = v11;
      *(_QWORD *)(gptiCurrent + 712LL) = v10;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v13, &v42[3]);
  }
  v42[1] = __PAIR128__(a5, v50);
  LODWORD(v42[5]) = *a7;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v17 = *ThreadWin32Thread;
  }
  v47 = *(_BYTE *)(v17 + 1456);
  *(_BYTE *)(v17 + 1456) = 0;
  if ( (v47 & 1) != 0 )
  {
    tagObjLock::UnLock((tagObjLock *)(v17 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v25 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  EtwTraceBeginCallback(47LL);
  v48 = KeUserModeCallback(47LL, v42, 88LL, &v40, &v49);
  EtwTraceEndCallback(47LL);
  if ( v25 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v41 = KeGetCurrentThread();
  v26 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    v27 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v27 )
      v26 = *v27;
  }
  if ( (v47 & 1) != 0 )
  {
    v28 = DLT_THREADINFO::getDLT();
    v29 = (tagObjLock *)GetDomainLockRef(v28);
    tagObjLock::LockShared(v29);
    tagObjLock::LockExclusive((tagObjLock *)(v26 + 392));
  }
  *(_BYTE *)(v26 + 1456) = v47;
  if ( v13 == 576 || ((v13 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 704LL) = v38;
    *(_QWORD *)(gptiCurrent + 712LL) = v39;
  }
  if ( v48 < 0 || v49 != 24 )
    return 0LL;
  v30 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v43 = *v30;
  v32 = v40;
  if ( v40 + 24 < v40 || v40 + 24 > MmUserProbeAddress )
    v32 = MmUserProbeAddress;
  v33 = *(_OWORD *)v32;
  v34 = *(_OWORD **)(v32 + 16);
  Address = v34;
  v44 = v33;
  v45 = v34;
  ProbeForRead(v34, 0x38uLL, 4u);
  *(_OWORD *)a3 = *v34;
  *(_OWORD *)(a3 + 16) = v34[1];
  *(_OWORD *)(a3 + 32) = v34[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v34 + 12)) & 0x10;
  v35 = *(_DWORD *)(a3 + 8);
  if ( v35 == 258 || (v36 = *(_DWORD *)(a3 + 8), v35 == 262) )
  {
    v36 = *(_DWORD *)(a3 + 8);
    if ( a6 )
    {
      if ( *(_QWORD *)&v42[3] == *(_QWORD *)(a3 + 16) )
      {
        *(_QWORD *)(a3 + 16) = v10;
        v36 = v35;
      }
      else
      {
        RtlMBMessageWParamCharToWCS();
        v36 = *(_DWORD *)(a3 + 8);
      }
    }
  }
  if ( v36 == 576 || v36 == 283 || v36 == 281 )
  {
    *(_DWORD *)(a3 + 8) = v13;
    *(_QWORD *)(a3 + 16) = v10;
    *(_QWORD *)(a3 + 24) = v11;
  }
  else if ( v10 == 1 )
  {
    if ( v13 == 576 )
      FreeTouchInputInfo(v11, 1LL);
    if ( ((v13 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v11, 1LL);
  }
  return v31;
}
