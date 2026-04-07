/*
 * XREFs of ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x18000A470
 * Callers:
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180009C8C (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000A428 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 * Callees:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x18000A520 (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800B2BBC (-ResultFromKnownLastError@@YAJXZ.c)
 */

CImmersiveOrPrimaryMonitor *__fastcall CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor(
        CImmersiveOrPrimaryMonitor *this,
        HMONITOR a2)
{
  bool v3; // bl
  int Error; // esi
  CImmersiveOrPrimaryMonitor *result; // rax
  __int128 v7; // [rsp+20h] [rbp-B8h]
  _BYTE v8[96]; // [rsp+50h] [rbp-88h] BYREF

  *(_QWORD *)&v7 = 100LL;
  v3 = 0;
  *((_QWORD *)&v7 + 1) = 0x6000000064LL;
  *(_OWORD *)this = v7;
  *((_OWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 8) = 0;
  if ( (unsigned int)GetCurrentDpiInfo(a2, v8) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_4;
  }
  CImmersiveOrPrimaryMonitor::InitImpl((const struct _DPI_INFORMATION *)v8, this);
  v3 = a2 != 0LL;
LABEL_4:
  *((_BYTE *)this + 32) = v3;
  result = this;
  *((_DWORD *)this + 9) = Error;
  return result;
}
