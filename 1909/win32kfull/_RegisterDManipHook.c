/*
 * XREFs of _RegisterDManipHook @ 0x1C000F850
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C000F800 (NtUserRegisterDManipHook.c)
 * Callees:
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C000F99C (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x1C000FA08 (RtlStringCopyWorkerW.c)
 *     IsPrivileged @ 0x1C0012AE0 (IsPrivileged.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C0053630 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C0053674 (GetHmodTableIndex.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 RegisterDManipHook()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  const wchar_t *NtSystemRoot; // rax
  size_t *v5; // r8
  unsigned __int64 v6; // rdx
  const unsigned __int16 *v7; // r8
  unsigned int HmodTableIndex; // eax
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  size_t v13; // [rsp+20h] [rbp-248h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v3 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v1, v0) + 772), (_DWORD)v3 != luidSystem[0])
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v3, v2) + 776) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v9 = 5LL;
    goto LABEL_10;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v5, NtSystemRoot, v13) < 0 || (int)RtlStringCbCatW(pszDest, v6, v7) < 0 )
  {
    v9 = 3LL;
    goto LABEL_10;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, pszDest);
  RtlInitUnicodeString(&DestinationString, pszDest);
  HmodTableIndex = GetHmodTableIndex(&DestinationString);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v9 = 126LL;
LABEL_10:
    UserSetLastError(v9);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  gppiDManipHook = PsGetCurrentProcessWin32Process(v12, v11);
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
