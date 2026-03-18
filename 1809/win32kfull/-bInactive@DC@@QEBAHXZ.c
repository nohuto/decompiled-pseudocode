/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C0141314
 * Callers:
 *     NtGdiFillPath @ 0x1C0140390 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C0140A20 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C0290C20 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C0290D10 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C0290FA0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C0291100 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02912A0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02913E0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v1 = *((_DWORD *)this + 62);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
