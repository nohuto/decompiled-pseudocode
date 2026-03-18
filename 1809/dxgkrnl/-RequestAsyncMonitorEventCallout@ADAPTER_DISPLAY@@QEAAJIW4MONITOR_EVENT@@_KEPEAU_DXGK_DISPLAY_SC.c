/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4A00
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B6C20 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C00205AC (-IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020D5D4 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0212500 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  PVOID v12; // rax
  struct DISPLAY_CALLOUT_ENTRY *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ebx
  struct _LUID *v18; // rdx
  struct DISPLAY_CALLOUT_ENTRY **v19; // rcx
  __int64 v20; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v23; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v24[24]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v25[10]; // [rsp+60h] [rbp-49h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 8106LL;
    WdLogEvent5_WdAssertion(v11);
  }
  memset(v25, 0, 0x48uLL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(a1 + 336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v12 = operator new(0x88uLL, 0x4B677844u, PagedPool);
  if ( v12 )
    v13 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v12,
                                            *(_QWORD *)(a1 + 16) + 276LL,
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 276LL);
  memset(&v25[1], 0, 36);
  v25[0] = 0x480000001ELL;
  LODWORD(v25[6]) = 46;
  v25[7] = __PAIR64__(a3, a2);
  v25[8] = v14;
  if ( v13 )
  {
    HIDWORD(v25[6]) = v14;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
    if ( *(_BYTE *)(a1 + 376) )
    {
      v19 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 392);
      if ( *v19 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 384) )
        __fastfail(3u);
      *(_QWORD *)v13 = a1 + 384;
      *((_QWORD *)v13 + 1) = v19;
      *v19 = v13;
      *(_QWORD *)(a1 + 392) = v13;
      v17 = 0;
    }
    else
    {
      DXGADAPTER::IsAddapterSessionized(*(DXGADAPTER **)(a1 + 16), v18, 0LL, &v23);
      Global = DXGGLOBAL::GetGlobal(v20);
      v17 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1448), v13, v23);
    }
  }
  else
  {
    HIDWORD(v25[6]) = -1073741801;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
    v16 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v16 + 24) = 8131LL;
    WdLogEvent5_WdLowResource(v16);
    v17 = -1073741801;
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return v17;
}
