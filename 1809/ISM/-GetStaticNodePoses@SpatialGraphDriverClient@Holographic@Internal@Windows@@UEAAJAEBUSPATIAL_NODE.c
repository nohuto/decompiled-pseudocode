/*
 * XREFs of ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1801143B0
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x180121D50 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_N.c)
 * Callees:
 *     memcpy_s @ 0x1800019E8 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800A4340 (--1VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180109EE0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18010E130 (-GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NOD.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodePoses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        unsigned int a3,
        const struct SPATIAL_NODE_ID *a4,
        struct SPATIAL_GRAPH_STATIC_NODE_POSE *Destination)
{
  DWORD v6; // r15d
  __int64 v7; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  _DWORD *v11; // rdi
  const struct SPATIAL_NODE_ID *v12; // rax
  __int64 v13; // rdx
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
  unsigned int i; // r14d
  _DWORD *v25; // rcx
  HolographicDriverClientContinuousTrace *v26; // rcx
  void *v27; // rcx
  const struct std::nothrow_t *v28; // rdx
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  BOOL v31[4]; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-20h] BYREF
  void *lpInBuffer[2]; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v38; // [rsp+D0h] [rbp+50h] BYREF

  v33 = 0LL;
  v35 = 0LL;
  v6 = 16 * a3 + 20;
  v7 = a3;
  *(_OWORD *)lpInBuffer = 0LL;
  v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v33);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40D,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_37;
  }
  v11 = lpInBuffer[0];
  if ( lpInBuffer[0] )
    v11 = (char *)lpInBuffer[0] + v33;
  memset_0(v11, 0, v6);
  v11[4] = v7;
  *(_OWORD *)v11 = *(_OWORD *)a2;
  if ( (_DWORD)v7 )
  {
    v12 = a4;
    v13 = v7;
    do
    {
      v14 = *(_OWORD *)v12;
      v12 = (const struct SPATIAL_NODE_ID *)((char *)v12 + 16);
      *(_OWORD *)((char *)v12 + (char *)v11 - (char *)a4 + 4) = v14;
      --v13;
    }
    while ( v13 );
  }
  v30 = 0LL;
  v32 = 0LL;
  *(_OWORD *)v31 = 0LL;
  v15 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v30);
  v10 = v15;
  if ( v15 >= 0 )
  {
    v38 = 0;
    bAlertable = *(void **)v31;
    if ( *(_QWORD *)v31 )
      bAlertable = (void *)(v30 + *(_QWORD *)v31);
    v19 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 12),
            0x5B8424u,
            v11,
            v6,
            bAlertable,
            68 * (int)v7 + 4,
            &v38);
    v10 = v19;
    if ( v19 >= 0 )
    {
      if ( v38 == 68 * (_DWORD)v7 + 4 )
      {
        v20 = *(unsigned int **)v31;
        if ( *(_QWORD *)v31 )
          v20 = (unsigned int *)(v30 + *(_QWORD *)v31);
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
                if ( (_fpclass(*v23) & 0x207) != 0 )
                {
                  v10 = -2147024883;
                  v17 = 1071LL;
                  goto LABEL_34;
                }
                ++v23;
              }
              v21 = *v20;
              if ( ++v22 < (unsigned int)v21 )
                continue;
              break;
            }
          }
          memcpy_s(Destination, 68 * v7, v20 + 1, 68 * v21);
          v25 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
          if ( v25 && *v25 )
          {
            HolographicDriverClientContinuousTrace::Instance();
            HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
              v26,
              (char *)this - 8,
              (const struct _GUID *)((char *)this + 72),
              a2,
              v7,
              a4);
          }
          v10 = 0;
          goto LABEL_29;
        }
        v10 = -2147418113;
        v17 = 1067LL;
      }
      else
      {
        v10 = -2147418113;
        v17 = 1063LL;
      }
LABEL_34:
      v16 = v10;
    }
    else
    {
      v16 = (unsigned int)v19;
      v17 = 1061LL;
    }
  }
  else
  {
    v16 = (unsigned int)v15;
    v17 = 1051LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v16);
LABEL_29:
  v27 = *(void **)v31;
  if ( *(_QWORD *)v31 )
  {
    v28 = (const struct std::nothrow_t *)(v32 - *(_QWORD *)v31);
    if ( (unsigned __int64)(v32 - *(_QWORD *)v31) >= 0x1000 )
    {
      v27 = *(void **)(*(_QWORD *)v31 - 8LL);
      v28 = (const struct std::nothrow_t *)((char *)v28 + 39);
      if ( (unsigned __int64)(*(_QWORD *)v31 - (_QWORD)v27 - 8LL) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v27, v28);
        __debugbreak();
      }
    }
    operator delete(v27, v28);
    v32 = 0LL;
    *(_OWORD *)v31 = 0LL;
  }
LABEL_37:
  Windows::Internal::Holographic::VariableSizeStructWrapperBase::~VariableSizeStructWrapperBase((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v33);
  return v10;
}
