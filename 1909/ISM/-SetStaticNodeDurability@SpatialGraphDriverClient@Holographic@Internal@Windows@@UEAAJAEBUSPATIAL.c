/*
 * XREFs of ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18015D390
 * Callers:
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18003A2F0 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??$TelemetrySetStaticNodeDurability@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18014B26C (--$TelemetrySetStaticNodeDurability@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@A.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::SetStaticNodeDurability(
        __int64 a1,
        __int128 *a2,
        int a3)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9 = a3;
  v5 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  v11 = *a2;
  v12 = a3;
  v6 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v5,
         0x5B8428u,
         &v11,
         0x14u,
         0LL,
         0,
         0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = a1 - 8;
    HolographicDriverClientTrace::TelemetrySetStaticNodeDurability<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,enum SPATIAL_STATIC_NODE_DURABILITY &>(
      &v10,
      a1 + 72,
      (__int64)a2,
      &v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x455,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
