/*
 * XREFs of ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x180157DA0
 * Callers:
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x18003A700 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@Z @ 0x18014AA78 (--$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AE.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodeForPose(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        const struct DirectX::XMFLOAT4X3 *a3,
        struct SPATIAL_NODE_ID *bAlertable)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 result; // rax
  unsigned int v13; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+48h] [rbp-31h] BYREF
  _OWORD v15[4]; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v13 = 0;
  v14 = 0uLL;
  *(_OWORD *)bAlertable = 0uLL;
  v8 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 12);
  v9 = *(_OWORD *)a3;
  v15[0] = *(_OWORD *)a2;
  v10 = *((_OWORD *)a3 + 1);
  v15[1] = v9;
  v11 = *((_OWORD *)a3 + 2);
  v15[2] = v10;
  v15[3] = v11;
  result = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
             v8,
             0x5B8420u,
             v15,
             0x40u,
             bAlertable,
             0x10u,
             &v13);
  if ( (int)result >= 0 )
  {
    if ( v13 == 16 )
    {
      *(_QWORD *)&v14 = (char *)this - 8;
      HolographicDriverClientContinuousTrace::GetStaticNodeForPose<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,DirectX::XMFLOAT4X3 const &,SPATIAL_NODE_ID &>(
        (const void **)&v14,
        (const struct _GUID *)((char *)this + 72),
        a2,
        a3,
        bAlertable);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x402,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  return result;
}
