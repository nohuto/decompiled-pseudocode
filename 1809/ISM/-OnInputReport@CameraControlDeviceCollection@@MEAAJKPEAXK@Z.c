/*
 * XREFs of ?OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800687F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005ED84 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?CreateButtonInfo@CameraControlDeviceCollection@@AEAAJKG_NPEAUInputInfo@@@Z @ 0x180068B5C (-CreateButtonInfo@CameraControlDeviceCollection@@AEAAJKG_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800698B8 (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CameraControlDeviceCollection::OnInputReport(
        CameraControlDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int a4)
{
  unsigned int *v8; // r9
  int DeviceInfo; // ebx
  unsigned int *v10; // r9
  __int64 v11; // rdx
  HIDDevice *v13; // rcx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  struct _HIDP_CAPS *v15; // rsi
  int HIDCapabilities; // eax
  unsigned int InputReportByteLength; // ecx
  NTSTATUS Usages; // eax
  ULONG v19; // eax
  PUSAGE v20; // rbx
  USHORT *v21; // rdi
  unsigned __int16 i; // ax
  unsigned __int16 v23; // ax
  USHORT *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  PHIDP_PREPARSED_DATA v27; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_CAPS *v28; // [rsp+48h] [rbp-B8h] BYREF
  ULONG UsageLength; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-A8h] BYREF
  PUSAGE PreviousUsageList[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[24]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  USHORT UsageList[8]; // [rsp+6B0h] [rbp+5B0h] BYREF
  __int128 v35; // [rsp+6C0h] [rbp+5C0h]
  __int64 v36; // [rsp+6D0h] [rbp+5D0h]
  USHORT BreakUsageList[20]; // [rsp+6D8h] [rbp+5D8h] BYREF
  USHORT MakeUsageList[20]; // [rsp+700h] [rbp+600h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+768h] [rbp+668h]

  v30 = a2;
  v27 = 0LL;
  v28 = 0LL;
  memset_0(UsageList, 0, 0x28uLL);
  UsageLength = 20;
  memset_0(MakeUsageList, 0, sizeof(MakeUsageList));
  memset_0(BreakUsageList, 0, sizeof(BreakUsageList));
  memset_0(v32, 0, 0x640uLL);
  v33 = 1600;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, (struct DeviceInfo **)PreviousUsageList, v8);
  if ( DeviceInfo < 0 )
  {
    v11 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\cameracontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDeviceId(this, a2, &v27, v10);
  if ( DeviceInfo < 0 )
  {
    v11 = 185LL;
    goto LABEL_3;
  }
  v13 = v27;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)v27 + 6);
  v15 = (struct _HIDP_CAPS *)((char *)v27 + 60);
  v27 = PreparsedData;
  if ( v15->Usage )
  {
    DeviceInfo = 0;
  }
  else
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities(v13, &v28);
    PreparsedData = v27;
    DeviceInfo = HIDCapabilities;
    v15 = v28;
  }
  if ( DeviceInfo < 0 )
  {
    v11 = 187LL;
    goto LABEL_3;
  }
  InputReportByteLength = v15->InputReportByteLength;
  if ( a4 < InputReportByteLength )
    return 0LL;
  while ( 1 )
  {
    Usages = HidP_GetUsages(
               HidP_Input,
               0xCu,
               0,
               UsageList,
               &UsageLength,
               PreparsedData,
               Report,
               (unsigned __int16)InputReportByteLength);
    if ( Usages < 0 )
      break;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
      (_QWORD *)this + 345,
      (__int64 **)&v28,
      &v30);
    if ( v28 == *((struct _HIDP_CAPS **)this + 346) )
    {
      DeviceInfo = -2147467259;
      v11 = 221LL;
      goto LABEL_3;
    }
    *(_OWORD *)PreviousUsageList = *(_OWORD *)&v28->Reserved[7];
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)PreviousUsageList, 8));
    if ( v19 > 0x14 )
    {
      DeviceInfo = -2147467259;
      v11 = 231LL;
      goto LABEL_3;
    }
    v20 = PreviousUsageList[0];
    Usages = HidP_UsageListDifference(PreviousUsageList[0], UsageList, BreakUsageList, MakeUsageList, v19);
    if ( Usages < 0 )
    {
      v26 = 239LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v26,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\cameracontroldevicecollection.cpp",
               (const char *)(unsigned int)Usages);
    }
    v21 = BreakUsageList;
    *(_OWORD *)v20 = *(_OWORD *)UsageList;
    *((_OWORD *)v20 + 1) = v35;
    *((_QWORD *)v20 + 4) = v36;
    for ( i = BreakUsageList[0]; i; i = *v21 )
    {
      if ( CameraControlDeviceCollection::CreateButtonInfo(
             (CameraControlDeviceCollection *)v32,
             a2,
             i,
             0,
             (struct InputInfo *)v32) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v32);
        if ( DeviceInfo < 0 )
        {
          v11 = 263LL;
          goto LABEL_3;
        }
      }
      ++v21;
    }
    v23 = MakeUsageList[0];
    v24 = MakeUsageList;
    while ( v23 )
    {
      if ( CameraControlDeviceCollection::CreateButtonInfo(
             (CameraControlDeviceCollection *)v32,
             a2,
             v23,
             1,
             (struct InputInfo *)v32) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v32);
        if ( DeviceInfo < 0 )
        {
          v11 = 290LL;
          goto LABEL_3;
        }
      }
      v23 = *++v24;
    }
    v25 = v15->InputReportByteLength;
    a4 -= v25;
    Report += v25;
    LOWORD(InputReportByteLength) = v15->InputReportByteLength;
    if ( a4 < (unsigned int)v25 )
      return 0LL;
    PreparsedData = v27;
  }
  v26 = 215LL;
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v26,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\cameracontroldevicecollection.cpp",
           (const char *)(unsigned int)Usages);
}
