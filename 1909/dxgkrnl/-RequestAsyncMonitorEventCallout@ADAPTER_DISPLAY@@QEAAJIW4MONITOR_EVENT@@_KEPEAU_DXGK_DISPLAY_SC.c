/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3F40
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015C7D0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0240C10 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C02467DC (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  PVOID v13; // rax
  struct DISPLAY_CALLOUT_ENTRY *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // r8
  struct _LUID *v25; // rdx
  struct DISPLAY_CALLOUT_ENTRY **v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v31; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v32[24]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v33[10]; // [rsp+60h] [rbp-49h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 8563LL;
    WdLogEvent5_WdAssertion(v12);
  }
  memset(v33, 0, 0x48uLL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(a1 + 440), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  v13 = operator new[](0x88uLL, 0x4B677844u, PagedPool);
  if ( v13 )
    v14 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v13,
                                            *(_QWORD *)(a1 + 16) + 276LL,
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(v15 + 276);
  LODWORD(v33[5]) = 0;
  v33[4] = 0LL;
  v33[0] = 0x480000001ELL;
  LODWORD(v33[6]) = 46;
  v33[7] = __PAIR64__(a3, a2);
  v33[8] = v16;
  if ( v14 )
  {
    memset(&v33[1], 0, 24);
    HIDWORD(v33[6]) = v16;
    DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v15, (struct _LUID *)v15, 0LL, &v31);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v31, v24);
    if ( *(_BYTE *)(a1 + 480) )
    {
      v26 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 496);
      if ( *v26 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 488) )
        __fastfail(3u);
      *(_QWORD *)v14 = a1 + 488;
      *((_QWORD *)v14 + 1) = v26;
      *v26 = v14;
      *(_QWORD *)(a1 + 496) = v14;
      v23 = 0;
    }
    else
    {
      DXGADAPTER::IsAddapterSessionized(*(DXGADAPTER **)(a1 + 16), v25, 0LL, &v31);
      Global = DXGGLOBAL::GetGlobal(v28, v27);
      v23 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1416), v14, v31);
    }
  }
  else
  {
    HIDWORD(v33[6]) = -1073741801;
    memset(&v33[1], 0, 24);
    DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v15, (struct _LUID *)v15, 0LL, &v31);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v31, v17);
    v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = 8588LL;
    WdLogEvent5_WdLowResource(v22);
    v23 = -1073741801;
  }
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  return v23;
}
