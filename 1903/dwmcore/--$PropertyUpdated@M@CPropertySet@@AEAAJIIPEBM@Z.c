/*
 * XREFs of ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180091AA0
 * Callers:
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800BB63C (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800BB7B4 (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 * Callees:
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001E13C (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B94 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertySet::PropertyUpdated<float>(
        CResource *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rax
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v10; // ebp
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int v15; // eax
  unsigned int v16; // ecx

  v4 = *((_QWORD *)this + 10);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)this + 9);
  v10 = *(_DWORD *)(v4 + 8LL * a2);
  if ( v6 && (v15 = (**v6)(v6, a2, v10), v13 = v15, v15 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1B4u, 0LL);
  }
  else
  {
    CResource::InvalidateAnimationSources(this, a2);
    CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)this, a2, v10, a3, a4);
    v11 = CPropertySet::NotifyPropertyValue(this, a2, v10);
    v13 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1C7u, 0LL);
    else
      return 0;
  }
  return v13;
}
