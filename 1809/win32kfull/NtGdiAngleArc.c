/*
 * XREFs of NtGdiAngleArc @ 0x1C0291770
 * Callers:
 *     <none>
 * Callees:
 *     GreAngleArc @ 0x1C02500CC (GreAngleArc.c)
 */

__int64 __fastcall NtGdiAngleArc(HDC a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v10; // ebx
  int v12; // [rsp+30h] [rbp-18h] BYREF
  float v13[5]; // [rsp+34h] [rbp-14h] BYREF

  v10 = 0;
  if ( bConvertDwordToFloat(a5, v13) && bConvertDwordToFloat(a6, (float *)&v12) )
    return (unsigned int)GreAngleArc(a1, a2, a3, a4, LODWORD(v13[0]), v12);
  return v10;
}
