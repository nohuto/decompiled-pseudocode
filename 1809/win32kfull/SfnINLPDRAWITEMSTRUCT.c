/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C014AF30
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C00FF34C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rbx
  HDC v29; // rcx
  struct tagWND *v30; // rax
  char v31; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-137h] BYREF
  int v33; // [rsp+34h] [rbp-134h]
  _DWORD v34[8]; // [rsp+38h] [rbp-130h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-110h] BYREF
  __int64 v36; // [rsp+60h] [rbp-108h] BYREF
  volatile signed __int32 *v37; // [rsp+68h] [rbp-100h]
  __int64 v38; // [rsp+70h] [rbp-F8h]
  __int128 v39; // [rsp+78h] [rbp-F0h]
  __int64 v40; // [rsp+88h] [rbp-E0h]
  __int64 v41; // [rsp+90h] [rbp-D8h]
  __int128 v42; // [rsp+B0h] [rbp-B8h]
  _QWORD v43[14]; // [rsp+C0h] [rbp-A8h] BYREF

  v33 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  memset(v43, 0, 0x68uLL);
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v29 = *(HDC *)(a4 + 32);
    if ( v29 )
    {
      v30 = WindowFromDC(v29);
      if ( v30 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v30);
      }
    }
  }
  v43[0] = v13;
  LODWORD(v43[1]) = v33;
  v43[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v43[3] = *(_OWORD *)a4;
  *(_OWORD *)&v43[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v43[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v43[9] = *(_OWORD *)(a4 + 48);
  v43[11] = a5;
  v43[12] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  v36 = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = &v36;
  v37 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v12 + 480);
  v42 = *(_OWORD *)(v18 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v32,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(12LL);
  v21 = KeUserModeCallback(12LL, v43, 104LL, &v35, v34);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32, v22);
  ThreadUnlock1(v24, v23);
  v25 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v25 + 64) = v42;
  *(_QWORD *)(v25 + 80) = v40;
  if ( v21 < 0 || v34[0] != 24 )
    return 0LL;
  v26 = (__int64 *)v35;
  if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v41 = *v26;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v14;
  }
  return v27;
}
