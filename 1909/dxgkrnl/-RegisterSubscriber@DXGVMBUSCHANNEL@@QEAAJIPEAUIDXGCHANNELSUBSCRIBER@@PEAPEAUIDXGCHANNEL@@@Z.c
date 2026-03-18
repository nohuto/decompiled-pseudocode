/*
 * XREFs of ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C028F3F4
 * Callers:
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02662DC (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C0290564 (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C029071C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z @ 0x1C028E560 (-Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x1C028F35C (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // rax
  struct DXGCHANNELENDPOINTPROXY *v18; // rcx
  char *v19; // rax
  char **v20; // rdx
  char *v21; // rbx
  bool v22; // zf
  _QWORD *v23; // rax
  struct DXGCHANNELENDPOINTPROXY *v25; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v26[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a2;
  LODWORD(v8) = -1073740008;
  if ( (unsigned int)DXGVMBUSCHANNEL::ProxyFromSubscriberTag(this, a2, &v25) == -1073741275 )
  {
    v9 = DXGCHANNELENDPOINTPROXY::Create(v5, a3, this, &v25);
    v8 = v9;
    if ( v9 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v23[3] = v5;
      v23[4] = v8;
      v23[5] = 524LL;
      v23[6] = this;
      WdLogEvent5_WdWarning(v23);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
      _m_prefetchw((char *)this + 8);
      v15 = *((_DWORD *)this + 2);
      while ( v15 )
      {
        v14 = (unsigned int)(v15 + 1);
        v16 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v14, v15);
        if ( v16 == v15 )
          goto LABEL_7;
      }
      v17 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v17 + 24) = 513LL;
      WdLogEvent5_WdAssertion(v17);
LABEL_7:
      v18 = v25;
      if ( v25 )
        v19 = (char *)v25 + 16;
      else
        v19 = 0LL;
      v20 = (char **)*((_QWORD *)this + 7);
      v21 = (char *)this + 48;
      if ( *v20 != v21 )
        __fastfail(3u);
      *(_QWORD *)v19 = v21;
      *((_QWORD *)v19 + 1) = v20;
      *v20 = v19;
      v22 = v26[8] == 0;
      *((_QWORD *)v21 + 1) = v19;
      *a4 = v18;
      if ( !v22 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
    }
  }
  return (unsigned int)v8;
}
