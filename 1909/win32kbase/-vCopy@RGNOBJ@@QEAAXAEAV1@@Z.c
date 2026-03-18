/*
 * XREFs of ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0016F90
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0017350 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0018F40 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00777D0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C008D2D0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AD050 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

void __fastcall RGNOBJ::vCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  memmove(
    (void *)(*(_QWORD *)this + 80LL),
    (const void *)(*(_QWORD *)a2 + 80LL),
    *(unsigned int *)(*(_QWORD *)a2 + 80LL) - 80LL);
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                      - *(_DWORD *)a2
                                      - 104
                                      + *(_QWORD *)this
                                      + 104LL;
}
