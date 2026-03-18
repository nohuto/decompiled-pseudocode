/*
 * XREFs of xxxClientFindMnemChar @ 0x1C01E1818
 * Callers:
 *     xxxMNFindChar @ 0x1C0206D70 (xxxMNFindChar.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  char v11; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v13; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int8 v17[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v18[512]; // [rsp+D0h] [rbp-218h] BYREF

  result = AllocCallbackMessage(72, 1u, a1[1], v18, 1, 0x200uLL);
  v6 = result;
  v14[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    if ( v6 != v17 && v6 != v18 )
      PushW32ThreadLock((__int64)v6, v16, (__int64)Win32FreePool);
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
      (ReleaseAndReacquirePerObjectLocks *)v12,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
    EtwTraceBeginCallback(66LL);
    *((_QWORD *)v6 + 2) = 0LL;
    v7 = KeUserModeCallback(66LL, v6, *(unsigned int *)v6, v14, &v13);
    EtwTraceEndCallback(66LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v12, v8);
    if ( v7 < 0 )
      goto LABEL_15;
    if ( v13 == 24 )
    {
      v9 = (ULONG_PTR *)v14[0];
      if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
        v9 = (ULONG_PTR *)MmUserProbeAddress;
      v10 = *v9;
      RegionSize[1] = *v9;
    }
    else
    {
LABEL_15:
      LODWORD(v10) = 0;
    }
    if ( v6 != v17 && v6 != v18 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v16);
    }
    return (unsigned __int8 *)(unsigned int)v10;
  }
  return result;
}
