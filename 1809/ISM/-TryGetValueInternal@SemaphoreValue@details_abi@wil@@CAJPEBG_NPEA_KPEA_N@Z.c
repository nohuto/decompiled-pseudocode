/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003A00
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004EFC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180030CEC (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001D78 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001E00 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800038AC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  HANDLE v5; // rax
  void *v6; // rdi
  const char *v7; // r9
  __int64 v8; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  HANDLE v11; // rax
  void *v12; // rbx
  int v13; // eax
  const char *v14; // r9
  const char *v15; // r9
  const char *v16; // r9
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  StringCchCatW(Name, 260LL, (char *)L"_p0");
  v5 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v6 = v5;
  if ( !v5 )
  {
    if ( GetLastError() != 2 )
    {
      v8 = 200LL;
LABEL_4:
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (__int64)"wil", v7);
      goto LABEL_15;
    }
LABEL_14:
    LastError = 0;
    goto LABEL_15;
  }
  v19[0] = 0;
  v18 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v5, v19);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"wil",
      (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_15;
  }
  StringCchCatW(Name, 260LL, (char *)L"h");
  v11 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v12 = v11;
  if ( !v11 )
  {
    v8 = 212LL;
    goto LABEL_4;
  }
  v13 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v11, &v18);
  LastError = v13;
  if ( v13 >= 0 )
  {
    if ( !CloseHandle(v12) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v15);
      JUMPOUT(0x180003C00LL);
    }
    *a3 = ((__int64)v18 << 31) | v19[0];
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, (__int64)"wil", (const char *)(unsigned int)v13);
  if ( !CloseHandle(v12) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v14);
    __debugbreak();
  }
LABEL_15:
  if ( v6 && !CloseHandle(v6) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v16);
    __debugbreak();
  }
  return LastError;
}
