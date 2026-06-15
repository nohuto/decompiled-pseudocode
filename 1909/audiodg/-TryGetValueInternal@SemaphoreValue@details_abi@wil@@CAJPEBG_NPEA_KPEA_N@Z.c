/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1400288DC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1400264C8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140026760 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140027468 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140028114 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400286A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v5; // rcx
  WCHAR *v6; // rax
  __int64 v7; // rax
  WCHAR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rax
  WCHAR v12; // r9
  WCHAR *v13; // rax
  wil::details *v14; // rax
  wil::details *v15; // rdi
  void *v16; // rdx
  const char *v17; // r9
  __int64 v18; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v21; // rcx
  WCHAR *v22; // rax
  __int64 v23; // rax
  WCHAR *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  char *v27; // r8
  WCHAR v28; // ax
  WCHAR *v29; // rax
  wil::details *v30; // rax
  wil::details *v31; // rbx
  int v32; // eax
  void *v33; // rdx
  void *v34; // rdx
  int v36; // [rsp+28h] [rbp-E0h] BYREF
  int v37[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v5 = 260LL;
  v6 = Name;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( v5 )
    v7 = 260 - v5;
  else
    v7 = 0LL;
  if ( v5 )
  {
    v8 = &Name[v7];
    v9 = 260 - v7;
    if ( v7 != 260 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)L"_p0" - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
  }
  v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v15 = v14;
  if ( v14 )
  {
    v37[0] = 0;
    v36 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v37);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC6,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      goto LABEL_43;
    }
    v21 = 260LL;
    v22 = Name;
    do
    {
      if ( !*v22 )
        break;
      ++v22;
      --v21;
    }
    while ( v21 );
    if ( v21 )
      v23 = 260 - v21;
    else
      v23 = 0LL;
    if ( v21 )
    {
      v24 = &Name[v23];
      v25 = 260 - v23;
      if ( 260 != v23 )
      {
        v26 = 2147483646LL;
        v27 = (char *)((char *)L"h" - (char *)v24);
        do
        {
          if ( !v26 )
            break;
          v28 = *(WCHAR *)((char *)v24 + (_QWORD)v27);
          if ( !v28 )
            break;
          *v24 = v28;
          --v26;
          ++v24;
          --v25;
        }
        while ( v25 );
      }
      v29 = v24 - 1;
      if ( v25 )
        v29 = v24;
      *v29 = 0;
    }
    v30 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v31 = v30;
    if ( !v30 )
    {
      v18 = 204LL;
      goto LABEL_19;
    }
    v32 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v30, &v36);
    LastError = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, (__int64)"wil", (const char *)(unsigned int)v32);
      wil::details::CloseHandle(v31, v34);
      goto LABEL_43;
    }
    wil::details::CloseHandle(v31, v33);
    *a3 = ((__int64)v36 << 31) | v37[0];
  }
  else if ( GetLastError() != 2 )
  {
    v18 = 192LL;
LABEL_19:
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v18, (__int64)"wil", v17);
    goto LABEL_43;
  }
  LastError = 0;
LABEL_43:
  if ( v15 )
    wil::details::CloseHandle(v15, v16);
  return LastError;
}
