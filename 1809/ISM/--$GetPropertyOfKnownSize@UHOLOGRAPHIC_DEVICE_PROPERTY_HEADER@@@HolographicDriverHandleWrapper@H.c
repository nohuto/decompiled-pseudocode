/*
 * XREFs of ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18011B760
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18011471C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114E24 (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 * Callees:
 *     memcpy_s @ 0x1800019E8 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x18007C358 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *lpInBuffer,
        DWORD a4,
        void *Destination,
        rsize_t DestinationSize)
{
  rsize_t v6; // r15
  rsize_t v11; // r12
  char *v12; // r14
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  const char *v16; // r9
  char *v17; // rax
  const struct std::nothrow_t *v18; // rdx
  BOOL bAlertable[2]; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+48h] [rbp-30h]
  __int64 v22; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = DestinationSize;
  v11 = DestinationSize + 4;
  std::vector<unsigned char>::vector<unsigned char>((char **)bAlertable, DestinationSize + 4);
  v12 = *(char **)bAlertable;
  LODWORD(DestinationSize) = 0;
  v14 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          this,
          a2,
          lpInBuffer,
          a4,
          *(LPVOID *)bAlertable,
          v21 - bAlertable[0],
          (LPDWORD)&DestinationSize);
  if ( v14 >= 0 )
  {
    if ( (unsigned int)DestinationSize != v11 )
    {
      v15 = 336LL;
LABEL_6:
      v14 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)0x8000FFFFLL);
      goto LABEL_9;
    }
    if ( *(_DWORD *)v12 != v6 )
    {
      v15 = 339LL;
      goto LABEL_6;
    }
    if ( memcpy_s(Destination, v6, v12 + 4, v6) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x155,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        v16);
      JUMPOUT(0x18011B8ACLL);
    }
    v14 = 0;
  }
LABEL_9:
  if ( v12 )
  {
    v17 = v12;
    v18 = (const struct std::nothrow_t *)(v22 - (_QWORD)v12);
    if ( (unsigned __int64)(v22 - (_QWORD)v12) >= 0x1000 )
    {
      v12 = (char *)*((_QWORD *)v12 - 1);
      v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
      if ( (unsigned __int64)(v17 - v12 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v13, v18);
        __debugbreak();
      }
    }
    operator delete(v12, v18);
  }
  return (unsigned int)v14;
}
