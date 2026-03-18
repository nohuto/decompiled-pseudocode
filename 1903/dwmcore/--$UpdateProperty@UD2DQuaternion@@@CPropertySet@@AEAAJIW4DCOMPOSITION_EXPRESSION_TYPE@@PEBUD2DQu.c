/*
 * XREFs of ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801F45D8
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180094770 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x1801F3820 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801F450C (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DQuaternion>(
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
    v6 = CPropertySet::PropertyUpdated<D2DVector4>(this, a2, 1u, a4);
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
