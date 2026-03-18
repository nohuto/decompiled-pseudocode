/*
 * XREFs of ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A28D4
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800A349C (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A1244 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A2760 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801F3158 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2D_MATRIX_3X2_F>(
                a1,
                *(_DWORD *)(a2 + 8),
                *(_DWORD *)(a2 + 12),
                *(_DWORD *)(a2 + 16),
                a3);
    v5 = updated;
    if ( updated < 0 )
    {
      v12 = 313;
LABEL_4:
      v6 = updated;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, v12, 0LL);
      return v5;
    }
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)a1 + 80,
                             *(unsigned int *)(a2 + 8),
                             a3,
                             a3)
      || *(_DWORD *)(v9 + 12) != (*(_DWORD *)(*(_QWORD *)(v10 + 80) + 8 * v7 + 4) & 0x1FFFFFFF) )
    {
      v5 = -2003303421;
      v6 = -2003303421;
      v12 = 321;
      goto LABEL_11;
    }
    updated = CPropertySet::UpdateProperty<D2D_MATRIX_3X2_F>(v10, v7, *(unsigned int *)(v9 + 16), v8);
    v5 = updated;
    if ( updated < 0 )
    {
      v12 = 324;
      goto LABEL_4;
    }
  }
  return 0;
}
