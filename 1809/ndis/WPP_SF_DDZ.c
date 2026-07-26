/*
 * XREFs of WPP_SF_DDZ @ 0x1C0051580
 * Callers:
 *     ndisValidateFilterDriverCharacteristicsHeader @ 0x1C00CE2C8 (ndisValidateFilterDriverCharacteristicsHeader.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C00CE384 (ndisValidateProtocolDriverCharacteristicsHeader.c)
 *     ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C00EAE34 (ndisValidateLWMiniportDriverCharacteristicsHeader.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDZ(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, a1, &v4);
}
