/*
 * XREFs of ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A3EB0
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800A400C (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPER.c)
 * Callees:
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800A44AC (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800A8F94 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EE720 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddProperty<float>(__int64 a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // r14d
  unsigned int v9; // r15d
  __int64 v10; // r13
  int v11; // ebx
  int v13; // eax
  _DWORD *v14; // r12
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+74h] [rbp+Ch]
  int v21; // [rsp+80h] [rbp+18h]

  v21 = a3;
  v5 = a1 + 80;
  v6 = a2;
  v7 = *(unsigned int *)(a1 + 136);
  v8 = -1;
  v9 = *(_DWORD *)(a1 + 104);
  v10 = a1;
  if ( (v7 & 0xE0000000) != 0 )
  {
    v11 = -2147483637;
LABEL_3:
    v17 = 374;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v11, v17);
    return (unsigned int)v11;
  }
  v19 = a4;
  v20 = v7 & 0x1FFFFFFF;
  v13 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(v5, &v19);
  v14 = a5;
  v11 = v13;
  if ( v13 >= 0 )
  {
    v11 = DynArrayImpl<0>::Grow((int)v5 + 32, 1, 4, 1, 0LL);
    if ( v11 >= 0 )
    {
      *(_DWORD *)(v5 + 56) += 4;
      v8 = v9;
      a1 = *(_QWORD *)(v5 + 32);
      v11 = 0;
      *(_DWORD *)(v7 + a1) = *v14;
    }
    else
    {
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v5, v9);
    }
  }
  if ( v11 < 0 )
    goto LABEL_3;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v5) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( v8 != (_DWORD)v6 || (*(_DWORD *)(*(_QWORD *)v5 + 8 * v6 + 4) & 0x1FFFFFFF) != v21 )
  {
    v11 = -2003303421;
    v17 = 381;
    goto LABEL_4;
  }
  v15 = CPropertySet::PropertyUpdated<float>(v10, (unsigned int)v6, 0LL, v14);
  v11 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x181u);
  else
    return 0;
  return (unsigned int)v11;
}
