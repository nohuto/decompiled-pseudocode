/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C0154070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00E3ECC (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
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
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rbx
  HDC v33; // rcx
  struct tagWND *v34; // rax
  char v35; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-137h] BYREF
  int v37; // [rsp+34h] [rbp-134h]
  _DWORD v38[8]; // [rsp+38h] [rbp-130h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-110h] BYREF
  __int64 v40; // [rsp+60h] [rbp-108h] BYREF
  _QWORD *v41; // [rsp+68h] [rbp-100h]
  __int64 v42; // [rsp+70h] [rbp-F8h]
  __int128 v43; // [rsp+78h] [rbp-F0h]
  __int64 v44; // [rsp+88h] [rbp-E0h]
  __int64 v45; // [rsp+90h] [rbp-D8h]
  __int128 v46; // [rsp+B0h] [rbp-B8h]
  __int64 v47; // [rsp+C0h] [rbp-A8h] BYREF
  int v48; // [rsp+C8h] [rbp-A0h]
  int v49; // [rsp+CCh] [rbp-9Ch]
  __int64 v50; // [rsp+D0h] [rbp-98h]
  __int128 v51; // [rsp+D8h] [rbp-90h]
  __int128 v52; // [rsp+E8h] [rbp-80h]
  __int128 v53; // [rsp+F8h] [rbp-70h]
  __int128 v54; // [rsp+108h] [rbp-60h]
  __int64 v55; // [rsp+118h] [rbp-50h]
  __int64 v56; // [rsp+120h] [rbp-48h]

  v37 = a2;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0uLL;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v49 = 0;
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*((_QWORD *)a4 + 4), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v33 = (HDC)*((_QWORD *)a4 + 4);
    if ( v33 )
    {
      v34 = WindowFromDC(v33);
      if ( v34 )
      {
        v14 = *((_QWORD *)a4 + 4);
        *((_QWORD *)a4 + 4) = _GetDC(v34);
      }
    }
  }
  v47 = v13;
  v48 = v37;
  v50 = a3;
  *((_DWORD *)a4 + 5) = 0;
  v51 = *a4;
  v52 = a4[1];
  v53 = a4[2];
  v54 = a4[3];
  v55 = a5;
  v56 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17);
  v40 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v40;
  v41 = a1;
  if ( a1 )
    HMLockObject(a1);
  v20 = *(_QWORD *)(v12 + 472);
  v46 = *(_OWORD *)(v20 + 64);
  v43 = v46;
  v44 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v13;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v22;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    gdwInAtomicOperation,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(12LL);
  v23 = KeUserModeCallback(12LL, &v47, 104LL, &v39, v38);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v29 + 64) = v46;
  *(_QWORD *)(v29 + 80) = v44;
  if ( v23 < 0 || v38[0] != 24 )
    return 0LL;
  v30 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v45 = *v30;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*((_QWORD *)a4 + 4));
    *((_QWORD *)a4 + 4) = v14;
  }
  return v31;
}
