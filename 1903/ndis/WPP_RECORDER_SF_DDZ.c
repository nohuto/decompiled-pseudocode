/*
 * XREFs of WPP_RECORDER_SF_DDZ @ 0x1C007F06C
 * Callers:
 *     ndisValidateFilterDriverCharacteristicsHeader @ 0x1C0109554 (ndisValidateFilterDriverCharacteristicsHeader.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C0109614 (ndisValidateProtocolDriverCharacteristicsHeader.c)
 *     ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C0116608 (ndisValidateLWMiniportDriverCharacteristicsHeader.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rbx
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  const wchar_t *v14; // rax
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-68h]

  v8 = L"NULL";
  v9 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( a8 )
      v12 = *a8;
    else
      v12 = 8LL;
    if ( a8 && *a8 )
      v13 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v13 = L"NULL";
    v14 = a8;
    if ( !a8 )
      v14 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      v14,
      2LL,
      v13,
      v12,
      0LL);
  }
  v15 = v9 == 0LL;
  if ( v9 )
  {
    if ( *v9 )
      v8 = (const wchar_t *)*((_QWORD *)v9 + 1);
    v15 = v9 == 0LL;
  }
  if ( v15 )
    v9 = L"\b";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           1LL,
           &WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
           v17,
           &a6,
           4LL,
           &a7,
           4LL,
           v9,
           2LL,
           v8);
}
