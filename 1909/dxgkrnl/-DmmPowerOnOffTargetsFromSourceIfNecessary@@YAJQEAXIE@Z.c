/*
 * XREFs of ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00CA06C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CA428 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C017A238 (MonitorCreatePhysicalMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02C9C5C (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 */

__int64 __fastcall DmmPowerOnOffTargetsFromSourceIfNecessary(PERESOURCE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v4; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  PERESOURCE v9; // rax
  PVOID Address; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  char v21[8]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v22; // [rsp+58h] [rbp-120h] BYREF
  _BYTE v23[256]; // [rsp+60h] [rbp-118h] BYREF

  v3 = (unsigned int)a2;
  v4 = a3;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL, a2, a3);
LABEL_11:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = a1[319];
  if ( !v9 )
  {
    v17 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_11;
  }
  Address = v9->Address;
  if ( Address )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, (__int64)v9->Address);
    memset(v23, 0, 0xFCuLL);
    v21[0] = 0;
    v11 = VIDPN_MGR::SetTimingsFromVidPn(Address, 0LL, 4LL, 0LL, v23, v21, v4, 0LL, 0LL);
    v15 = v11;
    if ( v11 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
      v20[3] = v3;
      v20[4] = *((int *)a1 + 70);
      v20[5] = *((unsigned int *)a1 + 69);
      v20[6] = v15;
      WdLogEvent5_WdError(v20);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
    return (unsigned int)v15;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
