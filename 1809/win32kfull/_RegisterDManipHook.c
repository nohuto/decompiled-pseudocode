/*
 * XREFs of _RegisterDManipHook @ 0x1C0125A60
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C0125A10 (NtUserRegisterDManipHook.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00B5D58 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00B5D9C (GetHmodTableIndex.c)
 *     IsPrivileged @ 0x1C00CCBB0 (IsPrivileged.c)
 *     RtlStringCbCatW @ 0x1C0125BA0 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C0125C0C (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(__int64 a1, size_t a2, const wchar_t *a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  const wchar_t *NtSystemRoot; // rax
  size_t *v9; // r8
  int HmodTableIndex; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  size_t v14; // [rsp+20h] [rbp-248h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v5 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v4) + 780), (_DWORD)v5 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v11 = 5LL;
    goto LABEL_10;
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v7, a2, a3);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v9, NtSystemRoot, v14) < 0 || RtlStringCbCatW(pszDest, a2, a3) < 0 )
  {
    v11 = 3LL;
    goto LABEL_10;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, pszDest);
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
  gppiDManipHook = PsGetCurrentProcessWin32Process(v13);
  result = 1LL;
  *gpsi |= 0x10u;
  return result;
}
