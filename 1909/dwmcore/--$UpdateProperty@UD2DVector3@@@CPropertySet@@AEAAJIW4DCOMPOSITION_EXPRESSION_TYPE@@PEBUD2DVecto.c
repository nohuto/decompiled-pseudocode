/*
 * XREFs of ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1801F2F90
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x18001C134 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A37E0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001C28C (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801F3158 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector3>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rcx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // r10
  CResource *v8; // r11
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                          a1 + 80,
                          a2,
                          a3,
                          a4)
    && (v9 = *v4, *(_DWORD *)(*v4 + 8 * v7) == v5) )
  {
    v10 = v4[4];
    v11 = *(_DWORD *)(v9 + 8 * v7 + 4) & 0x1FFFFFFF;
    *(_QWORD *)(v11 + v10) = *(_QWORD *)v6;
    *(_DWORD *)(v11 + v10 + 8) = *(_DWORD *)(v6 + 8);
    v12 = CPropertySet::PropertyUpdated<D2DMatrix>(v8, v7, 1, v6);
    v14 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x192u, 0LL);
    else
      return 0;
  }
  else
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, 0x80070057, 0x18Bu, 0LL);
  }
  return v14;
}
