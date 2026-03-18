/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C0146630
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     _W32ExceptionHandler @ 0x1C0240D78 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // r15
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // bl
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 result; // rax
  __int64 v34; // [rsp+30h] [rbp-C8h] BYREF
  volatile signed __int32 *v35; // [rsp+38h] [rbp-C0h]
  __int64 v36; // [rsp+40h] [rbp-B8h]
  __int64 v37; // [rsp+48h] [rbp-B0h]
  __int128 v38; // [rsp+58h] [rbp-A0h]
  _OWORD v39[8]; // [rsp+70h] [rbp-88h] BYREF
  int v40; // [rsp+100h] [rbp+8h] BYREF
  char v41; // [rsp+108h] [rbp+10h] BYREF
  unsigned __int64 v42; // [rsp+110h] [rbp+18h] BYREF

  v8 = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v11 + 472);
  else
    v13 = 0LL;
  memset(v39, 0, 0x60uLL);
  *(_QWORD *)&v39[0] = v13;
  DWORD2(v39[0]) = v8;
  *(_QWORD *)&v39[1] = a3;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = 0;
  }
  DWORD2(v39[1]) = a4 != 0;
  if ( a4 )
  {
    v39[3] = *(_OWORD *)a4;
    v39[4] = *(_OWORD *)(a4 + 16);
    v39[5] = *(_OWORD *)(a4 + 32);
  }
  v39[2] = __PAIR128__(a6, a5);
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v18 )
      v17 = *v18;
  }
  v34 = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = &v34;
  v35 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 480);
  v38 = *(_OWORD *)(v19 + 64);
  a5 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v13;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    gdwInAtomicOperation);
  v26 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  EtwTraceBeginCallback(4LL);
  v27 = KeUserModeCallback(4LL, v39, 96LL, &v42, &v40);
  EtwTraceEndCallback(4LL);
  if ( v26 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41, v28);
  ThreadUnlock1(v30, v29);
  v31 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v31 + 64) = v38;
  *(_QWORD *)(v31 + 80) = a5;
  if ( v27 < 0 || v40 != 24 )
    return 0LL;
  v32 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  result = *v32;
  v37 = *v32;
  return result;
}
