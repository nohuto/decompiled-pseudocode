/*
 * XREFs of ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800A44AC
 * Callers:
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A3EB0 (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A43BC (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 * Callees:
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18006DF88 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A4DF4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800A5B10 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::PropertyUpdated<float>(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rsi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // r10
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v13; // ebp
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 Element; // rax
  _QWORD *v19; // rdx
  __int64 i; // r8
  __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 10) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v12 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))a1[9];
    v13 = *(_DWORD *)(*v11 + 8 * v4);
    if ( v12 && (v14 = (**v12)(v12, v10, v13), v9 = v14, v14 < 0) )
    {
      v23 = 463;
    }
    else
    {
      v16 = a1[5];
      v17 = *(_QWORD *)(a1[2] + 368LL);
      Element = 0LL;
      if ( v16 )
        Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v16, (unsigned int)v4);
      v19 = (_QWORD *)((Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64));
      if ( v19 )
      {
        for ( i = 0LL;
              (unsigned int)i < *(_DWORD *)(((Element + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)Element >> 64))
                                          + 0x18);
              *(_QWORD *)(v21 + 272) = v17 )
        {
          v21 = *(_QWORD *)(*v19 + 8 * i);
          i = (unsigned int)(i + 1);
        }
        *(_BYTE *)(*(_QWORD *)(a1[2] + 224LL) + 416LL) |= 2u;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1[2] + 536LL) + 104LL))(
          *(_QWORD *)(a1[2] + 536LL),
          0LL,
          8LL);
      }
      CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)a1, (unsigned int)v4, v13, a3, a4);
      v14 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v13);
      v9 = v14;
      if ( v14 >= 0 )
        return 0;
      v23 = 482;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v23);
    return v9;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x1C3u);
  return v9;
}
