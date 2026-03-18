/*
 * XREFs of ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x18001C37C
 * Callers:
 *     ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x18001C1F4 (--$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3.c)
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195B48 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESS.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800C367C (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x1800EC85C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector3>(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // esi
  __int64 result; // rax
  int v10; // ebp
  __int64 v11; // rcx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  v12 = a2;
  v13 = v5 & 0x1FFFFFFF;
  result = DynArray<CBaseExpression *,0>::AddMultipleAndSet(a1, &v12);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow((int)a1 + 32, 1, 12, 1, 0LL);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a1 + 56) += 12;
      v11 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v5 + v11) = *(_QWORD *)a3;
      *(_DWORD *)(v5 + v11 + 8) = *(_DWORD *)(a3 + 8);
      result = 0LL;
      *a4 = v7;
    }
    else
    {
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(a1, v7);
      return (unsigned int)v10;
    }
  }
  return result;
}
