/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C012134C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C0121160 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0122C48 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(PERESOURCE **this, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  PERESOURCE *v7; // rdx
  __int64 v8; // r14
  _BOOL8 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 9988LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v14 + 24) = 9989LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v7 = this[14];
  v8 = 470 * v4;
  v9 = BYTE2(v7[470 * v4 + 90]) != 0;
  if ( v9 != (a3 != 0) )
  {
    BYTE2(v7[v8 + 90]) = a3;
    Global = DXGGLOBAL::GetGlobal(v9);
    v12 = Global;
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)Global + 132);
    }
    else
    {
      if ( *((int *)Global + 132) <= 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v15 + 24) = 1132LL;
        WdLogEvent5_WdAssertion(v15);
      }
      _InterlockedDecrement((volatile signed __int32 *)v12 + 132);
    }
  }
  if ( !a3 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(this + 50), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    DISPLAY_SOURCE::ClearAllDisplayState((DISPLAY_SOURCE *)&this[14][v8]);
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
}
