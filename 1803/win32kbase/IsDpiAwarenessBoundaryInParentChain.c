/*
 * XREFs of IsDpiAwarenessBoundaryInParentChain @ 0x1C00B1460
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00570B0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDpiAwarenessBoundaryInParentChain(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 v3; // r9

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0;
  while ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x29D )
      break;
    if ( (((unsigned __int16)(*(_DWORD *)(v3 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
      return 1;
    a1 = v1;
    v1 = *(_QWORD *)(v1 + 80);
  }
  return v2;
}
