/*
 * XREFs of ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180035CEC
 * Callers:
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180035B90 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180035C98 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180178EDC (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasCpuClipsInScope(CScopedClipStack *this)
{
  int v1; // eax
  char v2; // r9

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  if ( v1 )
    return *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(v1 - 1) + 4) != 0;
  return v2;
}
