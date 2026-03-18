/*
 * XREFs of ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x180196F68
 * Callers:
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180197794 (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801F3A4C (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18008F0E0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
        __int64 a1,
        int a2,
        _BYTE *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v14) = a2;
  v10 = v7 + 1;
  HIDWORD(v14) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
  {
    if ( v10 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v14;
      *(_DWORD *)(a1 + 24) = v10;
      goto LABEL_7;
    }
    v12 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v14);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC3u, 0LL);
  }
  else
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_7:
  result = DynArrayImpl<0>::Grow(a1 + 32, 1u, 1, 1, 0LL);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a1 + 56);
    *(_BYTE *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
    result = 0LL;
    *a4 = v7;
  }
  return result;
}
