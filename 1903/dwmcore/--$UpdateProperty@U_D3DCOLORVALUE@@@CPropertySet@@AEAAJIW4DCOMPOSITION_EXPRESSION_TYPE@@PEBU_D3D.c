/*
 * XREFs of ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801F477C
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180094770 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800BBD38 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<_D3DCOLORVALUE>(
        CResource *this,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v4 + 8LL * a2) == a3 )
  {
    *(_OWORD *)((*(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 14)) = *(_OWORD *)a4;
    v6 = CPropertySet::PropertyUpdated<_D3DCOLORVALUE>(this, a2, 1u, a4);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x190u, 0LL);
    else
      return 0;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a2, 0LL, 0, 0x80070057, 0x189u, 0LL);
  }
  return v5;
}
