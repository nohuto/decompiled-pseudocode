/*
 * XREFs of bEnableFontDriver @ 0x1C00E9150
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00E82E0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?FntCacheHDEV@@YAXPEAVPDEV@@K@Z @ 0x1C00E9218 (-FntCacheHDEV@@YAXPEAVPDEV@@K@Z.c)
 */

__int64 __fastcall bEnableFontDriver(__int64 a1, unsigned int a2)
{
  struct _LDEV *Internal; // rax
  __int64 result; // rax
  struct PDEV *v5; // [rsp+90h] [rbp+18h] BYREF

  Internal = (struct _LDEV *)ldevLoadInternal(a1, 6LL);
  if ( !Internal )
    return 0LL;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v5, Internal, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0);
  if ( !v5 )
    return 0LL;
  if ( a2 == 5 )
  {
    qword_1C031DE98 = v5;
    gufiLocalType1Rasterizer = 0x100000002LL;
  }
  FntCacheHDEV(v5, a2);
  result = 1LL;
  *((_DWORD *)v5 + 10) |= 0x2000u;
  return result;
}
