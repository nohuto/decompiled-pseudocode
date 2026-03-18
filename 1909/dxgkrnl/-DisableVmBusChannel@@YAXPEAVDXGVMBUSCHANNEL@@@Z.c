/*
 * XREFs of ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0290C48
 * Callers:
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C00446DC (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028E708 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DisableVmBusChannel(struct DXGVMBUSCHANNEL *a1)
{
  if ( a1 )
    DXGVMBUSCHANNEL::Disable(a1);
}
