/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180049680
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AFB0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180049774 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BC238 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800D0F38 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rdi
  void *v2; // rcx
  unsigned int LockSemaphore; // ebx
  __int64 v5; // rdx
  const char *v6; // r9
  unsigned int LastError; // eax
  int v8; // ebx
  signed int v9; // eax
  unsigned int v10; // [rsp+20h] [rbp-38h]
  HANDLE v11[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CAudioDGProcess *ExitCode; // [rsp+60h] [rbp+8h] BYREF
  LONG *p_LockCount; // [rsp+68h] [rbp+10h]

  ExitCode = this;
  v1 = g_ADGProcess;
  v2 = *(void **)&g_ADGProcess[2].LockCount;
  if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LockSemaphore = -2004287472;
    v5 = 183LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)LockSemaphore);
    goto LABEL_19;
  }
  v11[0] = (HANDLE)g_ADGProcess[2].SpinCount;
  v11[1] = v2;
  if ( WaitForMultipleObjectsEx(2u, v11, 0, 0xFFFFFFFF, 0) != 1 )
  {
    LockSemaphore = 0;
    goto LABEL_4;
  }
  if ( !GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xC3,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v6);
LABEL_22:
    LockSemaphore = LastError;
LABEL_4:
    if ( (LockSemaphore & 0x80000000) == 0 )
      goto LABEL_5;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)LockSemaphore);
    return LockSemaphore;
  }
  if ( (_DWORD)ExitCode == -1073740760 )
  {
    LockSemaphore = -2147024319;
    v5 = 197LL;
    goto LABEL_18;
  }
  if ( (_DWORD)ExitCode )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0xC9,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  (const char *)(unsigned int)ExitCode,
                  v10);
    goto LABEL_22;
  }
LABEL_5:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  p_LockCount = &v1[1].LockCount;
  if ( !BYTE4(v1[2].OwningThread) )
  {
    if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
    {
      LockSemaphore = (unsigned int)ExitCode;
      if ( (_DWORD)ExitCode == 259 )
      {
        LockSemaphore = CAudioDGProcess::CheckADGStartupStatus((CAudioDGProcess *)v1);
LABEL_15:
        LODWORD(v1[2].LockSemaphore) = LockSemaphore;
        BYTE4(v1[2].OwningThread) = 1;
        goto LABEL_7;
      }
      if ( (int)ExitCode <= 0 )
        goto LABEL_15;
      v8 = (unsigned __int16)ExitCode;
    }
    else
    {
      v9 = GetLastError();
      LockSemaphore = v9;
      LODWORD(ExitCode) = v9;
      if ( v9 <= 0 )
        goto LABEL_15;
      v8 = (unsigned __int16)v9;
    }
    LockSemaphore = v8 | 0x80070000;
    goto LABEL_15;
  }
  LockSemaphore = (unsigned int)v1[2].LockSemaphore;
LABEL_7:
  if ( (LockSemaphore & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12D,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)LockSemaphore);
  if ( v1 != (LPCRITICAL_SECTION)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  return LockSemaphore;
}
