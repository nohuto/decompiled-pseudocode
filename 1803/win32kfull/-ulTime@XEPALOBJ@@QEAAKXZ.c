/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0017DC8
 * Callers:
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C0017B88 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreDrawStream @ 0x1C00A6FB0 (GreDrawStream.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00A7A4C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreRealizePalette @ 0x1C00FD5B8 (GreRealizePalette.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C01229F8 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C028ACFC (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C028ADD8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
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
