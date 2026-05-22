/*
 * XREFs of ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x180068190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800698B8 (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x18006A1A0 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeDeviceCollection::OnInputReport(GazeDeviceCollection *this, int a2, char *a3, unsigned int *a4)
{
  unsigned int v5; // r14d
  int DeviceId; // ebx
  struct _HIDP_CAPS *v8; // r11
  __int64 v9; // rdx
  struct RIMDevice *v11; // rsi
  struct _HIDP_CAPS *v12; // rdi
  int HIDCapabilities; // eax
  unsigned int InputReportByteLength; // ecx
  __int64 v15; // r12
  bool v16; // cf
  int InputInfoForReport; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  bool v21[8]; // [rsp+30h] [rbp-20h] BYREF
  struct RIMDevice *v22; // [rsp+38h] [rbp-18h] BYREF
  struct _HIDP_CAPS *v23[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v22 = 0LL;
  v23[0] = 0LL;
  v5 = (unsigned int)a4;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v22, a4);
  if ( DeviceId < 0 )
  {
    v9 = 195LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    return (unsigned int)DeviceId;
  }
  v11 = v22;
  v12 = (struct _HIDP_CAPS *)((char *)v22 + 60);
  if ( *((_WORD *)v22 + 30) == (_WORD)v8 )
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities(v22, v23);
    v12 = v23[0];
    DeviceId = HIDCapabilities;
    v8 = 0LL;
  }
  else
  {
    DeviceId = (int)v8;
  }
  if ( DeviceId < 0 )
  {
    v9 = 196LL;
    goto LABEL_3;
  }
  InputReportByteLength = v12->InputReportByteLength;
  v15 = *((_QWORD *)v11 + 4);
  v16 = v5 < InputReportByteLength;
  while ( !v16 )
  {
    v21[0] = (char)v8;
    v23[0] = v8;
    InputInfoForReport = GazeHidDevice::GetInputInfoForReport(
                           v11,
                           a3,
                           (unsigned __int16)InputReportByteLength,
                           (struct InputInfo **)v23,
                           v21);
    v8 = 0LL;
    if ( InputInfoForReport < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
        (const char *)(unsigned int)InputInfoForReport);
      v8 = 0LL;
    }
    if ( v21[0] )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), v15);
      v8 = 0LL;
      DeviceId = v18;
      if ( v18 < 0 )
      {
        v9 = 215LL;
        goto LABEL_3;
      }
    }
    if ( v23[0] )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      v8 = 0LL;
      DeviceId = v19;
      if ( v19 < 0 )
      {
        v9 = 220LL;
        goto LABEL_3;
      }
    }
    v20 = v12->InputReportByteLength;
    v5 -= v20;
    a3 += v20;
    v16 = v5 < (unsigned int)v20;
    LOWORD(InputReportByteLength) = v12->InputReportByteLength;
  }
  return 0LL;
}
