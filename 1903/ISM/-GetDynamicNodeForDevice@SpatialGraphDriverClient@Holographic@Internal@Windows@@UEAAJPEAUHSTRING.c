/*
 * XREFs of ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180155B90
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x18003A670 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUHSTR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F494 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800D79B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBUDynamicNodeInfo@234@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180153304 (-AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEB.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x180155D38 (-GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNode.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015988C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeForDevice(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        HSTRING a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3)
{
  const wchar_t *StringRawBuffer; // r14
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v6; // rcx
  int v7; // esi
  __int64 v8; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  HolographicDriverClientTrace *v13; // rcx
  _QWORD *v14; // rax
  UINT32 length; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v17[5]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v18[400]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  length = 0;
  *(_OWORD *)a3 = `Zero<Windows::Internal::Holographic::DynamicNodeInfo>'::`2'::zero;
  *((_DWORD *)a3 + 4) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  memset_0(v18, 0, sizeof(v18));
  _o_wcsncpy_s(v18, 200LL, StringRawBuffer, length);
  v6 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 12);
  v16 = 0;
  v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v6,
         0x5B841Cu,
         v18,
         0x190u,
         a3,
         0x10u,
         &v16);
  if ( v7 < 0 )
  {
    v8 = 834LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v16 == 16 )
  {
    v7 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)this + 136LL))(
           this,
           a3,
           (char *)a3 + 16);
    if ( v7 < 0 )
    {
      v8 = 838LL;
      goto LABEL_3;
    }
    if ( HolographicDriverClientTrace::IsEnabled(v11, v10) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v12,
        lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::GetDynamicNodeForDevice_(
        v13,
        (char *)this - 8,
        (const struct _GUID *)((char *)this + 72),
        StringRawBuffer,
        a3);
    }
    v14 = std::wstring::wstring(v17, (__int64)StringRawBuffer);
    Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping(
      (__int64)this + 72,
      (__int64)a3,
      (__int64)v14);
    std::wstring::_Tidy_deallocate((__int64)v17);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x344,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
