/*
 * XREFs of ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0257E28
 * Callers:
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C0257AC0 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C025A42C (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C01F00A0 (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0258038 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::Cleanup(DXGVMBUSCHANNEL *this)
{
  __int64 v2; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGVMBUSCHANNEL::Disable(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  if ( *((_QWORD *)this + 2) )
  {
    ((void (*)(void))qword_1C008FBD8)();
    VmBusInterfaceDereference(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
