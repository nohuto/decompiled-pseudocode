/*
 * XREFs of ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1801546F0
 * Callers:
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x18003A110 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJW4SPATIAL_GRAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CB58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 *     ??$DeleteStaticNodes@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@AEAKAEAPEBUSPATIAL_NODE_ID@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@AEAKAEAPEBUSPATIAL_NODE_ID@@@Z @ 0x180149FC4 (--$DeleteStaticNodes@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::DeleteStaticNodes(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4)
{
  __int64 v4; // rdi
  unsigned int v9; // ebp
  unsigned int *v10; // rax
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // r9
  const struct std::nothrow_t *v17; // rdx
  unsigned int v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v21; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+18h] BYREF
  const void *v23; // [rsp+A8h] [rbp+20h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v4 = a3;
  if ( a3 && !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D1,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v9 = 16 * a3 + 8;
  v10 = (unsigned int *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = 981LL;
LABEL_12:
    v16 = v12;
    goto LABEL_13;
  }
  memset_0(v10, 0, (unsigned int)(16 * v4 + 8));
  v11[1] = v4;
  *v11 = a2;
  if ( (_DWORD)v4 )
    memmove_0(v11 + 2, a4, 16 * v4);
  v14 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  v18 = 0;
  v15 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          v14,
          0x5B842Cu,
          v11,
          v9,
          0,
          0,
          &v18);
  v12 = v15;
  if ( v15 >= 0 )
  {
    if ( !v18 )
    {
      v19[0] = a1 - 8;
      HolographicDriverClientTrace::DeleteStaticNodes<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,enum SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION &,unsigned long &,SPATIAL_NODE_ID const * &>(
        v19,
        a1 + 72,
        &v21,
        &v22,
        &v23);
      v12 = 0;
      goto LABEL_15;
    }
    v12 = -2147418113;
    v13 = 998LL;
    goto LABEL_12;
  }
  v16 = (unsigned int)v15;
  v13 = 996LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v16);
LABEL_15:
  if ( v11 )
    operator delete(v11, v17);
  return v12;
}
