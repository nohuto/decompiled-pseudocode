/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180042C50
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180030000 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180042D40 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800ADD68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C2BC4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rbx
  void *v2; // rcx
  unsigned int LockSemaphore; // esi
  unsigned int v5; // edi
  const char *v6; // r9
  int LastError; // eax
  int v8; // esi
  signed int v9; // eax
  BOOL bAlertable; // [rsp+20h] [rbp-38h]
  BOOL bAlertablea; // [rsp+20h] [rbp-38h]
  HANDLE v12[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CAudioDGProcess *ExitCode; // [rsp+60h] [rbp+8h] BYREF
  LONG *p_LockCount; // [rsp+68h] [rbp+10h]

  ExitCode = this;
  v1 = g_ADGProcess;
  v2 = *(void **)&g_ADGProcess[2].LockCount;
  if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2004287472;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)0x88890010LL,
      bAlertable);
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)v5,
      bAlertablea);
    return v5;
  }
  v12[0] = (HANDLE)g_ADGProcess[2].SpinCount;
  v12[1] = v2;
  if ( WaitForMultipleObjectsEx(2u, v12, 0, 0xFFFFFFFF, 0) != 1 )
    goto LABEL_3;
  if ( !GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xC3,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v6);
    goto LABEL_21;
  }
  if ( (_DWORD)ExitCode == -1073740760 )
  {
    v5 = -2147024319;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)0x80070241LL,
      bAlertablea);
    goto LABEL_22;
  }
  if ( !(_DWORD)ExitCode )
    goto LABEL_3;
  LastError = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0xC9,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                (const char *)(unsigned int)ExitCode,
                bAlertablea);
LABEL_21:
  v5 = LastError;
  if ( LastError < 0 )
    goto LABEL_22;
LABEL_3:
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
LABEL_13:
        LODWORD(v1[2].LockSemaphore) = LockSemaphore;
        BYTE4(v1[2].OwningThread) = 1;
        goto LABEL_5;
      }
      if ( (int)ExitCode <= 0 )
        goto LABEL_13;
      v8 = (unsigned __int16)ExitCode;
    }
    else
    {
      v9 = GetLastError();
      LockSemaphore = v9;
      LODWORD(ExitCode) = v9;
      if ( v9 <= 0 )
        goto LABEL_13;
      v8 = (unsigned __int16)v9;
    }
    LockSemaphore = v8 | 0x80070000;
    goto LABEL_13;
  }
  LockSemaphore = (unsigned int)v1[2].LockSemaphore;
LABEL_5:
  if ( (LockSemaphore & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)LockSemaphore,
      bAlertablea);
  if ( v1 != (LPCRITICAL_SECTION)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  return LockSemaphore;
}
