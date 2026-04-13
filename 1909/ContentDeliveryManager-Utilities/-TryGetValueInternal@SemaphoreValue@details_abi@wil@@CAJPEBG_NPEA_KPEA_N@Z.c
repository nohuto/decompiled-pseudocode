/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003B64
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180013708 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180013C24 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001A38 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800036FC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180003A10 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v4; // r9
  WCHAR *v5; // rdx
  signed __int64 v6; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  HANDLE v10; // rax
  void *v11; // rdi
  const char *v12; // r9
  __int64 v13; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  HANDLE v16; // rax
  void *v17; // rbx
  int v18; // eax
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // r8
  const char *v24; // r9
  int v26; // [rsp+28h] [rbp-E0h] BYREF
  int v27[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  v4 = 260LL;
  v5 = Name;
  v6 = a1 - (char *)Name;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v5 + v6);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = v5 - 1;
  if ( v4 )
    v9 = v5;
  *v9 = 0;
  StringCchCatW(Name, 260LL, (char *)L"_p0");
  v10 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  if ( !v10 )
  {
    if ( GetLastError() != 2 )
    {
      v13 = 192LL;
LABEL_10:
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v13, (__int64)"wil", v12);
      goto LABEL_21;
    }
LABEL_20:
    LastError = 0;
    goto LABEL_21;
  }
  v27[0] = 0;
  v26 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v27);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"wil",
      (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_21;
  }
  StringCchCatW(Name, 260LL, (char *)L"h");
  v16 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v17 = v16;
  if ( !v16 )
  {
    v13 = 204LL;
    goto LABEL_10;
  }
  v18 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, &v26);
  LastError = v18;
  if ( v18 >= 0 )
  {
    if ( !CloseHandle(v17) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v21, v22);
      JUMPOUT(0x180003D8DLL);
    }
    *a3 = ((__int64)v26 << 31) | v27[0];
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, (__int64)"wil", (const char *)(unsigned int)v18);
  if ( !CloseHandle(v17) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v19, v20);
    __debugbreak();
  }
LABEL_21:
  if ( v11 && !CloseHandle(v11) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v23, v24);
    __debugbreak();
  }
  return LastError;
}
