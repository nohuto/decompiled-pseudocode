/*
 * XREFs of RIMGetMonitorPhysicalSize @ 0x1C0112F40
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0112364 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     GetMonitorPhysicalDimensions @ 0x1C0105910 (GetMonitorPhysicalDimensions.c)
 */

__int64 __fastcall RIMGetMonitorPhysicalSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int MonitorPhysicalDimensions; // eax
  __int64 v5; // rcx
  signed int v6; // eax
  signed int v7; // ecx
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v9 = 0;
  v10 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !a2 )
    v2 = *(_QWORD *)(gpDispInfo + 96);
  MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(*(_QWORD *)(v2 + 232), &v9, &v10, 0LL, 0LL);
  if ( MonitorPhysicalDimensions >= 0 )
    goto LABEL_8;
  v5 = *(_QWORD *)(gpDispInfo + 96);
  if ( v2 != v5 )
    MonitorPhysicalDimensions = GetMonitorPhysicalDimensions(*(_QWORD *)(v5 + 232), &v9, &v10, 0LL, 0LL);
  if ( MonitorPhysicalDimensions >= 0 )
  {
LABEL_8:
    v6 = 1000 * v9;
    v7 = 1000 * v10;
    *(_DWORD *)(a1 + 8) = 1000 * v9;
    *(_DWORD *)(a1 + 12) = v7;
    if ( v6 <= 0 || v7 <= 0 )
    {
      *(_DWORD *)(a1 + 8) = 20320;
      *(_DWORD *)(a1 + 12) = 15240;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 20320;
    *(_DWORD *)(a1 + 12) = 15240;
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x10u, (__int64)&WPP_29b2d95337ca3c6b60bf6989ded744e8_Traceguids);
  }
  return a1;
}
