/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C01532B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     _WindowFromDC @ 0x1C010992C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        _QWORD *a1,
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
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rbx
  HDC v36; // rcx
  struct tagWND *v37; // rax
  char v38; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-137h] BYREF
  int v40; // [rsp+34h] [rbp-134h]
  _DWORD v41[8]; // [rsp+38h] [rbp-130h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-110h] BYREF
  __int64 v43; // [rsp+60h] [rbp-108h] BYREF
  _QWORD *v44; // [rsp+68h] [rbp-100h]
  __int64 v45; // [rsp+70h] [rbp-F8h]
  __int128 v46; // [rsp+78h] [rbp-F0h]
  __int64 v47; // [rsp+88h] [rbp-E0h]
  __int64 v48; // [rsp+90h] [rbp-D8h]
  __int128 v49; // [rsp+B0h] [rbp-B8h]
  __int64 v50; // [rsp+C0h] [rbp-A8h] BYREF
  int v51; // [rsp+C8h] [rbp-A0h]
  int v52; // [rsp+CCh] [rbp-9Ch]
  __int64 v53; // [rsp+D0h] [rbp-98h]
  __int128 v54; // [rsp+D8h] [rbp-90h]
  __int128 v55; // [rsp+E8h] [rbp-80h]
  __int128 v56; // [rsp+F8h] [rbp-70h]
  __int128 v57; // [rsp+108h] [rbp-60h]
  __int64 v58; // [rsp+118h] [rbp-50h]
  __int64 v59; // [rsp+120h] [rbp-48h]

  v40 = a2;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0uLL;
  v47 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v52 = 0;
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v36 = *(HDC *)(a4 + 32);
    if ( v36 )
    {
      v37 = WindowFromDC(v36);
      if ( v37 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v37);
      }
    }
  }
  v50 = v13;
  v51 = v40;
  v53 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  v54 = *(_OWORD *)a4;
  v55 = *(_OWORD *)(a4 + 16);
  v56 = *(_OWORD *)(a4 + 32);
  v57 = *(_OWORD *)(a4 + 48);
  v58 = a5;
  v59 = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
  v43 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v43;
  v44 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v12 + 472);
  v49 = *(_OWORD *)(v22 + 64);
  v46 = v49;
  v47 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v13;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(12LL);
  v25 = KeUserModeCallback(12LL, &v50, 104LL, &v42, v41);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v32 + 64) = v49;
  *(_QWORD *)(v32 + 80) = v47;
  if ( v25 < 0 || v41[0] != 24 )
    return 0LL;
  v33 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  v34 = *v33;
  v48 = *v33;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v14;
  }
  return v34;
}
