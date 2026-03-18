/*
 * XREFs of ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C0258D64
 * Callers:
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C023173C (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C0259E7C (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A034 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z @ 0x1C0257E90 (-Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C0258CCC (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::RegisterSubscriber(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        struct IDXGCHANNELSUBSCRIBER *a3,
        struct IDXGCHANNEL **a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rax
  struct DXGCHANNELENDPOINTPROXY *v17; // rcx
  char *v18; // rax
  char **v19; // rdx
  char *v20; // rbx
  bool v21; // zf
  _QWORD *v22; // rax
  struct DXGCHANNELENDPOINTPROXY *v24; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v25[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a2;
  LODWORD(v8) = -1073740008;
  if ( (unsigned int)DXGVMBUSCHANNEL::ProxyFromSubscriberTag(this, a2, &v24) == -1073741275 )
  {
    v9 = DXGCHANNELENDPOINTPROXY::Create(v5, a3, this, &v24);
    v8 = v9;
    if ( v9 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v22[3] = v5;
      v22[4] = v8;
      v22[5] = 524LL;
      v22[6] = this;
      WdLogEvent5_WdWarning(v22);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
      _m_prefetchw((char *)this + 8);
      v14 = *((_DWORD *)this + 2);
      while ( v14 )
      {
        v13 = (unsigned int)(v14 + 1);
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v13, v14);
        if ( v15 == v14 )
          goto LABEL_7;
      }
      v16 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v16 + 24) = 513LL;
      WdLogEvent5_WdAssertion(v16);
LABEL_7:
      v17 = v24;
      if ( v24 )
        v18 = (char *)v24 + 16;
      else
        v18 = 0LL;
      v19 = (char **)*((_QWORD *)this + 7);
      v20 = (char *)this + 48;
      if ( *v19 != v20 )
        __fastfail(3u);
      *(_QWORD *)v18 = v20;
      *((_QWORD *)v18 + 1) = v19;
      *v19 = v18;
      v21 = v25[8] == 0;
      *((_QWORD *)v20 + 1) = v18;
      *a4 = v17;
      if ( !v21 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    }
  }
  return (unsigned int)v8;
}
