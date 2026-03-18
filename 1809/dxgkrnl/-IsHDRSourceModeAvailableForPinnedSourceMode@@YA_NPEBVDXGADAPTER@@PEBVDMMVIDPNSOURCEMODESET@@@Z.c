/*
 * XREFs of ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0289D7C
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D5E14 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C004D530 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

char __fastcall IsHDRSourceModeAvailableForPinnedSourceMode(
        const struct DXGADAPTER *a1,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  bool v3; // si
  bool v4; // di
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbx
  const struct DMMVIDPNSOURCEMODESET *v8; // rcx
  const struct DMMVIDPNSOURCEMODE *i; // rax

  v3 = 0;
  v4 = 0;
  if ( (int)DXGADAPTER::GetDriverVersion(a1) < 2500 )
  {
    if ( *(_DWORD *)(v5 + 284) == 32902 )
      v4 = 1;
    else
      v3 = 1;
  }
  else
  {
    v3 = (*(_DWORD *)(v5 + 2408) & 4) != 0;
    v4 = (*(_DWORD *)(v5 + 2408) & 8) != 0;
  }
  v6 = *((_QWORD *)a2 + 18);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 76);
    v8 = (const struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
    if ( v8 != (const struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 48) )
    {
      for ( i = (const struct DMMVIDPNSOURCEMODESET *)((char *)v8 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(a2, i) )
      {
        if ( v3 && *((_DWORD *)i + 18) == 1 && v7 == *(_QWORD *)((char *)i + 76) && *((_DWORD *)i + 24) == 113
          || v4 && *((_DWORD *)i + 24) == 35 )
        {
          return 1;
        }
      }
    }
  }
  return 0;
}
