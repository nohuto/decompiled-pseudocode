/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0228FF4
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C022AAA0 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C01641F4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01E14B0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ValidateDelegatePointerList @ 0x1C01F0B4C (ValidateDelegatePointerList.c)
 *     _DelegateCapturePointers @ 0x1C01F114C (_DelegateCapturePointers.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r15
  struct CInpLockGuard *TouchProcessorLock; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  CInpLockGuard *v24[5]; // [rsp+30h] [rbp-28h] BYREF
  char v25; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v24, TouchProcessorLock);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
  v10 = gptiCurrent;
  v11 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x2000) == 0 )
  {
    v12 = 5LL;
LABEL_16:
    UserSetLastError(v12, v10, v8, v9);
    goto LABEL_17;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v15 = PsGetCurrentProcessWow64Process(v14),
        ProbeForRead(a3, 4 * v5, v15 != 0 ? 1 : 4),
        v16 = 136 * v5,
        (unsigned __int64)(136 * v5) > 0xFFFFFFFF) )
  {
    v12 = 87LL;
    goto LABEL_16;
  }
  if ( v16 >= 0x2710000 || (v17 = Win32AllocPoolZInit(v16, 1885631317LL), (v18 = v17) == 0) )
  {
    v12 = 8LL;
    goto LABEL_16;
  }
  if ( (unsigned int)ValidateDelegatePointerList(v5, (__int64)a2, (__int64)a3, v17) )
    v11 = DelegateCapturePointers((unsigned int)v5, v18, v20);
  else
    UserSetLastError(87LL, v19, v20, v21);
  Win32FreePool(v18);
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v24);
  UserSessionSwitchLeaveCrit(v22);
  return v11;
}
