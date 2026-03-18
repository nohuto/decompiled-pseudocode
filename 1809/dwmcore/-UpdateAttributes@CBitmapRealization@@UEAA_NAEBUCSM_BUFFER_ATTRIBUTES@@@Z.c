/*
 * XREFs of ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180065B8C
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180065AD0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180226470 (-UpdateAttributes@CSectionBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802295A0 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180067C3C (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 */

bool __fastcall CBitmapRealization::UpdateAttributes(CBitmapRealization *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char *v3; // rbx
  int v5; // eax
  bool v6; // r8

  v3 = (char *)this + 152;
  v5 = memcmp_0(a2, (char *)this + 152, 0x78uLL);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  v6 = v5 != 0;
  *((_OWORD *)v3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v3 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v3 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v3 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v3 + 6) = *((_OWORD *)a2 + 6);
  *((_QWORD *)v3 + 14) = *((_QWORD *)a2 + 14);
  if ( v5 && !(unsigned __int8)operator==((char *)this + 200, (char *)a2 + 48) )
    *((_BYTE *)this + 308) &= ~1u;
  return v6;
}
