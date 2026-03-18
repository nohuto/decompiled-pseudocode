/*
 * XREFs of _GetTextMetricsW @ 0x1C003E0A8
 * Callers:
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     xxxSetNCFonts @ 0x1C00E4B34 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E59CC (ValidateExternalLogFont.c)
 *     GetCharDimensions @ 0x1C0142018 (GetCharDimensions.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C003E118 (GreGetTextMetricsW.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GetTextMetricsW(HDC a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  int v6; // ecx
  __int128 v7; // xmm0
  _OWORD v8[5]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x44uLL);
  result = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v8);
  v5 = v8[1];
  v6 = DWORD2(v8[3]);
  *(_OWORD *)a2 = v8[0];
  v7 = v8[2];
  *(_OWORD *)(a2 + 16) = v5;
  *(_QWORD *)&v5 = *(_QWORD *)&v8[3];
  *(_OWORD *)(a2 + 32) = v7;
  *(_QWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 56) = v6;
  return result;
}
