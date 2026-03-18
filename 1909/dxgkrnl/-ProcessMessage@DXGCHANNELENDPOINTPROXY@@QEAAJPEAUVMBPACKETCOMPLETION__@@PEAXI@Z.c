/*
 * XREFs of ?ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C028F1D8
 * Callers:
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C028F258 (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::ProcessMessage(
        DXGCHANNELENDPOINTPROXY *this,
        struct VMBPACKETCOMPLETION__ *a2,
        void *a3,
        unsigned int a4)
{
  int v6; // edi

  *((_QWORD *)this + 17) = a2;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, void *, _QWORD))this + 16))(*((_QWORD *)this + 16), a3, a4);
  if ( v6 >= 0 && *((_QWORD *)this + 17) )
  {
    ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C00A3C78)(a2, 0LL, 0LL);
    *((_QWORD *)this + 17) = 0LL;
  }
  return (unsigned int)v6;
}
