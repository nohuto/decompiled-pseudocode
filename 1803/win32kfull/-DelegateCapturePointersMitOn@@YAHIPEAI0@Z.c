/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01EB100
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C01ECA20 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ValidateDelegatePointerList @ 0x1C01B87BC (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01B88B4 (_DelegateCapturePointers.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  CInpLockGuard *TouchProcessorLock; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE v26[56]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuard::LockExclusive(TouchProcessorLock);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  v10 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x2000) == 0 )
  {
    v11 = 5LL;
LABEL_16:
    UserSetLastError(v11, v7);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gptiCurrent, v7, v8, v9),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v17 = PsGetCurrentProcessWow64Process(v14, v13, v15, v16),
        ProbeForRead(a3, 4 * v5, v17 != 0 ? 1 : 4),
        v7 = 0xFFFFFFFFLL,
        (unsigned __int64)(192 * v5) > 0xFFFFFFFF) )
  {
    v11 = 87LL;
    goto LABEL_16;
  }
  if ( (unsigned int)(192 * v5) >= 0x2710000
    || (v18 = Win32AllocPoolZInit((unsigned int)(192 * v5), 1885631317LL), (v19 = v18) == 0) )
  {
    v11 = 8LL;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v18) )
    v10 = DelegateCapturePointers(v5, v19);
  else
    UserSetLastError(87LL, v20);
  Win32FreePool(v19);
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  CInpLockGuard::UnLock(TouchProcessorLock);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v10;
}
