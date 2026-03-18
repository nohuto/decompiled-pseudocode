/*
 * XREFs of ProcessChannelSuspended @ 0x1C028F800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028F0D4 (-NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelSuspended()
{
  PRKEVENT *v0; // rax
  __int64 v1; // rdx

  v0 = (PRKEVENT *)((__int64 (*)(void))qword_1C00A3C38)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelSuspended(v0, v1);
}
