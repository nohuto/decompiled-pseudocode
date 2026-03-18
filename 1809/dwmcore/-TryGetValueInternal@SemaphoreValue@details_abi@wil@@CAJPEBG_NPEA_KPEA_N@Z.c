/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180084830
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180085E94 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18007B470 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800842DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180085B80 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801448CC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rcx
  WCHAR *v7; // rax
  WCHAR *v8; // rdx
  __int64 v9; // rax
  char *v10; // r9
  WCHAR v11; // r8
  wil::details *v12; // rax
  wil::details *v13; // rdi
  int ValueFromSemaphore; // eax
  int v15; // esi
  __int64 v16; // rax
  WCHAR *v17; // rcx
  WCHAR *v18; // rcx
  char *v19; // r8
  WCHAR v20; // dx
  void *v21; // rdx
  const char *v22; // r9
  wil::details *v24; // rax
  const char *v25; // r9
  wil::details *v26; // rbx
  int v27; // eax
  void *v28; // rdx
  int LastError; // esi
  __int64 v30; // rbx
  void *v31; // rdx
  int v32; // [rsp+20h] [rbp-248h] BYREF
  int v33[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v6 = 260LL;
  v7 = Name;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
    {
      v30 = 2147483646LL;
      goto LABEL_11;
    }
  }
  v30 = 2147483646LL;
  v8 = &Name[260 - v6];
  v9 = 2147483646LL;
  v10 = (char *)((char *)L"_p0" - (char *)v8);
  while ( v9 )
  {
    v11 = *(WCHAR *)((char *)v8 + (_QWORD)v10);
    if ( !v11 )
      break;
    *v8 = v11;
    --v9;
    ++v8;
    if ( !--v6 )
    {
      --v8;
      break;
    }
  }
  *v8 = 0;
LABEL_11:
  v12 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v13 = v12;
  if ( v12 )
  {
    v33[0] = 0;
    v32 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v12, v33);
    v15 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (unsigned int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore,
        v32);
      v4 = v15;
    }
    else
    {
      v16 = 260LL;
      v17 = Name;
      while ( *v17 )
      {
        ++v17;
        if ( !--v16 )
          goto LABEL_28;
      }
      v18 = &Name[260 - v16];
      v19 = (char *)((char *)L"h" - (char *)v18);
      while ( v30 )
      {
        v20 = *(WCHAR *)((char *)v18 + (_QWORD)v19);
        if ( !v20 )
          break;
        *v18 = v20;
        --v30;
        ++v18;
        if ( !--v16 )
        {
          --v18;
          break;
        }
      }
      *v18 = 0;
LABEL_28:
      v24 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v26 = v24;
      if ( v24 )
      {
        v27 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v24, &v32);
        LastError = v27;
        if ( v27 >= 0 )
        {
          wil::details::CloseHandle(v26, v28);
          *a3 = ((__int64)v32 << 31) | v33[0];
          goto LABEL_24;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD6,
          (unsigned int)"wil",
          (const char *)(unsigned int)v27,
          v32);
        wil::details::CloseHandle(v26, v31);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (unsigned int)"wil", v25);
      }
      v4 = LastError;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (unsigned int)"wil", v22);
  }
LABEL_24:
  if ( v13 )
    wil::details::CloseHandle(v13, v21);
  return v4;
}
