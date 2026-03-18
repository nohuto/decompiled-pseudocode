/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C00ABAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0021C14 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(struct OBJECT **a1)
{
  if ( *a1 )
  {
    XDCOBJ::vAltUnlockFast(a1);
    *a1 = 0LL;
  }
}
