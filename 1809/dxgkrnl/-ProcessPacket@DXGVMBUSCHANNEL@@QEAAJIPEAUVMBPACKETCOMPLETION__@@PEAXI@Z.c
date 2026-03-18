/*
 * XREFs of ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0258BC8
 * Callers:
 *     ProcessRingPacket @ 0x1C02591A0 (ProcessRingPacket.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0258B48 (-ProcessMessage@DXGCHANNELENDPOINTPROXY@@QEAAJPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C0258CCC (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::ProcessPacket(
        struct _EX_RUNDOWN_REF *this,
        unsigned int a2,
        struct VMBPACKETCOMPLETION__ *a3,
        void *a4,
        unsigned int a5)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  DXGCHANNELENDPOINTPROXY *v17; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v9) = -1073741823;
  if ( ExAcquireRundownProtection(this + 8) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)&this[9], 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v10 = DXGVMBUSCHANNEL::ProxyFromSubscriberTag((DXGVMBUSCHANNEL *)this, a2, &v17);
    v9 = v10;
    if ( v10 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v14[3] = v17;
      v14[4] = v9;
      v14[5] = 467LL;
      v14[6] = this;
      WdLogEvent5_WdWarning(v14);
    }
    else
    {
      LODWORD(v9) = DXGCHANNELENDPOINTPROXY::ProcessMessage(v17, a3, a4, a5);
    }
    ExReleaseRundownProtection(this + 8);
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
  return (unsigned int)v9;
}
