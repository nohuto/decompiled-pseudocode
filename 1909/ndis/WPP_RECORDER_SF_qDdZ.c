/*
 * XREFs of WPP_RECORDER_SF_qDdZ @ 0x1C0099188
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0097B4C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDdZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        unsigned __int16 *a9)
{
  const wchar_t *v9; // rbx
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rax
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-78h]

  v9 = a9;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
      v11 = *a9;
    else
      v11 = 8LL;
    if ( a9 && *a9 )
      v12 = (const wchar_t *)*((_QWORD *)a9 + 1);
    else
      v12 = L"NULL";
    v13 = a9;
    if ( !a9 )
      v13 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      0x54u,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      v13,
      2LL,
      v12,
      v11,
      0LL);
  }
  v14 = v9 == 0LL;
  if ( v9 )
    v14 = 0;
  if ( v14 )
    v9 = L"\b";
  LOWORD(v16) = 84;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
           v16,
           &a6,
           8LL,
           &a7,
           4LL,
           &a8,
           4LL,
           v9);
}
