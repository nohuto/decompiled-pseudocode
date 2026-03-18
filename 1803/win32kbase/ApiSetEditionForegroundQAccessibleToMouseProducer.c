/*
 * XREFs of ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0071988
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0038E60 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00399EC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C0068C00 (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionForegroundQAccessibleToMouseProducer(_QWORD *a1, __int64 a2, unsigned int a3)
{
  if ( (int)IsEditionForegroundQAccessibleToMouseProducerSupported() < 0 )
    return 0LL;
  else
    return EditionForegroundQAccessibleToMouseProducer(*a1, 1LL, a3);
}
