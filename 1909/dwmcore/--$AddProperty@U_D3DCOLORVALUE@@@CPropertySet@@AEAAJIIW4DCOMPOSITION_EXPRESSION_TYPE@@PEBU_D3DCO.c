/*
 * XREFs of ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800A0FDC
 * Callers:
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800A0E64 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@PEAI@Z @ 0x1800A0F24 (--$AddProperty@UD2DVector4@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800A1074 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CPropertySet::AddProperty<_D3DCOLORVALUE>(
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
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector4>(
         (__int64)this + 80,
         a4,
         a5,
         &v13);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = 354;
    goto LABEL_10;
  }
  if ( v13 != (_DWORD)v5 || (*(_DWORD *)(*((_QWORD *)this + 10) + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x169u, 0LL);
    return v10;
  }
  v8 = CPropertySet::PropertyUpdated<_D3DCOLORVALUE>(this, v5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = 365;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v12, 0LL);
    return v10;
  }
  return 0;
}
