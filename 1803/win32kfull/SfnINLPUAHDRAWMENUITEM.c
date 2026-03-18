/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C00EB790
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C00EBA98 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rbx
  char v30; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-177h] BYREF
  int v32; // [rsp+34h] [rbp-174h]
  _DWORD v33[6]; // [rsp+38h] [rbp-170h] BYREF
  __int128 v34; // [rsp+50h] [rbp-158h]
  __int64 v35; // [rsp+60h] [rbp-148h]
  unsigned __int64 v36; // [rsp+70h] [rbp-138h] BYREF
  __int64 v37; // [rsp+78h] [rbp-130h] BYREF
  volatile signed __int32 *v38; // [rsp+80h] [rbp-128h]
  __int64 v39; // [rsp+88h] [rbp-120h]
  __int64 v40; // [rsp+90h] [rbp-118h]
  _QWORD v41[24]; // [rsp+B0h] [rbp-F8h] BYREF

  v32 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v34 = 0uLL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  memset(v41, 0, 0xB8uLL);
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v16 = v15;
  if ( v15 )
  {
    v14 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v15;
    *(_QWORD *)(a4 + 72) = v15;
  }
  v41[0] = v13;
  LODWORD(v41[1]) = v32;
  v41[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  *(_OWORD *)&v41[3] = *(_OWORD *)a4;
  *(_OWORD *)&v41[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v41[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v41[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v41[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v41[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v41[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v41[17] = *(_OWORD *)(a4 + 112);
  *(_OWORD *)&v41[19] = *(_OWORD *)(a4 + 128);
  v41[21] = a5;
  v41[22] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL);
  v37 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v37;
  v38 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v12 + 472);
  v34 = *(_OWORD *)(v18 + 64);
  v35 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v31,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(107LL);
  v21 = KeUserModeCallback(107LL, v41, 184LL, &v36, v33);
  EtwTraceEndCallback(107LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31, v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v26 + 64) = v34;
  *(_QWORD *)(v26 + 80) = v35;
  if ( v21 < 0 || v33[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v40 = *v27;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v14;
      *(_QWORD *)(a4 + 72) = v14;
    }
  }
  return v28;
}
