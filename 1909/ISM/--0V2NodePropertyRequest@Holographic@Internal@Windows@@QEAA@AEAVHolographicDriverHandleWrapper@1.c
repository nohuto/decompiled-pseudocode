/*
 * XREFs of ??0V2NodePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@AEBUSPATIAL_NODE_ID@@IAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2NodePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180151464
 * Callers:
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801530A4 (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0V2PropertyRequest@Holographic@Internal@Windows@@IEAA@AEAVHolographicDriverHandleWrapper@123@KIPEBX_KAEAU_LUID@@P6AJ1_K@Z@Z @ 0x180151584 (--0V2PropertyRequest@Holographic@Internal@Windows@@IEAA@AEAVHolographicDriverHandleWrapper@123@K.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::V2NodePropertyRequest::V2NodePropertyRequest(
        __int64 a1,
        struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *a2,
        _OWORD *a3,
        unsigned int a4,
        _OWORD *a5,
        int (*a6)(const void *, unsigned __int64),
        __int64 a7)
{
  _DWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx

  v9 = (_DWORD *)(a1 + 128);
  Windows::Internal::Holographic::V2PropertyRequest::V2PropertyRequest(
    (Windows::Internal::Holographic::V2PropertyRequest *)a1,
    a2,
    0x5B8458u,
    a4,
    (const void *)(a1 + 128),
    0x28uLL,
    (struct _LUID *)(a1 + 160),
    a6);
  *(_QWORD *)a1 = &Windows::Internal::Holographic::V2NodePropertyRequest::`vftable';
  *v9 = 0;
  memset_0((void *)(a1 + 132), 0, 0x24uLL);
  *(_QWORD *)(a1 + 224) = 0LL;
  v10 = *(_QWORD *)(a7 + 56);
  if ( v10 )
  {
    if ( v10 == a7 )
    {
      *(_QWORD *)(a1 + 224) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, a1 + 168);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a7, v11);
    }
    else
    {
      *(_QWORD *)(a1 + 224) = v10;
      *(_QWORD *)(a7 + 56) = 0LL;
    }
  }
  *(_OWORD *)v9 = *a5;
  *(_OWORD *)(a1 + 144) = *a3;
  return a1;
}
