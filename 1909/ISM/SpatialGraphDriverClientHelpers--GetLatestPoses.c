/*
 * XREFs of SpatialGraphDriverClientHelpers::GetLatestPoses @ 0x180156988
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x180156E40 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSPATIAL_NODE_ID@@AEBJ@Z @ 0x18014B15C (--$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSP.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall SpatialGraphDriverClientHelpers::GetLatestPoses(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        void *a2,
        int a3,
        void *a4,
        DWORD *a5)
{
  DWORD *v5; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v12; // [rsp+60h] [rbp+18h] BYREF

  v5 = a5;
  v12 = 0;
  *a5 = 0;
  v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         a1,
         0x5B4408u,
         a2,
         0x10u,
         a4,
         160 * a3,
         &v12);
  LODWORD(a5) = v7;
  v8 = v7;
  if ( v7 == -2147024637 || v7 == -2147024891 )
  {
    HolographicDriverClientContinuousTrace::NoPoseReceivedYet<SPATIAL_NODE_ID const &,long const &>(
      (struct SPATIAL_NODE_ID *)a2,
      (int *)&a5);
  }
  else
  {
    if ( v7 >= 0 )
    {
      if ( v12 )
      {
        if ( !(v12 % 0xA0uLL) )
        {
          *v5 = v12 / 0xA0;
          return 0LL;
        }
        v8 = -2147418113;
        v9 = 105LL;
      }
      else
      {
        v8 = -2147418113;
        v9 = 104LL;
      }
    }
    else
    {
      v9 = 101LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v8);
  }
  return v8;
}
