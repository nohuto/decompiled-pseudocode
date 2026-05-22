/*
 * XREFs of ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18006A378
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180069F34 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x18006A1A0 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x18009CFF8 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z @ 0x18009D184 (-GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800C0B0C (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800C0CE8 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1800C10E4 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateDisplayMapping(GazeHidDevice *this)
{
  __int64 v2; // rdi
  GazeHidParser *v3; // r14
  int CalibratedRegion; // eax
  int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  int PropertyValue; // eax
  HMONITOR *v10; // r8
  int HMonitorFromEdid; // eax
  unsigned int *v12; // r9
  int AdapterAndTargetFromEdid; // eax
  int v14; // eax
  char *v16; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+Fh] BYREF
  int v18; // [rsp+64h] [rbp+13h] BYREF
  __int64 v19; // [rsp+68h] [rbp+17h]
  char **v20; // [rsp+70h] [rbp+1Fh]
  char v21; // [rsp+78h] [rbp+27h]
  __int64 v22; // [rsp+80h] [rbp+2Fh] BYREF
  __int16 v23; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v19 = -2LL;
  v16 = 0LL;
  v17 = 0;
  v20 = &v16;
  v21 = 1;
  v2 = *((_QWORD *)this + 4);
  v3 = (GazeHidDevice *)((char *)this + 128);
  CalibratedRegion = GazeHidParser::GetCalibratedRegion(
                       (GazeHidDevice *)((char *)this + 128),
                       0LL,
                       0,
                       (struct tagRECT *)(v2 + 988));
  v5 = CalibratedRegion;
  if ( CalibratedRegion >= 0 )
  {
    v5 = GazeHidParser::CreateReportForProperty(v3, 3LL, &v16, &v17);
    if ( v5 >= 0 )
    {
      v18 = 0;
      v7 = v17;
      v8 = RIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v16, v17, &v18, 0);
      if ( v8 >= 0 )
      {
        v22 = 0LL;
        v23 = 0;
        PropertyValue = GazeHidParser::GetPropertyValue(v3, 3LL, v16, v7, 2, &v22, 10);
        if ( PropertyValue < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)PropertyValue);
        HMonitorFromEdid = DisplayEdidHelpers::GetHMonitorFromEdid(
                             (DisplayEdidHelpers *)&v22,
                             (const struct EdidIdentificationBlock *)(v2 + 16),
                             v10);
        if ( HMonitorFromEdid < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDE,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)HMonitorFromEdid);
        AdapterAndTargetFromEdid = DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
                                     (DisplayEdidHelpers *)&v22,
                                     (const struct EdidIdentificationBlock *)(v2 + 1008),
                                     (struct _LUID *)(v2 + 1016),
                                     v12);
        if ( AdapterAndTargetFromEdid < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE2,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)AdapterAndTargetFromEdid);
        v14 = GazeHidParser::GetCalibratedRegion(v3, v16, v7, (struct tagRECT *)(v2 + 988));
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)v14);
        v5 = 0;
      }
      else
      {
        v5 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xD1,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)v8);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)CalibratedRegion);
  }
  if ( v16 )
    operator delete(v16, v6);
  return (unsigned int)v5;
}
