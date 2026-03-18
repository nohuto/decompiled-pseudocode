/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E51A4
 * Callers:
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreRealizePalette @ 0x1C00983DC (GreRealizePalette.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C00E4F48 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00E503C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C01457C4 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C0145814 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C029EB00 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v2 == v1 )
    return *(unsigned int *)(v1 + 32);
  else
    return *(unsigned int *)(v2 + 32);
}
