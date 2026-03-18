/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C00F7AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdi
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r12
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rax
  __int128 v25; // xmm6
  __int64 v26; // xmm7_8
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rdi
  ULONG64 v35; // rcx
  __int128 v36; // xmm2
  __int128 *v37; // xmm0_8
  __int128 *v38; // rbx
  __int128 v39; // xmm0
  __int64 v40; // rax
  _DWORD v42[8]; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v43[3]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v44; // [rsp+68h] [rbp-180h]
  __int64 v45; // [rsp+70h] [rbp-178h] BYREF
  volatile signed __int32 *v46; // [rsp+78h] [rbp-170h]
  __int64 v47; // [rsp+80h] [rbp-168h]
  __int128 v48; // [rsp+88h] [rbp-160h]
  __int64 v49; // [rsp+98h] [rbp-150h]
  __int64 v50; // [rsp+A0h] [rbp-148h]
  __int64 v51; // [rsp+A8h] [rbp-140h]
  __int128 v52; // [rsp+D0h] [rbp-118h]
  __int128 *v53; // [rsp+E0h] [rbp-108h]
  volatile void *Address; // [rsp+F8h] [rbp-F0h]
  _OWORD v55[9]; // [rsp+100h] [rbp-E8h] BYREF

  v44 = a3;
  v10 = a2;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0uLL;
  v49 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v15 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v13 + 472);
  else
    v15 = 0LL;
  v16 = 136;
  memset(v55, 0, 0x88uLL);
  *(_QWORD *)&v55[0] = v15;
  DWORD2(v55[0]) = v10;
  *(_QWORD *)&v55[1] = a3;
  *((_QWORD *)&v55[1] + 1) = a5;
  *(_QWORD *)&v55[2] = a6;
  *(_OWORD *)((char *)&v55[2] + 8) = *(_OWORD *)a4;
  if ( a3 )
  {
    *(_OWORD *)((char *)&v55[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v55[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v55[5] + 1) = *(_QWORD *)(a4 + 48);
    v18 = 0LL;
    *(_DWORD *)(*((_QWORD *)&v55[5] + 1) + 36LL) = 0;
    v55[6] = **((_OWORD **)&v55[5] + 1);
    v55[7] = *(_OWORD *)(*((_QWORD *)&v55[5] + 1) + 16LL);
    *(_QWORD *)&v55[8] = *(_QWORD *)(*((_QWORD *)&v55[5] + 1) + 32LL);
    *((_QWORD *)&v55[5] + 1) = 0LL;
  }
  else
  {
    v16 = 56;
  }
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v23 )
      v20 = *v23;
  }
  v45 = *(_QWORD *)(v20 + 416);
  *(_QWORD *)(v20 + 416) = &v45;
  v46 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v24 = *(_QWORD *)(v13 + 480);
  v25 = *(_OWORD *)(v24 + 64);
  v48 = v25;
  v26 = *(_QWORD *)(v24 + 80);
  v49 = v26;
  *(_QWORD *)(v24 + 72) = v15;
  if ( a1 )
    v27 = *(_QWORD *)a1;
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v28;
  if ( gdwInAtomicOperation )
  {
    v28 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v28, gdwInAtomicOperation, v21, v22);
  EtwTraceBeginCallback(21LL);
  v29 = KeUserModeCallback(21LL, v55, v16, v43, v42);
  EtwTraceEndCallback(21LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v31, v30);
  v32 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v32 + 64) = v25;
  *(_QWORD *)(v32 + 80) = v26;
  if ( v29 < 0 || v42[0] != 24 )
    return 0LL;
  v33 = (__int64 *)v43[0];
  if ( v43[0] + 8 < v43[0] || v43[0] + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  v34 = *v33;
  v50 = *v33;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v35 = v43[0];
    if ( v43[0] + 24 < v43[0] || v43[0] + 24 > MmUserProbeAddress )
      v35 = MmUserProbeAddress;
    v36 = *(_OWORD *)v35;
    v37 = *(__int128 **)(v35 + 16);
    Address = v37;
    v52 = v36;
    v53 = v37;
    v38 = v37;
    ProbeForRead(v37, 0x60uLL, 4u);
    v39 = *v37;
    if ( v44 )
    {
      v51 = *(_QWORD *)(a4 + 48);
      v40 = v51;
      *(_OWORD *)a4 = v39;
      *(_OWORD *)(a4 + 16) = v38[1];
      *(_OWORD *)(a4 + 32) = v38[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v38 + 6);
      *(_OWORD *)v40 = *(__int128 *)((char *)v38 + 56);
      *(_OWORD *)(v40 + 16) = *(__int128 *)((char *)v38 + 72);
      *(_QWORD *)(v40 + 32) = *((_QWORD *)v38 + 11);
      *(_QWORD *)(a4 + 48) = v40;
    }
    else
    {
      *(_OWORD *)a4 = v39;
    }
  }
  return v34;
}
