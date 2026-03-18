/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C0129F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C00E50F0 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
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
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 v16; // rdx
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
  HDC v30; // rcx
  struct tagWND *v31; // rax
  char v32; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v33[3]; // [rsp+31h] [rbp-127h] BYREF
  int v34; // [rsp+34h] [rbp-124h]
  _DWORD v35[6]; // [rsp+38h] [rbp-120h] BYREF
  __int128 v36; // [rsp+50h] [rbp-108h]
  __int64 v37; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v38; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-E0h] BYREF
  volatile signed __int32 *v40; // [rsp+80h] [rbp-D8h]
  __int64 v41; // [rsp+88h] [rbp-D0h]
  __int64 v42; // [rsp+90h] [rbp-C8h]
  _QWORD v43[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v34 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  memset(v43, 0, 0x68uLL);
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v30 = *(HDC *)(a4 + 32);
    if ( v30 )
    {
      v31 = WindowFromDC(v30);
      if ( v31 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v31);
      }
    }
  }
  v43[0] = v13;
  LODWORD(v43[1]) = v34;
  v43[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v43[3] = *(_OWORD *)a4;
  *(_OWORD *)&v43[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v43[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v43[9] = *(_OWORD *)(a4 + 48);
  v43[11] = a5;
  v43[12] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  v39 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v12 + 472);
  v36 = *(_OWORD *)(v18 + 64);
  v37 = *(_QWORD *)(v18 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v33,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(12LL);
  v21 = KeUserModeCallback(12LL, v43, 104LL, &v38, v35);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v33, v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v26 + 64) = v36;
  *(_QWORD *)(v26 + 80) = v37;
  if ( v21 < 0 || v35[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v42 = *v27;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v14;
  }
  return v28;
}
