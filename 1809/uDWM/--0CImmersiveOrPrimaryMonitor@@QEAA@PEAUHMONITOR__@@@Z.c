/*
 * XREFs of ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x180037D28
 * Callers:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000A174 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180037CD0 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x180037DEC (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800AEC94 (-ResultFromKnownLastError@@YAJXZ.c)
 */

CImmersiveOrPrimaryMonitor *__fastcall CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor(
        CImmersiveOrPrimaryMonitor *this,
        HMONITOR a2)
{
  __int128 v4; // xmm1
  int v5; // eax
  bool v6; // bl
  int Error; // esi
  CImmersiveOrPrimaryMonitor *result; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-B8h] BYREF
  int v10; // [rsp+40h] [rbp-98h]
  _BYTE v11[96]; // [rsp+50h] [rbp-88h] BYREF

  memset_0(v9, 0, 0x24uLL);
  v4 = v9[1];
  LODWORD(v9[0]) = 100;
  *((_QWORD *)&v9[0] + 1) = 0x6000000064LL;
  v5 = v10;
  *(_OWORD *)this = v9[0];
  *((_OWORD *)this + 1) = v4;
  *((_DWORD *)this + 8) = v5;
  v6 = 0;
  if ( (unsigned int)GetCurrentDpiInfo(a2, v11) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_4;
  }
  CImmersiveOrPrimaryMonitor::InitImpl((const struct _DPI_INFORMATION *)v11, this);
  v6 = a2 != 0LL;
LABEL_4:
  *((_BYTE *)this + 32) = v6;
  result = this;
  *((_DWORD *)this + 9) = Error;
  return result;
}
