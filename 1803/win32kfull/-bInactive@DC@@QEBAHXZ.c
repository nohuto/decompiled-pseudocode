/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C011D5AC
 * Callers:
 *     NtGdiFillPath @ 0x1C011B600 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C011CE20 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C027DB90 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C027DC40 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C027DE80 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C027DFA0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C027E100 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C027E230 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 26) )
    return 0;
  v1 = *((_DWORD *)this + 64);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
