/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00CA2E8
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00CA3E0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C013F2A8 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(PERESOURCE **this, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r14
  _BOOL8 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGGLOBAL *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v15 + 24) = 10429LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v16 + 24) = 10430LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = (__int64)this[14];
  v9 = 496 * v4;
  v10 = *(_BYTE *)(3968 * v4 + v8 + 722) != 0;
  if ( v10 != (a3 != 0) )
  {
    *(_BYTE *)(v9 * 8 + v8 + 722) = a3;
    Global = DXGGLOBAL::GetGlobal(v10, v8);
    v14 = Global;
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)Global + 132);
    }
    else
    {
      if ( *((int *)Global + 132) <= 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v17 + 24) = 1137LL;
        WdLogEvent5_WdAssertion(v17);
      }
      _InterlockedDecrement((volatile signed __int32 *)v14 + 132);
    }
  }
  if ( !a3 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(this + 63), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    DISPLAY_SOURCE::ClearAllDisplayState((DISPLAY_SOURCE *)&this[14][v9]);
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
}
