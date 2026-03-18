/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C021B900
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(_QWORD *a1, unsigned int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rdi
  PVOID *v37; // rdx
  char v38; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-367h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-364h]
  unsigned __int8 *v41; // [rsp+38h] [rbp-360h]
  _DWORD v42[8]; // [rsp+40h] [rbp-358h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int64 v45; // [rsp+70h] [rbp-328h] BYREF
  _QWORD *v46; // [rsp+78h] [rbp-320h]
  __int64 v47; // [rsp+80h] [rbp-318h]
  __int128 v48; // [rsp+88h] [rbp-310h]
  __int64 v49; // [rsp+98h] [rbp-300h]
  _QWORD v50[7]; // [rsp+A0h] [rbp-2F8h] BYREF
  __int128 v51; // [rsp+D8h] [rbp-2C0h]
  _DWORD v52[24]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v53[512]; // [rsp+150h] [rbp-248h] BYREF

  memset(v52, 0, 0x58uLL);
  v10 = (unsigned __int8 *)v52;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0uLL;
  v49 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  if ( a4 )
  {
    v17 = 1;
    v18 = 4LL * (unsigned int)a3;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_36;
  }
  else
  {
    LODWORD(v18) = 0;
    v17 = 0;
  }
  v40 = v18;
  if ( v17 )
  {
    result = AllocCallbackMessage(88, v17, (unsigned int)v18, v53, 1, 0x200uLL);
    v10 = result;
    v41 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v52;
    v41 = (unsigned __int8 *)v52;
    memset(&v52[1], 0, 0x54uLL);
    v52[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21);
  memset(v50, 0, 24);
  if ( v10 != (unsigned __int8 *)v52 && v10 != v53 )
    PushW32ThreadLock((__int64)v10, v50, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v16;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, a4, v40, (void **)v10 + 8) < 0 )
      goto LABEL_36;
  }
  else
  {
    *((_QWORD *)v10 + 8) = 0LL;
  }
  *((_QWORD *)v10 + 9) = a5;
  *((_QWORD *)v10 + 10) = a6;
  v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v14);
  v45 = *(_QWORD *)(v23 + 408);
  *(_QWORD *)(v23 + 408) = &v45;
  v46 = a1;
  if ( a1 )
    HMLockObject(a1);
  v25 = *(_QWORD *)(v15 + 472);
  v51 = *(_OWORD *)(v25 + 64);
  v48 = v51;
  v49 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v16;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224LL);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v27;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    gdwInAtomicOperation,
    v24);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v28 = KeUserModeCallback(36LL, v10, *(unsigned int *)v10, &v43, v42);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    v29,
    v30);
  ThreadUnlock1(v32, v31, v33);
  v34 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v34 + 64) = v51;
  *(_QWORD *)(v34 + 80) = v49;
  if ( v28 >= 0 && v42[0] == 24 )
  {
    v35 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v35 = (__int64 *)MmUserProbeAddress;
    v36 = *v35;
    v50[3] = *v35;
    goto LABEL_37;
  }
LABEL_36:
  v36 = 0LL;
LABEL_37:
  if ( v10 != (unsigned __int8 *)v52 && v10 != v53 )
  {
    v37 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v50, (__int64)v37, v14);
  }
  return (unsigned __int8 *)v36;
}
