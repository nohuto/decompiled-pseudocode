/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002F44
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800038E4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001594 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002D18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002D38 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180002DF0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v4; // rdx
  signed __int64 v5; // rcx
  __int64 v7; // r9
  WCHAR v8; // ax
  WCHAR *v9; // rax
  HANDLE v10; // rax
  void *v11; // rdi
  const char *v12; // r9
  __int64 v13; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v16; // rdx
  HANDLE v17; // rax
  void *v18; // rbx
  int v19; // eax
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // r8
  const char *v25; // r9
  int v27; // [rsp+28h] [rbp-E0h] BYREF
  int v28[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  v4 = Name;
  v5 = a1 - (char *)Name;
  v7 = 260LL;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v4 + v5);
    if ( !v8 )
      break;
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v4 - 1;
  if ( v7 )
    v9 = v4;
  *v9 = 0;
  StringCchCatW(Name, (__int64)v4, (char *)L"_p0");
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
  v28[0] = 0;
  v27 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v28);
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
  StringCchCatW(Name, v16, (char *)L"h");
  v17 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v18 = v17;
  if ( !v17 )
  {
    v13 = 204LL;
    goto LABEL_10;
  }
  v19 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v17, &v27);
  LastError = v19;
  if ( v19 >= 0 )
  {
    if ( !CloseHandle(v18) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v22, v23);
      JUMPOUT(0x180003164LL);
    }
    *a3 = ((__int64)v27 << 31) | v28[0];
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, (__int64)"wil", (const char *)(unsigned int)v19);
  if ( !CloseHandle(v18) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v20, v21);
    __debugbreak();
  }
LABEL_21:
  if ( v11 && !CloseHandle(v11) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v24, v25);
    __debugbreak();
  }
  return LastError;
}
