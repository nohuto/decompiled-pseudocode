/*
 * XREFs of ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x18006A5A8
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18005C930 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800C0ACC (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800C0B0C (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TrySetTrackingEnabled(GazeHidDevice *this)
{
  char *v2; // rdi
  const struct std::nothrow_t *v3; // rdx
  int v4; // ebx
  int v5; // edx
  int v6; // r9d
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // r8
  ULONG UsageValue; // ecx
  ULONG v11; // r14d
  NTSTATUS v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  ULONG ReportLength; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  PCHAR Report; // [rsp+B8h] [rbp+48h] BYREF

  Report = 0LL;
  ReportLength = 0;
  v2 = (char *)this + 128;
  v4 = GazeHidParser::CreateReportForProperty((char *)this + 128, 1LL, &Report, &ReportLength);
  if ( v4 >= 0 )
  {
    if ( !(unsigned __int8)GazeHidParser::IsPropertySupported(v2, 1LL) )
    {
      v4 = -2147023728;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_21;
    }
    v7 = (__int64 *)*((_QWORD *)v2 + 9);
    v8 = (__int64 *)v7[1];
    v9 = v7;
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_24;
    do
    {
      if ( *((_DWORD *)v8 + 7) >= v5 )
      {
        v9 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v9 == v7 || *((_DWORD *)v9 + 7) > v5 )
    {
LABEL_24:
      std::_Xout_of_range("invalid map<K, T> key");
      JUMPOUT(0x18006A776LL);
    }
    UsageValue = 255;
    if ( v6 != v5 )
      UsageValue = 0;
    v11 = ReportLength;
    v12 = HidP_SetUsageValue(
            HidP_Feature,
            0x12u,
            *((_WORD *)v9 + 16),
            0x400u,
            UsageValue,
            *((PHIDP_PREPARSED_DATA *)v2 + 8),
            Report,
            ReportLength);
    if ( v12 >= 0 )
      v4 = 0;
    else
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x1DA,
             (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)v12);
    if ( v4 < 0 )
      goto LABEL_17;
    v17 = 0;
    v13 = RIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721297LL, Report, v11, 0LL, 0, &v17, 0);
    if ( v13 >= 0 )
      v4 = 0;
    else
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x113,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
             (const char *)(unsigned int)v13);
  }
LABEL_21:
  if ( Report )
    operator delete(Report, v3);
  return (unsigned int)v4;
}
