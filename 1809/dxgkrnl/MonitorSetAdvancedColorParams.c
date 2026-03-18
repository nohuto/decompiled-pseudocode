/*
 * XREFs of MonitorSetAdvancedColorParams @ 0x1C0291664
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memcmp @ 0x1C0022D50 (memcmp.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C0297170 (-SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall MonitorSetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v11; // rcx
  struct DXGMONITOR *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  struct DXGMONITOR *v19; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-58h]
  _QWORD *v21; // [rsp+30h] [rbp-50h]
  __int128 Buf2; // [rsp+38h] [rbp-48h] BYREF
  __int128 v23; // [rsp+48h] [rbp-38h]
  _OWORD Buf1[2]; // [rsp+58h] [rbp-28h] BYREF

  v8 = 0;
  v21 = a3;
  v20 = a2;
  if ( !a1 || !a7 || !a8 || a8 > a7 || a6 >= a7 || a6 >= a8 )
    return 3221225485LL;
  v19 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v19);
  if ( (int)result >= 0 )
  {
    v12 = v19;
    if ( !v19 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v13);
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v12 + 296), 1u);
    v16 = *((_OWORD *)v12 + 39);
    v17 = *((_OWORD *)v12 + 40);
    *(_QWORD *)&Buf2 = *v20;
    Buf1[0] = v16;
    *((_QWORD *)&Buf2 + 1) = *v21;
    *(_QWORD *)&v23 = *a4;
    *((_QWORD *)&v23 + 1) = *a5;
    Buf1[1] = v17;
    if ( !memcmp(Buf1, &Buf2, 0x20uLL)
      && *((_DWORD *)v12 + 165) == a6
      && *((_DWORD *)v12 + 166) == a7
      && *((_DWORD *)v12 + 167) == a8
      && !*((_BYTE *)v12 + 688) )
    {
      *((_DWORD *)v12 + 164) = 5;
      v8 = 255;
      *((_DWORD *)v12 + 173) = 6;
    }
    else
    {
      v18 = v23;
      *((_OWORD *)v12 + 39) = Buf2;
      *((_OWORD *)v12 + 40) = v18;
      *((_DWORD *)v12 + 164) = 5;
      *((_DWORD *)v12 + 165) = a6;
      *((_DWORD *)v12 + 166) = a7;
      *((_DWORD *)v12 + 167) = a8;
      *((_BYTE *)v12 + 688) = 0;
      *((_DWORD *)v12 + 173) = 6;
      DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(v12);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v12, 0, 0);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v12 + 296));
    KeLeaveCriticalRegion();
    return v8;
  }
  return result;
}
