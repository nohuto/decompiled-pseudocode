/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C014A3A4
 * Callers:
 *     NtGdiFillPath @ 0x1C0149F60 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C014A0F0 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C02A63C0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A6480 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A6700 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6850 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A69E0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A6B40 (NtGdiWidenPath.c)
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
