/*
 * XREFs of ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800A3E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059C10 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A684 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A6D8 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800A3AB4 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800A5DBC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnInputReport(
        SystemControlDeviceCollection *this,
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
  USHORT *v16; // rcx
  __int64 v17; // r8
  _USAGE_AND_PAGE *p_ButtonList; // rdx
  USAGE Usage; // ax
  USHORT *v20; // rbx
  unsigned __int16 *v21; // rdi
  DWORD v22; // ebx
  unsigned __int16 *v23; // rdi
  DWORD TickCount; // ebx
  __int64 v25; // rdx
  ULONG UsageLength; // [rsp+40h] [rbp-C0h] BYREF
  struct RIMDevice *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS *v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  struct DeviceInfo *v31; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER v32[3]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  _USAGE_AND_PAGE ButtonList; // [rsp+860h] [rbp+760h] BYREF
  USHORT CurrentUsageList[8]; // [rsp+8B0h] [rbp+7B0h] BYREF
  __int128 v36; // [rsp+8C0h] [rbp+7C0h]
  __int64 v37; // [rsp+8D0h] [rbp+7D0h]
  USHORT BreakUsageList[20]; // [rsp+8D8h] [rbp+7D8h] BYREF
  USHORT MakeUsageList[20]; // [rsp+900h] [rbp+800h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+968h] [rbp+868h]

  v29 = a2;
  v27 = 0LL;
  v28 = 0LL;
  memset_0(CurrentUsageList, 0, 0x28uLL);
  memset_0(&ButtonList, 0, 0x50uLL);
  UsageLength = 20;
  memset_0(MakeUsageList, 0, sizeof(MakeUsageList));
  memset_0(BreakUsageList, 0, sizeof(BreakUsageList));
  memset_0(v32, 0, 0x7F0uLL);
  v33 = 2032;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v31);
  if ( DeviceInfo < 0 )
  {
    v9 = 174LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v27, 0LL);
  if ( DeviceInfo < 0 )
  {
    v9 = 178LL;
    goto LABEL_3;
  }
  v11 = v27;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v27 + 6);
  v27 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v11, &v28);
  if ( DeviceInfo < 0 )
  {
    v9 = 180LL;
    goto LABEL_3;
  }
  v13 = v28;
  LODWORD(InputReportByteLength) = v28->InputReportByteLength;
  if ( a4 >= (unsigned int)InputReportByteLength )
  {
    while ( 1 )
    {
      Usages = HidP_GetUsagesEx(
                 HidP_Input,
                 0,
                 &ButtonList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 (unsigned __int16)InputReportByteLength);
      if ( Usages < 0 )
      {
        v25 = 204LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v25,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      if ( UsageLength )
      {
        v16 = CurrentUsageList;
        v17 = UsageLength;
        p_ButtonList = &ButtonList;
        do
        {
          Usage = p_ButtonList->Usage;
          ++p_ButtonList;
          *v16++ = Usage;
          --v17;
        }
        while ( v17 );
      }
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (__int64)this + 2760,
        (__int64)&v28,
        (unsigned __int8 *)&v29);
      if ( v28 == *((struct _HIDP_CAPS **)this + 346) )
      {
        DeviceInfo = -2147467259;
        v9 = 215LL;
        goto LABEL_3;
      }
      v20 = &v28->Reserved[5];
      Usages = HidP_UsageListDifference(&v28->Reserved[5], CurrentUsageList, BreakUsageList, MakeUsageList, 0x14u);
      if ( Usages < 0 )
      {
        v25 = 224LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v25,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v21 = BreakUsageList;
      *(_OWORD *)v20 = *(_OWORD *)CurrentUsageList;
      *((_OWORD *)v20 + 1) = v36;
      *((_QWORD *)v20 + 4) = v37;
      if ( BreakUsageList[0] )
        break;
LABEL_20:
      v23 = MakeUsageList;
      if ( MakeUsageList[0] )
      {
        while ( 1 )
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                      (SystemControlDeviceCollection *)*v23,
                      a2,
                      TickCount,
                      PerformanceCount,
                      *v23,
                      1,
                      v32) >= 0 )
          {
            DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                           *((_QWORD *)this + 2),
                           v32);
            if ( DeviceInfo < 0 )
              break;
          }
          if ( !*++v23 )
            goto LABEL_25;
        }
        v9 = 299LL;
        goto LABEL_3;
      }
LABEL_25:
      InputReportByteLength = v13->InputReportByteLength;
      a4 -= InputReportByteLength;
      Report += InputReportByteLength;
      if ( a4 < (unsigned int)InputReportByteLength )
        return 0LL;
      PreparsedData = v27;
    }
    while ( 1 )
    {
      v22 = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                  (SystemControlDeviceCollection *)*v21,
                  a2,
                  v22,
                  PerformanceCount,
                  *v21,
                  0,
                  v32) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v32);
        if ( DeviceInfo < 0 )
          break;
      }
      if ( !*++v21 )
        goto LABEL_20;
    }
    v9 = 260LL;
    goto LABEL_3;
  }
  return 0LL;
}
