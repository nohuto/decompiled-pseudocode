/*
 * XREFs of ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00C912C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C9B94 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0176448 (MonitorCreatePhysicalMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02C9B9C (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 */

__int64 __fastcall DmmPowerOnOffTargetsFromSourceIfNecessary(PERESOURCE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  PERESOURCE v8; // rax
  PVOID Address; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20[33]; // [rsp+58h] [rbp-120h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL, a2, a3);
LABEL_11:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v17);
  }
  v8 = a1[319];
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_11;
  }
  Address = v8->Address;
  if ( Address )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v20, (__int64)v8->Address);
    memset(&v20[1], 0, 0xFCuLL);
    v10 = VIDPN_MGR::SetTimingsFromVidPn(Address, 0LL, 4LL);
    v14 = v10;
    if ( v10 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v19[3] = v3;
      v19[4] = *((int *)a1 + 70);
      v19[5] = *((unsigned int *)a1 + 69);
      v19[6] = v14;
      WdLogEvent5_WdError(v19);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20[0] + 40));
    return (unsigned int)v14;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
