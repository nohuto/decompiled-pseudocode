/*
 * XREFs of ??$AddProperty@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@PEAI@Z @ 0x18006DFE8
 * Callers:
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x18006DDAC (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCO.c)
 *     ??$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016E7B8 (--$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_E.c)
 *     ??$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector4@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016EC04 (--$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector4@@W4DCOMPOSITION_EXPRESS.c)
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016EEE8 (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION.c)
 *     ??$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801B0A34 (--$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuat.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800A8F94 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EE720 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector4>(
        __int64 a1,
        int a2,
        _OWORD *a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // esi
  __int64 result; // rax
  int v10; // ebp
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  v11 = a2;
  v12 = v5 & 0x1FFFFFFF;
  result = DynArray<CBaseExpression *,0>::AddMultipleAndSet(a1, &v11);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow((int)a1 + 32, 1, 16, 1, 0LL);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 + 56) += 16;
      *(_OWORD *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
      *a4 = v7;
      return 0LL;
    }
    else
    {
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(a1, v7);
      return (unsigned int)v10;
    }
  }
  return result;
}
