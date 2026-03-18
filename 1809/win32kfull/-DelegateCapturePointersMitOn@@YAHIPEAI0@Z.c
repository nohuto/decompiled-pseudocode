/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0211080
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C0212D00 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C015E630 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C015E674 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ValidateDelegatePointerList @ 0x1C01DB41C (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01DB518 (_DelegateCapturePointers.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r15
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  CInpLockGuard *v27[7]; // [rsp+38h] [rbp-50h] BYREF
  char v28; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v27, TouchProcessorLock, v7);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
  v11 = gptiCurrent;
  v12 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x2000) == 0 )
  {
    v13 = 5LL;
LABEL_16:
    UserSetLastError(v13, v11, v9, v10);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v16 = PsGetCurrentProcessWow64Process(v15),
        ProbeForRead(a3, 4 * v5, v16 != 0 ? 1 : 4),
        v11 = 0xFFFFFFFFLL,
        (unsigned __int64)(192 * v5) > 0xFFFFFFFF) )
  {
    v13 = 87LL;
    goto LABEL_16;
  }
  if ( (unsigned int)(192 * v5) >= 0x2710000
    || (v17 = Win32AllocPoolZInit((unsigned int)(192 * v5), 1885631317LL), (v18 = v17) == 0) )
  {
    v13 = 8LL;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v17) )
    v12 = DelegateCapturePointers(v5, v18);
  else
    UserSetLastError(87LL, v19, v20, v21);
  Win32FreePool(v18);
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v28);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v27);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return v12;
}
