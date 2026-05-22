/*
 * XREFs of ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800A6AC8
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800A67D4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059C10 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800F8240 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800F86C0 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateCalibrationState(GazeHidDevice *this)
{
  __int64 v2; // rsi
  char *v3; // r14
  const struct std::nothrow_t *v4; // rdx
  int v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  int PropertyValue; // eax
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v11; // [rsp+A0h] [rbp+30h] BYREF
  int v12; // [rsp+A8h] [rbp+38h] BYREF
  int v13; // [rsp+B0h] [rbp+40h] BYREF
  void *v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0LL;
  v11 = 0;
  v2 = *((_QWORD *)this + 4);
  *(_BYTE *)(v2 + 1568) = 2;
  v3 = (char *)this + 128;
  v5 = GazeHidParser::CreateReportForProperty((char *)this + 128, 2LL, &v14, &v11);
  if ( v5 >= 0 )
  {
    v13 = 0;
    v6 = v11;
    v7 = RIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v14, v11, &v13, 0);
    if ( v7 >= 0 )
    {
      v12 = 0;
      PropertyValue = GazeHidParser::GetPropertyValue(v3, 2LL, v14, v6, 2, &v12, 4);
      if ( PropertyValue < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          321LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)PropertyValue);
      *(_BYTE *)(v2 + 1568) = v12;
      v5 = 0;
    }
    else
    {
      v5 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x137,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
             (const char *)(unsigned int)v7);
    }
  }
  if ( v14 )
    operator delete(v14, v4);
  return (unsigned int)v5;
}
