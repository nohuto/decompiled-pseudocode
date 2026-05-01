/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180045840
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800457D0 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015730 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180045A60 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180047738 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180057BC0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180057BE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rcx
  WCHAR *v7; // rax
  WCHAR *v8; // rax
  __int64 v9; // r8
  char *v10; // r9
  WCHAR v11; // dx
  wil::details *v12; // rax
  wil::details *v13; // rdi
  int ValueFromSemaphore; // eax
  unsigned int v15; // r8d
  int v16; // esi
  __int64 v17; // rcx
  WCHAR *v18; // rax
  WCHAR *v19; // rax
  char *v20; // r8
  WCHAR v21; // dx
  wil::details *v22; // rax
  unsigned int v23; // r8d
  const char *v24; // r9
  wil::details *v25; // rbx
  int v26; // eax
  void *v27; // rdx
  unsigned int v28; // r8d
  int LastError; // esi
  void *v30; // rdx
  __int64 v32; // rbx
  unsigned int v33; // r8d
  const char *v34; // r9
  void *v35; // rdx
  int v36; // [rsp+20h] [rbp-248h] BYREF
  int v37[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v6 = 260LL;
  v7 = Name;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
    {
      v32 = 2147483646LL;
      goto LABEL_11;
    }
  }
  v32 = 2147483646LL;
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
    v37[0] = 0;
    v36 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v12, v37);
    v16 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, v15, (const char *)(unsigned int)ValueFromSemaphore, v36);
      v4 = v16;
    }
    else
    {
      v17 = 260LL;
      v18 = Name;
      while ( *v18 )
      {
        ++v18;
        if ( !--v17 )
          goto LABEL_23;
      }
      v19 = &Name[260 - v17];
      v20 = (char *)((char *)L"h" - (char *)v19);
      while ( v32 )
      {
        v21 = *(WCHAR *)((char *)v19 + (_QWORD)v20);
        if ( !v21 )
          break;
        *v19 = v21;
        --v32;
        ++v19;
        if ( !--v17 )
        {
          --v19;
          break;
        }
      }
      *v19 = 0;
LABEL_23:
      v22 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v25 = v22;
      if ( v22 )
      {
        v26 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v22, &v36);
        LastError = v26;
        if ( v26 >= 0 )
        {
          wil::details::CloseHandle(v25, v27);
          *a3 = ((__int64)v36 << 31) | v37[0];
          goto LABEL_26;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, v28, (const char *)(unsigned int)v26, v36);
        wil::details::CloseHandle(v25, v35);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, v23, v24);
      }
      v4 = LastError;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, v33, v34);
  }
LABEL_26:
  if ( v13 )
    wil::details::CloseHandle(v13, v30);
  return v4;
}
