/*
 * XREFs of xxxClientFindMnemChar @ 0x1C02073A0
 * Callers:
 *     xxxMNFindChar @ 0x1C022FEF4 (xxxMNFindChar.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rdx
  unsigned __int8 *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  ULONG_PTR *v9; // rcx
  ULONG_PTR v10; // rbx
  PVOID *v11; // rdx
  char v12; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v14; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int8 v18[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v19[512]; // [rsp+D0h] [rbp-218h] BYREF

  result = AllocCallbackMessage(72, 1u, a1[1], v19, 1, 0x200uLL);
  v6 = result;
  v15[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    if ( v6 != v18 && v6 != v19 )
      PushW32ThreadLock((__int64)v6, v17, (__int64)Win32FreePool);
    *((_WORD *)v6 + 28) = a2;
    *((_DWORD *)v6 + 15) = 1;
    *((_DWORD *)v6 + 16) = 1;
    *((_WORD *)v6 + 20) = *a1;
    *((_WORD *)v6 + 21) = a1[1];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v6, *((_QWORD *)a1 + 1), (unsigned int)*a1 + 2, (void **)v6 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v13,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
    EtwTraceBeginCallback(66LL);
    *((_QWORD *)v6 + 2) = 0LL;
    v7 = KeUserModeCallback(66LL, v6, *(unsigned int *)v6, v15, &v14);
    EtwTraceEndCallback(66LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13, v8);
    if ( v7 < 0 )
      goto LABEL_15;
    if ( v14 == 24 )
    {
      v9 = (ULONG_PTR *)v15[0];
      if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || v15[0] + 8LL > MmUserProbeAddress )
        v9 = (ULONG_PTR *)MmUserProbeAddress;
      v10 = *v9;
      RegionSize[1] = *v9;
    }
    else
    {
LABEL_15:
      LODWORD(v10) = 0;
    }
    if ( v6 != v18 && v6 != v19 )
    {
      v11 = (PVOID *)(v6 + 32);
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v17, (__int64)v11);
    }
    return (unsigned __int8 *)(unsigned int)v10;
  }
  return result;
}
