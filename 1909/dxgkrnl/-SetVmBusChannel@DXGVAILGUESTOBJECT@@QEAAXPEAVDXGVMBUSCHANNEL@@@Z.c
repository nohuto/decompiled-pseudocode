/*
 * XREFs of ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C00498FC
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C0290F24 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02913C4 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0290B1C (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILGUESTOBJECT::SetVmBusChannel(DXGVAILGUESTOBJECT *this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGVMBUSCHANNEL *v4; // rcx

  v4 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 8);
  if ( v4 )
    DestroyVmBusChannel(v4);
  *((_QWORD *)this + 8) = a2;
}
