/*
 * XREFs of ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800A3730
 * Callers:
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A3408 (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A3698 (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 * Callees:
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001C31C (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A3E3C (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  signed int v15; // eax
  __int64 v16; // rcx

  v4 = *((_QWORD *)this + 10);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)this + 9);
  v10 = *(_DWORD *)(v4 + 8LL * a2);
  if ( v6 && (v15 = (**v6)(v6, a2, v10), v13 = v15, v15 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1B6u, 0LL);
  }
  else
  {
    CResource::InvalidateAnimationSources(this, a2);
    CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)this, a2, v10, a3, a4);
    v11 = CPropertySet::NotifyPropertyValue(this, a2, v10);
    v13 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1C9u, 0LL);
    else
      return 0;
  }
  return v13;
}
