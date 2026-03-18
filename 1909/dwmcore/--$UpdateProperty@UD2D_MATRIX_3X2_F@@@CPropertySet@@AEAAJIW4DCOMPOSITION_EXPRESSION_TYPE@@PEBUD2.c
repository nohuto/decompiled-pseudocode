/*
 * XREFs of ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A1244
 * Callers:
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A28D4 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPE.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001C28C (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801F3158 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2D_MATRIX_3X2_F>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // r9
  CResource *v8; // r11
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                          a1 + 80,
                          a2,
                          a3,
                          a4)
    && (v9 = *((_QWORD *)v8 + 10), v5 = v4, *(_DWORD *)(v9 + 8LL * v4) == v6) )
  {
    v10 = *(_DWORD *)(v9 + 8LL * v4 + 4);
    v11 = *((_QWORD *)v8 + 14);
    v10 &= 0x1FFFFFFFu;
    *(_OWORD *)(v10 + v11) = *(_OWORD *)v7;
    *(_QWORD *)(v10 + v11 + 16) = *(_QWORD *)(v7 + 16);
    v12 = CPropertySet::PropertyUpdated<D2DMatrix>(v8, v4, 1, v7);
    v14 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x192u, 0LL);
    else
      return 0;
  }
  else
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070057, 0x18Bu, 0LL);
  }
  return v14;
}
