/*
 * XREFs of ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028E0E8
 * Callers:
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C028DD84 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C029070C (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C021FBA0 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028E2F8 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::Cleanup(DXGVMBUSCHANNEL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGVMBUSCHANNEL::Disable(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( *((_QWORD *)this + 2) )
  {
    ((void (*)(void))qword_1C00A3BE8)();
    VmBusInterfaceDereference(v3, v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
