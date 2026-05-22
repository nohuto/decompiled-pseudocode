/*
 * XREFs of ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x180115830
 * Callers:
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x180121DC0 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJIPEBUSPAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180109EE0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::TrimDurableStaticNodes(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        unsigned int a2,
        const struct SPATIAL_NODE_ID *a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  DWORD v7; // edi
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  int v12; // eax
  void *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  void *lpInBuffer[2]; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  if ( *(_DWORD *)(*((_QWORD *)this + 12) + 164LL) < 7u )
  {
    v6 = -2147024846;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EC,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070032LL);
    return v6;
  }
  v16 = 0LL;
  v18 = 0LL;
  v7 = 16 * a2 + 4;
  *(_OWORD *)lpInBuffer = 0LL;
  v8 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 1520LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v9);
    goto LABEL_13;
  }
  v11 = lpInBuffer[0];
  if ( lpInBuffer[0] )
    v11 = (char *)lpInBuffer[0] + v16;
  memset_0(v11, 0, (unsigned int)(16 * v4 + 4));
  *v11 = v4;
  memmove_0(v11 + 1, a3, 16 * v4);
  v12 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 12),
          0x5B8454u,
          v11,
          v7,
          0LL,
          0,
          &v20);
  v6 = v12;
  if ( v12 < 0 )
  {
    v9 = (unsigned int)v12;
    v10 = 1534LL;
    goto LABEL_11;
  }
  if ( v20 )
  {
    v6 = -2147418113;
    v10 = 1536LL;
    v9 = 2147549183LL;
    goto LABEL_11;
  }
  v6 = 0;
LABEL_13:
  v13 = lpInBuffer[0];
  if ( lpInBuffer[0] )
  {
    v14 = (const struct std::nothrow_t *)(v18 - (unsigned __int64)lpInBuffer[0]);
    if ( v18 - (unsigned __int64)lpInBuffer[0] >= 0x1000 )
    {
      v13 = (void *)*((_QWORD *)lpInBuffer[0] - 1);
      v14 = (const struct std::nothrow_t *)((char *)v14 + 39);
      if ( (unsigned __int64)((char *)lpInBuffer[0] - (char *)v13 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v13, v14);
        __debugbreak();
      }
    }
    operator delete(v13, v14);
  }
  return v6;
}
