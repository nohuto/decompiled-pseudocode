/*
 * XREFs of WPP_SF_sZZ @ 0x1C004FA04
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CBC50 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_sZZ(unsigned __int16 a1, __int64 a2, const char *a3, const wchar_t *a4, unsigned __int16 *a5)
{
  const wchar_t *v5; // rax
  __int64 v7; // r10
  __int64 v8; // rbx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // r11
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rcx

  v5 = a5;
  v7 = 8LL;
  if ( a5 )
    v8 = *a5;
  else
    v8 = 8LL;
  v9 = L"NULL";
  if ( a5 && *a5 )
    v10 = (const wchar_t *)*((_QWORD *)a5 + 1);
  else
    v10 = L"NULL";
  if ( !a5 )
    v5 = L"\b";
  v11 = a4 == 0LL;
  if ( a4 )
  {
    v7 = *a4;
    if ( *a4 )
      v9 = (const wchar_t *)*((_QWORD *)a4 + 1);
    v11 = a4 == 0LL;
  }
  if ( v11 )
    a4 = L"\b";
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a3 )
    a3 = "NULL";
  ndisWppFastTraceMessage(
    &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids,
    a1,
    a3,
    v13,
    a4,
    2LL,
    v9,
    v7,
    v5,
    2LL,
    v10,
    v8,
    0LL);
}
