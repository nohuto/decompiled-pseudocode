/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C01495F4
 * Callers:
 *     NtGdiFillPath @ 0x1C01491B0 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C0149340 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C02A6870 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A6930 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A6BB0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6D00 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A6E90 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A6FF0 (NtGdiWidenPath.c)
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
