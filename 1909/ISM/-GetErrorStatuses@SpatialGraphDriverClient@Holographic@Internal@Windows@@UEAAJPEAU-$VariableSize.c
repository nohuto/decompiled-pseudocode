/*
 * XREFs of ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x1801562F0
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x18003A180 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAU-$VariableS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180155874 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x1801563D0 (-GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DE.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetErrorStatuses(
        __int64 a1,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  int DevicePropertyOfVariableSize; // eax
  _DWORD *v7; // rbx
  PCWSTR StringRawBuffer; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 164LL) < 2u )
  {
    v3 = -2147024846;
    v4 = 1460LL;
    v5 = 2147942450LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v5);
    *((_QWORD *)a2 + 2) = *((_QWORD *)a2 + 1);
    return v3;
  }
  DevicePropertyOfVariableSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
                                   a1 - 8,
                                   &SPATIAL_GRAPH_DEVICE_PROPERTY_ERROR_STATUSES,
                                   a2,
                                   (__int64 (__fastcall *)(unsigned __int8 *, unsigned __int64))Windows::Internal::Holographic::ValidateProperty::ErrorStatuses,
                                   0);
  v3 = DevicePropertyOfVariableSize;
  if ( DevicePropertyOfVariableSize < 0 )
  {
    v5 = (unsigned int)DevicePropertyOfVariableSize;
    v4 = 1467LL;
    goto LABEL_5;
  }
  v7 = (_DWORD *)*((_QWORD *)a2 + 1);
  if ( v7 )
    v7 = (_DWORD *)((char *)v7 + *(_QWORD *)a2);
  if ( *v7 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 96) + 32LL), 0LL);
    if ( HolographicDriverClientTrace::IsEnabled(v10, v9) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v11,
        lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::GetErrorStatuses_(v12, 1LL, StringRawBuffer, v7);
    }
  }
  return 0;
}
