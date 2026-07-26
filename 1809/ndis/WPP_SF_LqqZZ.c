/*
 * XREFs of WPP_SF_LqqZZ @ 0x1C0068BA0
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C010D39C (ndisPnPNotifyBinding.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_LqqZZ(__int64 a1, __int64 a2, int a3, ...)
{
  const wchar_t *v3; // rax
  __int64 v4; // r8
  const wchar_t *v5; // rdx
  const wchar_t *v6; // r9
  const wchar_t *v7; // rcx
  __int64 v8; // r10
  bool v9; // zf
  int v10; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v13; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  unsigned __int16 *v15; // [rsp+C8h] [rbp+30h]
  unsigned __int16 *v16; // [rsp+D0h] [rbp+38h]
  va_list va2; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, unsigned __int16 *);
  v16 = va_arg(va2, unsigned __int16 *);
  v10 = a3;
  v3 = v16;
  if ( v16 )
    v4 = *v16;
  else
    v4 = 8LL;
  v5 = L"NULL";
  if ( v16 && *v16 )
    v6 = (const wchar_t *)*((_QWORD *)v16 + 1);
  else
    v6 = L"NULL";
  v7 = v15;
  if ( !v16 )
    v3 = L"\b";
  if ( v15 )
    v8 = *v15;
  else
    v8 = 8LL;
  v9 = v15 == 0LL;
  if ( v15 )
  {
    if ( *v15 )
      v5 = (const wchar_t *)*((_QWORD *)v15 + 1);
    v9 = v15 == 0LL;
  }
  if ( v9 )
    v7 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids,
    0x19u,
    &v10,
    4LL,
    va,
    8LL,
    va1,
    8LL,
    v7,
    2LL,
    v5,
    v8,
    v3,
    2LL,
    v6,
    v4,
    0LL);
}
