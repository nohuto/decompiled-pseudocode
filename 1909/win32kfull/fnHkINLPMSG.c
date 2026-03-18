/*
 * XREFs of fnHkINLPMSG @ 0x1C0047160
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01136B0 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _FreeTouchInputInfo @ 0x1C01DF520 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0213F30 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C02598C4 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
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
  struct _KTHREAD *v25; // rsi
  __int64 *v26; // rax
  unsigned int v27; // eax
  tagDomLock *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rsi
  ULONG64 v31; // rax
  __int128 *v32; // xmm0_8
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rdx
  __int64 v37; // [rsp+38h] [rbp-110h]
  __int64 v38; // [rsp+40h] [rbp-108h]
  unsigned __int64 v39[3]; // [rsp+48h] [rbp-100h] BYREF
  _DWORD v40[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-E0h]
  __int64 v42; // [rsp+70h] [rbp-D8h]
  __int64 v43; // [rsp+78h] [rbp-D0h]
  __int128 v44; // [rsp+80h] [rbp-C8h]
  _OWORD v45[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-98h]
  __int64 v47; // [rsp+C0h] [rbp-88h]
  __int128 v48; // [rsp+D8h] [rbp-70h]
  volatile void *Address; // [rsp+E8h] [rbp-60h]
  __int128 v50; // [rsp+F0h] [rbp-58h]
  __int128 *v51; // [rsp+100h] [rbp-48h]
  char v52; // [rsp+150h] [rbp+8h]
  int v53; // [rsp+158h] [rbp+10h]
  int v54; // [rsp+160h] [rbp+18h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v40[1] = 0;
  v42 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v40[0] = a1;
  v41 = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v44 = *a3;
  v45[0] = a3[1];
  v45[1] = a3[2];
  v12 = *((_DWORD *)a3 + 2);
  if ( ((v12 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
    {
      v10 = *((_QWORD *)a3 + 2);
      v11 = *((_QWORD *)a3 + 3);
      v13 = HMValidateHandle(v11, 255);
      v14 = v13;
      if ( !v13
        || *((_DWORD *)a3 + 2) == 576 && *(_BYTE *)(_HMPheFromObject(v13) + 24) != 20
        || ((*((_DWORD *)a3 + 2) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v14) + 24) != 21 )
      {
        return 0LL;
      }
      v37 = *(_QWORD *)(gptiCurrent + 696LL);
      v38 = *(_QWORD *)(gptiCurrent + 704LL);
      *(_QWORD *)(gptiCurrent + 696LL) = v11;
      a1 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 704LL) = v10;
    }
  }
  else
  {
    v10 = *((_QWORD *)a3 + 2);
    RtlWCSMessageWParamCharToMB(v12, v45);
  }
  v42 = a4;
  v43 = a5;
  LODWORD(v46) = *a7;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, gdwInAtomicOperation, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
  }
  v52 = *(_BYTE *)(v16 + 1480);
  *(_BYTE *)(v16 + 1480) = 0;
  if ( (v52 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v16 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v21 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v20);
  EtwTraceBeginCallback(47LL);
  v53 = KeUserModeCallback(47LL, v40, 88LL, v39, &v54);
  EtwTraceEndCallback(47LL);
  if ( v21 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v25 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22, v24) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v25);
    if ( v26 )
      v9 = *v26;
  }
  if ( (v52 & 1) != 0 )
  {
    v27 = DLT_THREADINFO::getDLT();
    v28 = (tagDomLock *)GetDomainLockRef(v27);
    tagDomLock::LockShared(v28);
    tagObjLock::LockExclusive((tagObjLock *)(v9 + 384));
  }
  *(_BYTE *)(v9 + 1480) = v52;
  if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 696LL) = v37;
    *(_QWORD *)(gptiCurrent + 704LL) = v38;
  }
  if ( v53 < 0 || v54 != 24 )
    return 0LL;
  v29 = (__int64 *)v39[0];
  if ( v39[0] + 8 < v39[0] || v39[0] + 8 > MmUserProbeAddress )
    v29 = (__int64 *)MmUserProbeAddress;
  v30 = *v29;
  v47 = *v29;
  v31 = v39[0];
  if ( v39[0] + 24 < v39[0] || v39[0] + 24 > MmUserProbeAddress )
    v31 = MmUserProbeAddress;
  v48 = *(_OWORD *)v31;
  v32 = *(__int128 **)(v31 + 16);
  Address = v32;
  v50 = v48;
  v51 = v32;
  ProbeForRead(v32, 0x38uLL, 4u);
  *a3 = *v32;
  a3[1] = v32[1];
  a3[2] = v32[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v32 + 12)) & 0x10;
  v33 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v33 == 258 || (v34 = *((_DWORD *)a3 + 2), (_DWORD)v33 == 262) )
  {
    v34 = *((_DWORD *)a3 + 2);
    if ( a6 )
    {
      v35 = a3 + 1;
      if ( *(_QWORD *)&v45[0] == *((_QWORD *)a3 + 2) )
      {
        *v35 = v10;
        v34 = v33;
      }
      else
      {
        RtlMBMessageWParamCharToWCS(v33, v35);
        v34 = *((_DWORD *)a3 + 2);
      }
    }
  }
  if ( v34 == 576 || v34 == 283 || v34 == 281 )
  {
    *((_DWORD *)a3 + 2) = v12;
    *((_QWORD *)a3 + 2) = v10;
    *((_QWORD *)a3 + 3) = v11;
  }
  else if ( v10 == 1 )
  {
    if ( v12 == 576 )
      FreeTouchInputInfo(v11, 1LL);
    if ( ((v12 - 281) & 0xFFFFFFFD) == 0 )
    {
      FreeGestureInfo(v11, 1LL);
      return v30;
    }
  }
  return v30;
}
