/*
 * XREFs of ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028E708
 * Callers:
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028E4F8 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0290C48 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C0290C64 (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::Disable(DXGVMBUSCHANNEL *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  if ( *((_QWORD *)this + 2) && *((_BYTE *)this + 24) )
  {
    *((_WORD *)this + 12) = 0;
    *((_BYTE *)this + 26) = 0;
    ((void (*)(void))qword_1C00A3C18)();
  }
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
