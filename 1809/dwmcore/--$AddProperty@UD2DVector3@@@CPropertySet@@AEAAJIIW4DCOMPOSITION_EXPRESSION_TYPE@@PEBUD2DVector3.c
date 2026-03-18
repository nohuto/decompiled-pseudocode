/*
 * XREFs of ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180073B80
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180073AB8 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 * Callees:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18006DE88 (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x180073C5C (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddProperty<D2DVector3>(
        CResource *this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v6 = (_QWORD *)((char *)this + 80);
  v9 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector3>(
         (char *)this + 80,
         a4,
         a5,
         &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 374;
    goto LABEL_10;
  }
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( v16 != (_DWORD)v5 || (*(_DWORD *)(*v6 + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0x17Du);
    return v11;
  }
  v9 = CPropertySet::PropertyUpdated<D2DMatrix>(this, v5, 0, a5);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 385;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v14);
    return v11;
  }
  return 0;
}
