/*
 * XREFs of ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800A67E0
 * Callers:
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800A4D2C (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800F8010 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x1800F8978 (-SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TrySetTrackingEnabled(GazeHidDevice *this, char a2)
{
  char *v4; // r14
  const struct std::nothrow_t *v5; // rdx
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  void *v11[3]; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v14; // [rsp+A0h] [rbp+30h] BYREF
  BOOL v15; // [rsp+B0h] [rbp+40h] BYREF
  int v16; // [rsp+B8h] [rbp+48h] BYREF

  v11[1] = (void *)-2LL;
  v11[0] = 0LL;
  v14 = 0;
  v11[2] = v11;
  v12 = 1;
  v4 = (char *)this + 128;
  v6 = GazeHidParser::CreateReportForProperty((char *)this + 128, 1LL, v11, &v14);
  if ( v6 >= 0 )
  {
    v15 = a2 != 0;
    v7 = v14;
    v8 = GazeHidParser::SetPropertyValue(v4, v5, &v15);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v16 = 0;
      v9 = RIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721297LL, v11[0], v7, 0LL, 0, &v16, 0);
      if ( v9 >= 0 )
        v6 = 0;
      else
        v6 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x113,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)v9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  if ( v11[0] )
    operator delete(v11[0], v5);
  return (unsigned int)v6;
}
