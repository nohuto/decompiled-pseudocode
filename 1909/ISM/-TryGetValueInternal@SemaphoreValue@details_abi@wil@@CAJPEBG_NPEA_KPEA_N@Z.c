/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180024674
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18002423C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F46C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800248C8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
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
  __int64 v10; // rcx
  WCHAR *v11; // rax
  __int64 v12; // rax
  WCHAR *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  char *v16; // rax
  WCHAR v17; // r9
  WCHAR *v18; // rax
  wil::details *v19; // rax
  wil::details *v20; // rdi
  int ValueFromSemaphore; // eax
  unsigned int LastError; // esi
  __int64 v23; // rcx
  WCHAR *v24; // rax
  __int64 v25; // rax
  WCHAR *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  char *v29; // r8
  WCHAR v30; // ax
  WCHAR *v31; // rax
  wil::details *v32; // rax
  const char *v33; // r9
  wil::details *v34; // rbx
  int v35; // eax
  void *v36; // rdx
  void *v37; // rdx
  __int64 v39; // rdx
  void *v40; // rdx
  int v41; // [rsp+28h] [rbp-E0h] BYREF
  int v42[3]; // [rsp+2Ch] [rbp-DCh] BYREF
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
  v10 = 260LL;
  if ( v4 )
    v9 = v5;
  *v9 = 0;
  v11 = Name;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  if ( v10 )
    v12 = 260 - v10;
  else
    v12 = 0LL;
  if ( v10 )
  {
    v13 = &Name[v12];
    v14 = 260 - v12;
    if ( v12 != 260 )
    {
      v15 = 2147483646LL;
      v16 = (char *)((char *)L"_p0" - (char *)v13);
      do
      {
        if ( !v15 )
          break;
        v17 = *(WCHAR *)((char *)v13 + (_QWORD)v16);
        if ( !v17 )
          break;
        *v13 = v17;
        --v15;
        ++v13;
        --v14;
      }
      while ( v14 );
    }
    v18 = v13 - 1;
    if ( v14 )
      v18 = v13;
    *v18 = 0;
  }
  v19 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v20 = v19;
  if ( !v19 )
  {
    if ( GetLastError() == 2 )
      goto LABEL_40;
    v39 = 192LL;
    goto LABEL_48;
  }
  v42[0] = 0;
  v41 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v19, v42);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"wil",
      (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_41;
  }
  v23 = 260LL;
  v24 = Name;
  do
  {
    if ( !*v24 )
      break;
    ++v24;
    --v23;
  }
  while ( v23 );
  if ( v23 )
    v25 = 260 - v23;
  else
    v25 = 0LL;
  if ( v23 )
  {
    v26 = &Name[v25];
    v27 = 260 - v25;
    if ( 260 != v25 )
    {
      v28 = 2147483646LL;
      v29 = (char *)((char *)L"h" - (char *)v26);
      do
      {
        if ( !v28 )
          break;
        v30 = *(WCHAR *)((char *)v26 + (_QWORD)v29);
        if ( !v30 )
          break;
        *v26 = v30;
        --v28;
        ++v26;
        --v27;
      }
      while ( v27 );
    }
    v31 = v26 - 1;
    if ( v27 )
      v31 = v26;
    *v31 = 0;
  }
  v32 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v34 = v32;
  if ( !v32 )
  {
    v39 = 204LL;
LABEL_48:
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v39, (unsigned int)"wil", v33);
    goto LABEL_41;
  }
  v35 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v32, &v41);
  LastError = v35;
  if ( v35 >= 0 )
  {
    wil::details::CloseHandle(v34, v36);
    *a3 = ((__int64)v41 << 31) | v42[0];
LABEL_40:
    LastError = 0;
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, (__int64)"wil", (const char *)(unsigned int)v35);
  wil::details::CloseHandle(v34, v40);
LABEL_41:
  if ( v20 )
    wil::details::CloseHandle(v20, v37);
  return LastError;
}
