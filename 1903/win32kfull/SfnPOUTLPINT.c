/*
 * XREFs of SfnPOUTLPINT @ 0x1C021C300
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E3CB8 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        _QWORD *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  SIZE_T v21; // r13
  unsigned __int8 *result; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r9
  unsigned int v27; // r8d
  void *v28; // r12
  __int64 v29; // rdx
  int v30; // r11d
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 *v45; // rcx
  __int64 v46; // rdi
  ULONG64 v47; // rcx
  PVOID *v48; // rdx
  char v49; // [rsp+30h] [rbp-3A8h] BYREF
  _BYTE v50[3]; // [rsp+31h] [rbp-3A7h] BYREF
  unsigned int v51; // [rsp+34h] [rbp-3A4h]
  unsigned __int8 *v52; // [rsp+38h] [rbp-3A0h]
  _DWORD v53[8]; // [rsp+40h] [rbp-398h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp-378h] BYREF
  void *v55[2]; // [rsp+68h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-350h] BYREF
  __int64 v57; // [rsp+90h] [rbp-348h] BYREF
  _QWORD *v58; // [rsp+98h] [rbp-340h]
  __int64 v59; // [rsp+A0h] [rbp-338h]
  __int128 v60; // [rsp+A8h] [rbp-330h]
  __int64 v61; // [rsp+B8h] [rbp-320h]
  _QWORD v62[3]; // [rsp+C0h] [rbp-318h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-300h]
  volatile void *Address; // [rsp+E8h] [rbp-2F0h]
  __int64 v65; // [rsp+F0h] [rbp-2E8h]
  __int128 v66; // [rsp+118h] [rbp-2C0h]
  volatile void *v67; // [rsp+128h] [rbp-2B0h]
  unsigned __int8 v68[96]; // [rsp+130h] [rbp-2A8h] BYREF
  unsigned __int8 v69[512]; // [rsp+190h] [rbp-248h] BYREF

  v55[0] = a4;
  memset(v68, 0, sizeof(v68));
  v11 = v68;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0uLL;
  v61 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
  v18 = ThreadWin32Thread;
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v19 = 0LL;
  v20 = 4LL * (unsigned int)a3;
  if ( v20 > 0xFFFFFFFF )
    goto LABEL_38;
  v51 = 4 * a3;
  v21 = (unsigned int)v20;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v20, v69, 0, 0x200uLL);
  v11 = result;
  v52 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
  memset(v62, 0, sizeof(v62));
  if ( v11 != v68 && v11 != v69 )
    PushW32ThreadLock((__int64)v11, v62, (__int64)Win32FreePool, v26);
  *((_QWORD *)v11 + 5) = v19;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    v27 = v51;
    *((_DWORD *)v11 + 22) = v51;
    v28 = v55[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v55[0], v27, (void **)v11 + 10) < 0 )
      goto LABEL_38;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v51, (void **)v11 + 10) < 0 )
      goto LABEL_38;
    *((_DWORD *)v11 + 22) = v30;
    v28 = v55[0];
  }
  v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v16, v17);
  v57 = *(_QWORD *)(v31 + 408);
  *(_QWORD *)(v31 + 408) = &v57;
  v58 = a1;
  if ( a1 )
    HMLockObject(a1);
  v34 = *(_QWORD *)(v18 + 472);
  *(_OWORD *)v55 = *(_OWORD *)(v34 + 64);
  v60 = *(_OWORD *)v55;
  v61 = *(_QWORD *)(v34 + 80);
  *(_QWORD *)(v34 + 72) = v19;
  if ( a1 )
    v35 = *a1;
  else
    v35 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v18 + 472) + 64LL) = v35;
  if ( a1 )
    v36 = *(_QWORD *)(a1[5] + 224LL);
  else
    v36 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v18 + 472) + 80LL) = v36;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v50,
    gdwInAtomicOperation,
    v32,
    v33);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v37 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v54, v53);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v50,
    v38,
    v39,
    v40);
  ThreadUnlock1(v42, v41, v43);
  v44 = *(_QWORD *)(v18 + 472);
  *(_OWORD *)(v44 + 64) = *(_OWORD *)v55;
  *(_QWORD *)(v44 + 80) = v61;
  if ( v37 >= 0 && v53[0] == 24 )
  {
    v45 = (__int64 *)v54;
    if ( v54 + 8 < v54 || v54 + 8 > MmUserProbeAddress )
      v45 = (__int64 *)MmUserProbeAddress;
    v46 = *v45;
    v65 = *v45;
    if ( v51 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v47 = v54;
      if ( v54 + 24 < v54 || v54 + 24 > MmUserProbeAddress )
        v47 = MmUserProbeAddress;
      v63 = *(_OWORD *)v47;
      Address = *(volatile void **)(v47 + 16);
      v66 = v63;
      v67 = Address;
      ProbeForRead(Address, v21, 4u);
      memmove(v28, (const void *)Address, v21);
    }
    goto LABEL_39;
  }
LABEL_38:
  v46 = 0LL;
LABEL_39:
  if ( v11 != v68 && v11 != v69 )
  {
    v48 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v48, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v62, (__int64)v48, v16, v17);
  }
  return (unsigned __int8 *)v46;
}
