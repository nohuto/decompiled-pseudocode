/*
 * XREFs of GetOldRedirectionBitmap @ 0x1C00C4C44
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C4BEC (DeleteOldRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1)
{
  __int64 v1; // rbx
  __int64 Prop; // rax

  v1 = 0LL;
  Prop = RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v1;
}
