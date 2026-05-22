/*
 * XREFs of ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014A4DC
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1801556E8 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180156B5C (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800B2E28 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800B5E44 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     memcpy_s_1 @ 0x1801226D4 (memcpy_s_1.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        void *Destination,
        rsize_t DestinationSize)
{
  rsize_t v6; // r14
  rsize_t v11; // r12
  _DWORD *v12; // r15
  int v13; // ebx
  __int64 v14; // rdx
  const char *v15; // r9
  BOOL bAlertable[2]; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = DestinationSize;
  v11 = DestinationSize + 4;
  std::vector<unsigned char>::vector<unsigned char>((char **)bAlertable, DestinationSize + 4);
  v12 = *(_DWORD **)bAlertable;
  LODWORD(DestinationSize) = 0;
  v13 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          a1,
          a2,
          a3,
          a4,
          bAlertable[0],
          v18 - bAlertable[0],
          (unsigned int *)&DestinationSize);
  if ( v13 >= 0 )
  {
    if ( (unsigned int)DestinationSize != v11 )
    {
      v14 = 336LL;
LABEL_6:
      v13 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)0x8000FFFFLL);
      goto LABEL_10;
    }
    if ( *v12 != v6 )
    {
      v14 = 339LL;
      goto LABEL_6;
    }
    if ( memcpy_s_1(Destination, v6, v12 + 1, v6) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        341LL,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        v15);
      __debugbreak();
    }
    v13 = 0;
  }
LABEL_10:
  std::vector<unsigned char>::_Tidy((__int64)bAlertable);
  return (unsigned int)v13;
}
