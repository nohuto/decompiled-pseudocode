/*
 * XREFs of xxxClientFindMnemChar @ 0x1C021E7C4
 * Callers:
 *     xxxMNFindChar @ 0x1C02483AC (xxxMNFindChar.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
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

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int8 *v7; // rdi
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // rbx
  PVOID *v14; // rdx
  char v15; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v17; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v20[6]; // [rsp+50h] [rbp-298h] BYREF
  unsigned __int8 v21[72]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v22[512]; // [rsp+D0h] [rbp-218h] BYREF

  memset(v21, 0, sizeof(v21));
  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v22, 1, 0x200uLL);
  v7 = result;
  v18[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
    memset(v20, 0, 24);
    if ( v7 != v21 && v7 != v22 )
      PushW32ThreadLock((__int64)v7, v20, (__int64)Win32FreePool);
    *((_WORD *)v7 + 28) = a2;
    *((_DWORD *)v7 + 15) = 1;
    *((_DWORD *)v7 + 16) = 1;
    *((_WORD *)v7 + 20) = *(_WORD *)a1;
    *((_WORD *)v7 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v7,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v7 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v16,
      gdwInAtomicOperation,
      v8);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
    EtwTraceBeginCallback(66LL);
    *((_QWORD *)v7 + 2) = 0LL;
    v9 = KeUserModeCallback(66LL, v7, *(unsigned int *)v7, v18, &v17);
    EtwTraceEndCallback(66LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v16,
      v10,
      v11);
    if ( v9 < 0 )
      goto LABEL_15;
    if ( v17 == 24 )
    {
      v12 = (__int64 *)v18[0];
      if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
        v12 = (__int64 *)MmUserProbeAddress;
      v13 = *v12;
      v20[3] = *v12;
    }
    else
    {
LABEL_15:
      LODWORD(v13) = 0;
    }
    if ( v7 != v21 && v7 != v22 )
    {
      v14 = (PVOID *)(v7 + 32);
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v20, (__int64)v14, v8);
    }
    return (unsigned __int8 *)(unsigned int)v13;
  }
  return result;
}
