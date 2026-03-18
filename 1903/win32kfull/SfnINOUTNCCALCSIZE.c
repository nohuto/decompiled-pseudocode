/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C0100120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C016380C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0163830 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdi
  unsigned int v16; // r13d
  int v17; // edx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r12
  __int64 v20; // r15
  __int64 *v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm6
  __int64 v24; // xmm7_8
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  LeaveEnterCrit *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rdi
  ULONG64 v35; // rcx
  __int128 *v36; // xmm0_8
  __int128 *v37; // rbx
  __int128 v38; // xmm0
  __int64 v39; // rax
  _BYTE v41[4]; // [rsp+30h] [rbp-1B8h] BYREF
  _DWORD v42[7]; // [rsp+34h] [rbp-1B4h] BYREF
  unsigned __int64 v43[3]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v44; // [rsp+68h] [rbp-180h]
  __int64 v45; // [rsp+70h] [rbp-178h] BYREF
  _QWORD *v46; // [rsp+78h] [rbp-170h]
  __int64 v47; // [rsp+80h] [rbp-168h]
  __int128 v48; // [rsp+88h] [rbp-160h]
  __int64 v49; // [rsp+98h] [rbp-150h]
  __int64 v50; // [rsp+A0h] [rbp-148h]
  __int64 v51; // [rsp+A8h] [rbp-140h]
  __int128 v52; // [rsp+D0h] [rbp-118h]
  volatile void *Address; // [rsp+E0h] [rbp-108h]
  __int128 v54; // [rsp+E8h] [rbp-100h]
  __int128 *v55; // [rsp+F8h] [rbp-F0h]
  _OWORD v56[9]; // [rsp+100h] [rbp-E8h] BYREF

  v44 = a3;
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
    v15 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v15 = 0LL;
  v16 = 136;
  memset(v56, 0, 0x88uLL);
  *(_QWORD *)&v56[0] = v15;
  DWORD2(v56[0]) = a2;
  *(_QWORD *)&v56[1] = a3;
  *((_QWORD *)&v56[1] + 1) = a5;
  *(_QWORD *)&v56[2] = a6;
  *(_OWORD *)((char *)&v56[2] + 8) = *(_OWORD *)a4;
  if ( a3 )
  {
    *(_OWORD *)((char *)&v56[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v56[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v56[5] + 1) = *(_QWORD *)(a4 + 48);
    v18 = 0LL;
    *(_DWORD *)(*((_QWORD *)&v56[5] + 1) + 36LL) = 0;
    v56[6] = **((_OWORD **)&v56[5] + 1);
    v56[7] = *(_OWORD *)(*((_QWORD *)&v56[5] + 1) + 16LL);
    *(_QWORD *)&v56[8] = *(_QWORD *)(*((_QWORD *)&v56[5] + 1) + 32LL);
    *((_QWORD *)&v56[5] + 1) = 0LL;
  }
  else
  {
    v16 = 56;
  }
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v21 )
      v20 = *v21;
  }
  v45 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = &v45;
  v46 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v13 + 472);
  v23 = *(_OWORD *)(v22 + 64);
  v48 = v23;
  v24 = *(_QWORD *)(v22 + 80);
  v49 = v24;
  *(_QWORD *)(v22 + 72) = v15;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224LL);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v26;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v41);
  EtwTraceBeginCallback(21LL);
  v27 = KeUserModeCallback(21LL, v56, v16, v43, v42);
  EtwTraceEndCallback(21LL);
  LeaveEnterCrit::~LeaveEnterCrit(v28);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v32 + 64) = v23;
  *(_QWORD *)(v32 + 80) = v24;
  if ( v27 < 0 || v42[0] != 24 )
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
    v52 = *(_OWORD *)v35;
    v36 = *(__int128 **)(v35 + 16);
    Address = v36;
    v54 = v52;
    v55 = v36;
    v37 = v36;
    ProbeForRead(v36, 0x60uLL, 4u);
    v38 = *v36;
    if ( v44 )
    {
      v51 = *(_QWORD *)(a4 + 48);
      v39 = v51;
      *(_OWORD *)a4 = v38;
      *(_OWORD *)(a4 + 16) = v37[1];
      *(_OWORD *)(a4 + 32) = v37[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v37 + 6);
      *(_OWORD *)v39 = *(__int128 *)((char *)v37 + 56);
      *(_OWORD *)(v39 + 16) = *(__int128 *)((char *)v37 + 72);
      *(_QWORD *)(v39 + 32) = *((_QWORD *)v37 + 11);
      *(_QWORD *)(a4 + 48) = v39;
    }
    else
    {
      *(_OWORD *)a4 = v38;
    }
  }
  return v34;
}
