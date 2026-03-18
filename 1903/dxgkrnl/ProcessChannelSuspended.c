/*
 * XREFs of ProcessChannelSuspended @ 0x1C028F3F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028ECC4 (-NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelSuspended()
{
  PRKEVENT *v0; // rax
  __int64 v1; // rdx

  v0 = (PRKEVENT *)((__int64 (*)(void))qword_1C00A3C28)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelSuspended(v0, v1);
}
