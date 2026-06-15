/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180029F94
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180029B40 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180029DE0 (-StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180029F18 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002C020 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BC738 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180137DB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LaunchADGProcess(wchar_t *this, unsigned __int8 a2)
{
  char v4; // si
  size_t v5; // rdx
  const unsigned __int16 *v6; // r8
  const char *v7; // r9
  int ADGProcessSD; // eax
  unsigned int LastError; // ebx
  const char *v10; // r9
  HANDLE hProcess; // r14
  char *v12; // rsi
  __int64 v14; // rdx
  DWORD v15; // ebx
  char *v16; // rcx
  struct _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+58h] [rbp-B0h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-80h] BYREF
  wchar_t *v20[3]; // [rsp+90h] [rbp-78h] BYREF
  char v21; // [rsp+A8h] [rbp-60h]
  struct _STARTUPINFOW StartupInfo; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR Buffer[264]; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v20[1] = (wchar_t *)-2LL;
  v20[2] = this;
  v4 = 1;
  v21 = 1;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x65,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v7);
    goto LABEL_11;
  }
  ADGProcessSD = StringCbCatExW(Buffer, v5, v6, v20, &v19);
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v14 = 105LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessSD);
    goto LABEL_11;
  }
  ADGProcessSD = StringCbPrintfW(v20[0], v19, L" 0x%Ix 0x%Ix", *((_QWORD *)this + 14), *((_QWORD *)this + 15));
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v14 = 107LL;
    goto LABEL_17;
  }
  memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
  StartupInfo.cb = 104;
  memset(&ProcessAttributes.nLength + 1, 0, 20);
  ProcessAttributes.nLength = 24;
  ADGProcessSD = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor);
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v14 = 116LL;
    goto LABEL_17;
  }
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  if ( CreateProcessW(0LL, Buffer, &ProcessAttributes, 0LL, 1, a2 << 18, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
  {
    hProcess = ProcessInformation.hProcess;
    v12 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v15 = GetLastError();
      CloseHandle(v12);
      SetLastError(v15);
    }
    *((_QWORD *)this + 11) = hProcess;
    *((_DWORD *)this + 24) = ProcessInformation.dwProcessId;
    v4 = 0;
    LastError = 0;
    if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(ProcessInformation.hThread);
      ProcessInformation.hThread = 0LL;
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x78,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v10);
  }
  operator delete(ProcessAttributes.lpSecurityDescriptor);
  ProcessAttributes.lpSecurityDescriptor = 0LL;
LABEL_11:
  if ( v4 )
  {
    v16 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      WaitForSingleObjectEx(v16, 0xFFFFFFFF, 0);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        this + 44,
        0LL);
      *((_DWORD *)this + 24) = 0;
    }
  }
  return LastError;
}
