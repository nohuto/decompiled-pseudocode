/*
 * XREFs of _RegisterDManipHook @ 0x1C0130970
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C0130920 (NtUserRegisterDManipHook.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     IsPrivileged @ 0x1C0086440 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00B27D0 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00B2814 (GetHmodTableIndex.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0130ABC (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x1C0130B28 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(__int64 a1, unsigned __int64 a2, const unsigned __int16 *a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  const wchar_t *NtSystemRoot; // rax
  size_t *v9; // r8
  int HmodTableIndex; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // [rsp+20h] [rbp-248h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v5 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v4, a2) + 772), (_DWORD)v5 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, a2),
        a2 = luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 776) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v11 = 5LL;
    goto LABEL_10;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v7, a2);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v9, NtSystemRoot, v15) < 0 || (int)RtlStringCbCatW(pszDest, a2, a3) < 0 )
  {
    v11 = 3LL;
    goto LABEL_10;
  }
  RtlStringCchCopyW((char *)gszModuleDManipHook, 260LL, (char *)pszDest);
  RtlInitUnicodeString(&DestinationString, pszDest);
  HmodTableIndex = GetHmodTableIndex((unsigned int *)&DestinationString.Length);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v11 = 126LL;
LABEL_10:
    UserSetLastError(v11, a2, (__int64)a3, a4);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  gppiDManipHook = PsGetCurrentProcessWin32Process(v14, v13);
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
