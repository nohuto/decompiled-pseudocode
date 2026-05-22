/*
 * XREFs of ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x180157F90
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18003A710 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_N.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800B5E44 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$IsValidFloat@M@Details@@YA_NM@Z @ 0x1800D6FA0 (--$IsValidFloat@M@Details@@YA_NM@Z.c)
 *     memcpy_s_1 @ 0x1801226D4 (memcpy_s_1.c)
 *     ??$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18014AAE8 (--$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBU.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180153408 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodePoses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        unsigned int a3,
        const struct SPATIAL_NODE_ID *a4,
        struct SPATIAL_GRAPH_STATIC_NODE_POSE *Destination)
{
  DWORD v6; // r12d
  __int64 v7; // r14
  const struct SPATIAL_NODE_ID *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  signed __int64 v13; // rax
  __int128 v14; // xmm0
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  void *bAlertable; // rcx
  int v19; // eax
  unsigned int *v20; // rbx
  __int64 v21; // rax
  int v22; // edi
  float *v23; // r15
  unsigned int i; // esi
  unsigned int v26; // [rsp+48h] [rbp-31h] BYREF
  char *v27; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h] BYREF
  BOOL v29[4]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v30; // [rsp+70h] [rbp-9h]
  __int64 v31; // [rsp+78h] [rbp-1h] BYREF
  void *v32[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v33; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  unsigned int v36; // [rsp+E8h] [rbp+6Fh] BYREF
  const struct SPATIAL_NODE_ID *v37; // [rsp+F0h] [rbp+77h] BYREF

  v37 = a4;
  v36 = a3;
  v31 = 0LL;
  v33 = 0LL;
  v6 = 16 * a3 + 20;
  v7 = a3;
  v8 = a4;
  *(_OWORD *)v32 = 0LL;
  v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
         (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v31,
         v6);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = v32[0];
    if ( v32[0] )
      v11 = (char *)v32[0] + v31;
    memset_0(v11, 0, v6);
    v11[4] = v7;
    *(_OWORD *)v11 = *(_OWORD *)a2;
    if ( (_DWORD)v7 )
    {
      v12 = v7;
      v13 = (char *)v11 - (char *)v8;
      do
      {
        v14 = *(_OWORD *)v8;
        v8 = (const struct SPATIAL_NODE_ID *)((char *)v8 + 16);
        *(_OWORD *)((char *)v8 + v13 + 4) = v14;
        --v12;
      }
      while ( v12 );
    }
    v28 = 0LL;
    v30 = 0LL;
    *(_OWORD *)v29 = 0LL;
    v15 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
            (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v28,
            (unsigned int)(68 * v7 + 4));
    v10 = v15;
    if ( v15 >= 0 )
    {
      v26 = 0;
      bAlertable = *(void **)v29;
      if ( *(_QWORD *)v29 )
        bAlertable = (void *)(v28 + *(_QWORD *)v29);
      v19 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
              *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 12),
              0x5B8424u,
              v11,
              v6,
              bAlertable,
              68 * (int)v7 + 4,
              &v26);
      v10 = v19;
      if ( v19 >= 0 )
      {
        if ( v26 == 68 * (_DWORD)v7 + 4 )
        {
          v20 = *(unsigned int **)v29;
          if ( *(_QWORD *)v29 )
            v20 = (unsigned int *)(v28 + *(_QWORD *)v29);
          v21 = *v20;
          if ( (_DWORD)v21 == (_DWORD)v7 )
          {
            v22 = 0;
            if ( (_DWORD)v21 )
            {
              while ( 2 )
              {
                v23 = (float *)&v20[17 * v22 + 5];
                for ( i = 0; i < 0xC; ++i )
                {
                  if ( !Details::IsValidFloat<float>(*v23) )
                  {
                    v10 = -2147024883;
                    v17 = 1078LL;
                    goto LABEL_29;
                  }
                  ++v23;
                }
                v21 = *v20;
                if ( ++v22 < (unsigned int)v21 )
                  continue;
                break;
              }
            }
            memcpy_s_1(Destination, 68 * v7, v20 + 1, 68 * v21);
            v27 = (char *)this - 8;
            HolographicDriverClientContinuousTrace::GetStaticNodePoses<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,unsigned long &,SPATIAL_NODE_ID const * &,SPATIAL_GRAPH_STATIC_NODE_POSE * &>(
              (const void **)&v27,
              (const struct _GUID *)((char *)this + 72),
              a2,
              &v36,
              &v37);
            v10 = 0;
            goto LABEL_26;
          }
          v10 = -2147418113;
          v17 = 1074LL;
        }
        else
        {
          v10 = -2147418113;
          v17 = 1070LL;
        }
LABEL_29:
        v16 = v10;
      }
      else
      {
        v16 = (unsigned int)v19;
        v17 = 1068LL;
      }
    }
    else
    {
      v16 = (unsigned int)v15;
      v17 = 1058LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v16);
LABEL_26:
    std::vector<unsigned char>::_Tidy((__int64)v29);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x414,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v9);
LABEL_27:
  std::vector<unsigned char>::_Tidy((__int64)v32);
  return v10;
}
