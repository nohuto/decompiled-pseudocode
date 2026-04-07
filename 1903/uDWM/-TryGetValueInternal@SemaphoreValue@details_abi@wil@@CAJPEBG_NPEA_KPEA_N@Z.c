/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800421A0
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18004213C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800372E0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800423C0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DA14 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180078190 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  int ValueFromSemaphore; // eax
  unsigned int LastError; // esi
  __int64 v18; // rcx
  WCHAR *v19; // rax
  __int64 v20; // rax
  WCHAR *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  char *v24; // r8
  WCHAR v25; // ax
  WCHAR *v26; // rax
  wil::details *v27; // rax
  const char *v28; // r9
  wil::details *v29; // rbx
  int v30; // eax
  void *v31; // rdx
  void *v32; // rdx
  __int64 v34; // rdx
  void *v35; // rdx
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
  if ( !v14 )
  {
    if ( GetLastError() == 2 )
      goto LABEL_34;
    v34 = 192LL;
    goto LABEL_42;
  }
  v37[0] = 0;
  v36 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v37);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v36);
    goto LABEL_35;
  }
  v18 = 260LL;
  v19 = Name;
  do
  {
    if ( !*v19 )
      break;
    ++v19;
    --v18;
  }
  while ( v18 );
  if ( v18 )
    v20 = 260 - v18;
  else
    v20 = 0LL;
  if ( v18 )
  {
    v21 = &Name[v20];
    v22 = 260 - v20;
    if ( 260 != v20 )
    {
      v23 = 2147483646LL;
      v24 = (char *)((char *)L"h" - (char *)v21);
      do
      {
        if ( !v23 )
          break;
        v25 = *(WCHAR *)((char *)v21 + (_QWORD)v24);
        if ( !v25 )
          break;
        *v21 = v25;
        --v23;
        ++v21;
        --v22;
      }
      while ( v22 );
    }
    v26 = v21 - 1;
    if ( v22 )
      v26 = v21;
    *v26 = 0;
  }
  v27 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v29 = v27;
  if ( !v27 )
  {
    v34 = 204LL;
LABEL_42:
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v34, (unsigned int)"wil", v28);
    goto LABEL_35;
  }
  v30 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v27, &v36);
  LastError = v30;
  if ( v30 >= 0 )
  {
    wil::details::CloseHandle(v29, v31);
    *a3 = ((__int64)v36 << 31) | v37[0];
LABEL_34:
    LastError = 0;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, (unsigned int)"wil", (const char *)(unsigned int)v30, v36);
  wil::details::CloseHandle(v29, v35);
LABEL_35:
  if ( v15 )
    wil::details::CloseHandle(v15, v32);
  return LastError;
}
