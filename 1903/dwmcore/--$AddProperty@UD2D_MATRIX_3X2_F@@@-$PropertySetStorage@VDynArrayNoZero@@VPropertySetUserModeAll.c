/*
 * XREFs of ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800BB920
 * Callers:
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800BB888 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_.c)
 *     ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801975C8 (--$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18008F0E0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2D_MATRIX_3X2_F>(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned int v9; // edx
  signed int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v15) = a2;
  v9 = v7 + 1;
  HIDWORD(v15) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    goto LABEL_5;
  }
  if ( v9 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v15);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC3u, 0LL);
LABEL_5:
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_6;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v15;
  *(_DWORD *)(a1 + 24) = v9;
LABEL_6:
  result = DynArrayImpl<0>::Grow(a1 + 32, 1u, 24, 1, 0LL);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 56) += 24;
    v14 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)(v5 + v14) = *(_OWORD *)a3;
    *(_QWORD *)(v5 + v14 + 16) = *(_QWORD *)(a3 + 16);
    result = 0LL;
    *a4 = v7;
  }
  return result;
}
