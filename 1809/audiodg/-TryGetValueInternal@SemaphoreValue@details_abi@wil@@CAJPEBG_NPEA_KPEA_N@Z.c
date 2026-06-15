/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14003053C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14002E288 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002E520 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x14002F118 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14002FDD4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140030368 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // esi
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rax
  WCHAR *v9; // rdx
  __int64 v10; // rax
  char *v11; // r8
  WCHAR v12; // r9
  WCHAR *v13; // rax
  wil::details *v14; // rax
  wil::details *v15; // rdi
  void *v16; // rdx
  const char *v17; // r9
  int ValueFromSemaphore; // eax
  int v19; // ebp
  __int64 v20; // rcx
  WCHAR *v21; // rax
  WCHAR *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  char *v25; // r8
  WCHAR v26; // cx
  WCHAR *v27; // rax
  wil::details *v28; // rax
  const char *v29; // r9
  wil::details *v30; // rbx
  unsigned int LastError; // ebp
  int v32; // eax
  void *v33; // rdx
  void *v34; // rdx
  int v36; // [rsp+20h] [rbp-248h] BYREF
  int v37[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v6 = 260LL;
  v7 = Name;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = 260 - v6;
  if ( v6 )
  {
    v9 = &Name[v8];
    if ( v8 != 260 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v10 )
          break;
        v12 = *(WCHAR *)((char *)v9 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v9 = v12;
        --v10;
        ++v9;
        --v6;
      }
      while ( v6 );
    }
    v13 = v9 - 1;
    if ( v6 )
      v13 = v9;
    *v13 = 0;
  }
  v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v15 = v14;
  if ( v14 )
  {
    v37[0] = 0;
    v36 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v37);
    v19 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      v4 = v19;
      goto LABEL_35;
    }
    v20 = 260LL;
    v21 = Name;
    do
    {
      if ( !*v21 )
        break;
      ++v21;
      --v20;
    }
    while ( v20 );
    if ( v20 )
    {
      v22 = &Name[260 - v20];
      v23 = v20;
      v24 = 2147483646LL;
      v25 = (char *)((char *)L"h" - (char *)v22);
      do
      {
        if ( !v24 )
          break;
        v26 = *(WCHAR *)((char *)v22 + (_QWORD)v25);
        if ( !v26 )
          break;
        *v22 = v26;
        --v24;
        ++v22;
        --v23;
      }
      while ( v23 );
      v27 = v22 - 1;
      if ( v23 )
        v27 = v22;
      *v27 = 0;
    }
    v28 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v30 = v28;
    if ( v28 )
    {
      v32 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v28, &v36);
      LastError = v32;
      if ( v32 >= 0 )
      {
        wil::details::CloseHandle(v30, v33);
        *a3 = ((__int64)v36 << 31) | v37[0];
        goto LABEL_35;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, (__int64)"wil", (const char *)(unsigned int)v32);
      wil::details::CloseHandle(v30, v34);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v29);
    }
    v4 = LastError;
    goto LABEL_35;
  }
  if ( GetLastError() != 2 )
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v17);
LABEL_35:
  if ( v15 )
    wil::details::CloseHandle(v15, v16);
  return v4;
}
