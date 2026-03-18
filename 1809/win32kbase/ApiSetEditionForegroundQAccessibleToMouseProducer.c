/*
 * XREFs of ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00313C0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C006EA90 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C006FC8C (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
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
