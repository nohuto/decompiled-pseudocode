/*
 * XREFs of ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEBAPEAVDXGHWQUEUE@@XZ @ 0x1C0035860
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::ITERATOR::GetCurrent(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[1];
  if ( result == *a1 )
    return 0LL;
  return result;
}
