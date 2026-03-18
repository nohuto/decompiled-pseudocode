/*
 * XREFs of ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C02C21CC
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C0126EC8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00547CC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

char __fastcall IsHDRSourceModeAvailableForPinnedSourceMode(
        const struct DXGADAPTER *a1,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  bool v2; // si
  bool v3; // di
  __int64 v5; // rbx
  __int64 v6; // rbx
  const struct DMMVIDPNSOURCEMODESET *v7; // rcx
  const struct DMMVIDPNSOURCEMODE *NextMode; // rcx

  v2 = 0;
  v3 = 0;
  if ( *((int *)a1 + 613) < 2500 )
  {
    if ( *((_DWORD *)a1 + 71) == 32902 )
      v3 = 1;
    else
      v2 = 1;
  }
  else
  {
    v2 = (*((_DWORD *)a1 + 608) & 4) != 0;
    v3 = (*((_DWORD *)a1 + 608) & 8) != 0;
  }
  v5 = *((_QWORD *)a2 + 18);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 76);
  v7 = (const struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
  if ( v7 == (const struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 48) )
    return 0;
  NextMode = (const struct DMMVIDPNSOURCEMODESET *)((char *)v7 - 8);
  if ( !NextMode )
    return 0;
  while ( (!v2
        || *((_DWORD *)NextMode + 18) != 1
        || v6 != *(_QWORD *)((char *)NextMode + 76)
        || *((_DWORD *)NextMode + 24) != 113)
       && (!v3 || *((_DWORD *)NextMode + 24) != 35) )
  {
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a2, NextMode);
    if ( !NextMode )
      return 0;
  }
  return 1;
}
