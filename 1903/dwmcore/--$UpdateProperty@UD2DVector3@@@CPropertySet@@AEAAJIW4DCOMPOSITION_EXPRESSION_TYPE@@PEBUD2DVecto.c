/*
 * XREFs of ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1801F46E8
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180094770 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001E0AC (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector3>(CResource *this, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  signed int v10; // eax
  __int64 v11; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v4 + 8LL * a2) == a3 )
  {
    v8 = *((_QWORD *)this + 14);
    v9 = *(_DWORD *)(v4 + 8LL * a2 + 4) & 0x1FFFFFFF;
    *(_QWORD *)(v9 + v8) = *(_QWORD *)a4;
    *(_DWORD *)(v9 + v8 + 8) = *(_DWORD *)(a4 + 8);
    v10 = CPropertySet::PropertyUpdated<D2DMatrix>(this, a2, 1, a4);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x190u, 0LL);
    else
      return 0;
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x189u, 0LL);
  }
  return v7;
}
