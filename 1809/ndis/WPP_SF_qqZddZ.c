/*
 * XREFs of WPP_SF_qqZddZ @ 0x1C006196C
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZddZ(__int64 a1, __int64 a2, ...)
{
  const wchar_t *v2; // rax
  __int64 v3; // r8
  const wchar_t *v4; // rdx
  const wchar_t *v5; // r9
  const wchar_t *v6; // rcx
  __int64 v7; // r10
  bool v8; // zf
  __int64 v9; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  __int64 v11; // [rsp+C8h] [rbp+20h] BYREF
  va_list va1; // [rsp+C8h] [rbp+20h]
  unsigned __int16 *v13; // [rsp+D0h] [rbp+28h]
  __int64 v14; // [rsp+D8h] [rbp+30h] BYREF
  va_list va2; // [rsp+D8h] [rbp+30h]
  __int64 v16; // [rsp+E0h] [rbp+38h] BYREF
  va_list va3; // [rsp+E0h] [rbp+38h]
  unsigned __int16 *v18; // [rsp+E8h] [rbp+40h]
  va_list va4; // [rsp+F0h] [rbp+48h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, unsigned __int16 *);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  v18 = va_arg(va4, unsigned __int16 *);
  v2 = v18;
  if ( v18 )
    v3 = *v18;
  else
    v3 = 8LL;
  v4 = L"NULL";
  if ( v18 && *v18 )
    v5 = (const wchar_t *)*((_QWORD *)v18 + 1);
  else
    v5 = L"NULL";
  v6 = v13;
  if ( !v18 )
    v2 = L"\b";
  if ( v13 )
    v7 = *v13;
  else
    v7 = 8LL;
  v8 = v13 == 0LL;
  if ( v13 )
  {
    if ( *v13 )
      v4 = (const wchar_t *)*((_QWORD *)v13 + 1);
    v8 = v13 == 0LL;
  }
  if ( v8 )
    v6 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
    0x31u,
    va,
    8LL,
    va1,
    8LL,
    v6,
    2LL,
    v4,
    v7,
    va2,
    4LL,
    va3,
    4LL,
    v2,
    2LL,
    v5,
    v3,
    0LL);
}
