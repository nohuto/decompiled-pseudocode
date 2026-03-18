/*
 * XREFs of ProcessChannelPostStarted @ 0x1C028F380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028EBCC (-NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelPostStarted()
{
  DXGVMBUSCHANNEL *v0; // rax
  __int64 v1; // rdx

  v0 = (DXGVMBUSCHANNEL *)((__int64 (*)(void))qword_1C00A3C28)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelPostStarted(v0, v1);
}
