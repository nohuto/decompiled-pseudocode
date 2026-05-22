/*
 * XREFs of ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18005D380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180056CDC (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18005D704 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x18005D764 (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800698B8 (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnInputReport(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int *a4)
{
  unsigned int v5; // r12d
  int DeviceId; // ebx
  ULONG v9; // r11d
  __int64 v10; // rdx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r13
  struct _HIDP_CAPS *v13; // rdi
  int HIDCapabilities; // eax
  unsigned int InputReportByteLength; // ebx
  bool i; // cf
  NTSTATUS Usages; // eax
  USHORT v18; // ax
  USHORT *v19; // rdx
  __int64 v20; // rdx
  char v21; // r11
  unsigned int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdx
  int UsageValue; // [rsp+20h] [rbp-E0h]
  struct _HIDP_CAPS *v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h]
  ULONG v28; // [rsp+50h] [rbp-B0h] BYREF
  ULONG UsageLength[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _HIDP_CAPS *v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h]
  struct _HIDP_CAPS *v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+78h] [rbp-88h]
  _BYTE v34[24]; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+98h] [rbp-68h]
  char v36; // [rsp+4F8h] [rbp+3F8h]
  float v37; // [rsp+4FCh] [rbp+3FCh]
  float v38; // [rsp+500h] [rbp+400h]
  USHORT UsageList[20]; // [rsp+6C0h] [rbp+5C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+728h] [rbp+628h]

  *(_QWORD *)UsageLength = 0LL;
  v26 = 0LL;
  v5 = (unsigned int)a4;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, (struct RIMDevice **)UsageLength, a4);
  if ( DeviceId < 0 )
  {
    v10 = 162LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    return (unsigned int)DeviceId;
  }
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageLength + 48LL);
  v13 = (struct _HIDP_CAPS *)(*(_QWORD *)UsageLength + 60LL);
  if ( *(_WORD *)(*(_QWORD *)UsageLength + 60LL) == (_WORD)v9 )
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities(*(HIDDevice **)UsageLength, &v26);
    v13 = v26;
    DeviceId = HIDCapabilities;
    v9 = 0;
  }
  else
  {
    DeviceId = v9;
  }
  if ( DeviceId < 0 )
  {
    v10 = 164LL;
    goto LABEL_3;
  }
  v28 = v9;
  InputReportByteLength = v13->InputReportByteLength;
  for ( i = v5 < InputReportByteLength; !i; i = v5 < (unsigned __int16)InputReportByteLength )
  {
    memset_0(v34, 0, 0x640uLL);
    v35 = 1600;
    Usages = HidP_GetUsageValue(
               HidP_Input,
               1u,
               0,
               0x33u,
               &v28,
               PreparsedData,
               Report,
               (unsigned __int16)InputReportByteLength);
    if ( Usages < 0 )
    {
      v24 = 186LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v24,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
               (const char *)(unsigned int)Usages,
               UsageValue);
    }
    v37 = (float)(__int16)v28 / 10.0;
    Usages = HidP_GetUsageValue(HidP_Input, 1u, 0, 0x34u, &v28, PreparsedData, Report, v13->InputReportByteLength);
    if ( Usages < 0 )
    {
      v24 = 201LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v24,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
               (const char *)(unsigned int)Usages,
               UsageValue);
    }
    v36 = 0;
    UsageLength[0] = 20;
    v38 = (float)(__int16)v28 / 10.0;
    Usages = HidP_GetUsages(
               HidP_Input,
               9u,
               0,
               UsageList,
               UsageLength,
               PreparsedData,
               Report,
               v13->InputReportByteLength);
    if ( Usages < 0 )
    {
      v24 = 220LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v24,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
               (const char *)(unsigned int)Usages,
               UsageValue);
    }
    v18 = UsageList[0];
    v19 = UsageList;
    while ( v18 )
    {
      if ( v18 == 1 )
        v36 = 1;
      v18 = *++v19;
    }
    v26 = 0LL;
    v27 = 0;
    DeviceId = AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
                 this,
                 a2,
                 (struct AugmentedInputCacheState *)&v26);
    if ( DeviceId < 0 )
    {
      v10 = 235LL;
      goto LABEL_3;
    }
    if ( v36 == v21 )
    {
      if ( BYTE4(v26) == v21 )
        goto LABEL_28;
      BYTE4(v26) = v21;
      v32 = v26;
      v33 = v27;
      DeviceId = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, v20, &v32);
      if ( DeviceId < 0 )
      {
        v10 = 256LL;
        goto LABEL_3;
      }
    }
    else if ( BYTE4(v26) == v21 )
    {
      BYTE4(v26) = 1;
      v30 = v26;
      v31 = v27;
      DeviceId = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, v20, &v30);
      if ( DeviceId < 0 )
      {
        v10 = 247LL;
        goto LABEL_3;
      }
    }
    else
    {
      v22 = 3;
    }
    MPCInputInfoHelper::PopulateAugmentedInput(v22, a2, (int)v26, SHIWORD(v26), v27, SHIWORD(v26), (__int64)v34);
    DeviceId = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v34);
    if ( DeviceId < 0 )
    {
      v10 = 263LL;
      goto LABEL_3;
    }
LABEL_28:
    v23 = v13->InputReportByteLength;
    v5 -= v23;
    Report += v23;
    LOWORD(InputReportByteLength) = v13->InputReportByteLength;
  }
  return 0LL;
}
