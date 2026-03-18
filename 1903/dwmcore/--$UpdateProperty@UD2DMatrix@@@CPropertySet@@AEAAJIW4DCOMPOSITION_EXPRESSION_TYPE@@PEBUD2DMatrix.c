/*
 * XREFs of ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800BBB20
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180094770 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800BBA10 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001E0AC (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DMatrix>(CResource *this, unsigned int a2, int a3, _OWORD *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v5 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v5 + 8LL * a2) == a3 )
  {
    v6 = *(_DWORD *)(v5 + 8LL * a2 + 4);
    v7 = *((_QWORD *)this + 14);
    v6 &= 0x1FFFFFFFu;
    *(_OWORD *)(v6 + v7) = *a4;
    *(_OWORD *)(v6 + v7 + 16) = a4[1];
    *(_OWORD *)(v6 + v7 + 32) = a4[2];
    *(_OWORD *)(v6 + v7 + 48) = a4[3];
    v8 = CPropertySet::PropertyUpdated<D2DMatrix>(this, a2, 1, (__int64)a4);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x190u, 0LL);
    else
      return 0;
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a2, 0LL, 0, 0x80070057, 0x189u, 0LL);
  }
  return v10;
}
