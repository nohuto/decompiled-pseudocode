/*
 * XREFs of ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800A2F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A464 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A4B8 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800A298C (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800A5BFC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnInputReport(
        ConsumerControlDeviceCollection *this,
        int a2,
        PCHAR Report,
        unsigned int a4)
{
  int DeviceInfo; // ebx
  __int64 v9; // rdx
  struct RIMDevice *v11; // rcx
  struct RIMDevice *PreparsedData; // rdi
  struct _HIDP_CAPS *v13; // r15
  __int64 InputReportByteLength; // rax
  NTSTATUS Usages; // eax
  ULONG v16; // eax
  PUSAGE v17; // rbx
  unsigned __int16 *v18; // rdi
  DWORD v19; // ebx
  unsigned __int16 *v20; // rdi
  DWORD TickCount; // ebx
  __int64 v22; // rdx
  struct RIMDevice *v23; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_CAPS *v24; // [rsp+48h] [rbp-B8h] BYREF
  ULONG UsageLength; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  PUSAGE PreviousUsageList[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[24]; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+98h] [rbp-68h]
  USHORT UsageList[8]; // [rsp+870h] [rbp+770h] BYREF
  __int128 v32; // [rsp+880h] [rbp+780h]
  __int64 v33; // [rsp+890h] [rbp+790h]
  USHORT BreakUsageList[20]; // [rsp+898h] [rbp+798h] BYREF
  USHORT MakeUsageList[20]; // [rsp+8C0h] [rbp+7C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+928h] [rbp+828h]

  v26 = a2;
  v23 = 0LL;
  v24 = 0LL;
  memset_0(UsageList, 0, 0x28uLL);
  UsageLength = 20;
  memset_0(MakeUsageList, 0, sizeof(MakeUsageList));
  memset_0(BreakUsageList, 0, sizeof(BreakUsageList));
  memset_0(v29, 0, 0x7F0uLL);
  v30 = 2032;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, (struct DeviceInfo **)PreviousUsageList);
  if ( DeviceInfo < 0 )
  {
    v9 = 194LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v23, 0LL);
  if ( DeviceInfo < 0 )
  {
    v9 = 198LL;
    goto LABEL_3;
  }
  v11 = v23;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v23 + 6);
  v23 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v11, &v24);
  if ( DeviceInfo < 0 )
  {
    v9 = 200LL;
    goto LABEL_3;
  }
  v13 = v24;
  LODWORD(InputReportByteLength) = v24->InputReportByteLength;
  if ( a4 >= (unsigned int)InputReportByteLength )
  {
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
      {
        v22 = 228LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v22,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (__int64)this + 2760,
        (__int64)&v24,
        (unsigned __int8 *)&v26);
      if ( v24 == *((struct _HIDP_CAPS **)this + 346) )
      {
        DeviceInfo = -2147467259;
        v9 = 234LL;
        goto LABEL_3;
      }
      *(_OWORD *)PreviousUsageList = *(_OWORD *)&v24->Reserved[7];
      v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)PreviousUsageList, 8));
      if ( v16 > 0x14 )
      {
        DeviceInfo = -2147467259;
        v9 = 244LL;
        goto LABEL_3;
      }
      v17 = PreviousUsageList[0];
      Usages = HidP_UsageListDifference(PreviousUsageList[0], UsageList, BreakUsageList, MakeUsageList, v16);
      if ( Usages < 0 )
      {
        v22 = 252LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v22,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v18 = BreakUsageList;
      *(_OWORD *)v17 = *(_OWORD *)UsageList;
      *((_OWORD *)v17 + 1) = v32;
      *((_QWORD *)v17 + 4) = v33;
      if ( BreakUsageList[0] )
        break;
LABEL_17:
      v20 = MakeUsageList;
      if ( MakeUsageList[0] )
      {
        while ( 1 )
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                      (ConsumerControlDeviceCollection *)*v20,
                      a2,
                      TickCount,
                      PerformanceCount,
                      *v20,
                      1,
                      (struct InputInfo *)v29) >= 0 )
          {
            DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                           *((_QWORD *)this + 2),
                           v29);
            if ( DeviceInfo < 0 )
              break;
          }
          if ( !*++v20 )
            goto LABEL_21;
        }
        v9 = 327LL;
        goto LABEL_3;
      }
LABEL_21:
      InputReportByteLength = v13->InputReportByteLength;
      a4 -= InputReportByteLength;
      Report += InputReportByteLength;
      if ( a4 < (unsigned int)InputReportByteLength )
        return 0LL;
      PreparsedData = v23;
    }
    while ( 1 )
    {
      v19 = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)ConsumerControlDeviceCollection::CreateButtonInfo(
                  (ConsumerControlDeviceCollection *)*v18,
                  a2,
                  v19,
                  PerformanceCount,
                  *v18,
                  0,
                  (struct InputInfo *)v29) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v29);
        if ( DeviceInfo < 0 )
          break;
      }
      if ( !*++v18 )
        goto LABEL_17;
    }
    v9 = 288LL;
    goto LABEL_3;
  }
  return 0LL;
}
