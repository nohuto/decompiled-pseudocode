/*
 * XREFs of WPP_SF_DDDDDDDDDDD @ 0x1C00417A4
 * Callers:
 *     ndisValidateQosParameters @ 0x1C004923C (ndisValidateQosParameters.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00CFDA0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDDDDDDDDDD(unsigned __int16 a1, const struct _GUID *a2, int a3, int a4)
{
  int v4; // [rsp+F8h] [rbp+2Fh] BYREF
  int v5; // [rsp+100h] [rbp+37h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
