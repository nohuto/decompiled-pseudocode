/*
 * XREFs of ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0296234
 * Callers:
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294CF4 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DF914 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02B4438 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall VIDPNTARGETINFO::Initialize(
        VIDPNTARGETINFO *this,
        struct DXGADAPTER *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 IsMonitorConnected; // al
  unsigned int v10; // edx
  bool v11; // zf
  unsigned int v12; // edx
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 1023LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *(_DWORD *)this = *((_DWORD *)a3 + 6);
  IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(a3, (VIDPNTARGETINFO *)((char *)this + 8));
  v10 = *(_DWORD *)this;
  v14 = 0;
  *((_BYTE *)this + 4) = IsMonitorConnected != 0;
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 22);
  DmmIsTargetInClientVidPnTopology(a2, v10, &v14);
  *((_BYTE *)this + 5) = v14 != 0;
  v11 = !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a3 + 20));
  result = v12;
  *((_BYTE *)this + 6) = !v11;
  return result;
}
