/*
 * XREFs of ??$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801F3980
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x1801F3820 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@PEAI@Z @ 0x180196E50 (--$AddProperty@UD2DVector4@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801F450C (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CPropertySet::AddProperty<D2DQuaternion>(
        CResource *this,
        unsigned int a2,
        int a3,
        int a4,
        _OWORD *a5)
{
  __int64 v5; // rdi
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector4>(
         (__int64)this + 80,
         a4,
         a5,
         &v13);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = 353;
    goto LABEL_9;
  }
  if ( v13 != (_DWORD)v5 || (*(_DWORD *)(*((_QWORD *)this + 10) + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x168u, 0LL);
    return v10;
  }
  v8 = CPropertySet::PropertyUpdated<D2DVector4>(this, v5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = 364;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v12, 0LL);
    return v10;
  }
  return 0;
}
