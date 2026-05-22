/*
 * XREFs of ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x18015FE70
 * Callers:
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x18003A830 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJIPEBUSPAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800B5E44 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180153408 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::TrimDurableStaticNodes(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper **this,
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
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  void *v15[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  if ( *((_DWORD *)this[12] + 41) >= 7u )
  {
    v14 = 0LL;
    v16 = 0LL;
    v7 = 16 * a2 + 4;
    *(_OWORD *)v15 = 0LL;
    v8 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
           (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v14,
           v7);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v11 = v15[0];
      if ( v15[0] )
        v11 = (char *)v15[0] + v14;
      memset_0(v11, 0, (unsigned int)(16 * v4 + 4));
      *v11 = v4;
      memmove_0(v11 + 1, a3, 16 * v4);
      v12 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
              this[12],
              0x5B8454u,
              v11,
              v7,
              0LL,
              0,
              &v18);
      v6 = v12;
      if ( v12 >= 0 )
      {
        if ( !v18 )
        {
          v6 = 0;
          goto LABEL_13;
        }
        v6 = -2147418113;
        v10 = 1543LL;
        v9 = 2147549183LL;
      }
      else
      {
        v9 = (unsigned int)v12;
        v10 = 1541LL;
      }
    }
    else
    {
      v9 = (unsigned int)v8;
      v10 = 1527LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v9);
LABEL_13:
    std::vector<unsigned char>::_Tidy((__int64)v15);
    return v6;
  }
  v6 = -2147024846;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F3,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)0x80070032LL);
  return v6;
}
