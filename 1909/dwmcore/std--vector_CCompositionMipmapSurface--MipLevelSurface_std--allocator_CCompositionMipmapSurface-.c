/*
 * XREFs of std::vector_CCompositionMipmapSurface::MipLevelSurface_std::allocator_CCompositionMipmapSurface::MipLevelSurface___::_Resize__lambda_a2eaa8aad34492302e036d5b613ed997___ @ 0x1801CFB5C
 * Callers:
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1801D0220 (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAXQEAUMipLevelSurface@CCompositionMipmapSurface@@_K1@Z @ 0x1801D07FC (-_Change_array@-$vector@UMipLevelSurface@CCompositionMipmapSurface@@V-$allocator@UMipLevelSurfac.c)
 */

_UNKNOWN **__fastcall std::vector_CCompositionMipmapSurface::MipLevelSurface_std::allocator_CCompositionMipmapSurface::MipLevelSurface___::_Resize__lambda_a2eaa8aad34492302e036d5b613ed997___(
        __int64 a1,
        unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  SIZE_T v10; // rcx
  char *v11; // r14
  unsigned __int64 v12; // r8
  char *v13; // rdi
  unsigned __int64 v14; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 8);
  v6 = (v3 - *(_QWORD *)a1) >> 5;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5;
  if ( a2 <= v7 )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 32 * a2;
    }
    else
    {
      v14 = a2 - v6;
      if ( v14 )
      {
        result = (_UNKNOWN **)memset_0(*(void **)(a1 + 8), 0, 32 * v14);
        v3 += 32 * v14;
      }
      *(_QWORD *)(a1 + 8) = v3;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v8 = v7 >> 1;
    if ( v7 <= 0x7FFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < a2 )
        v9 = a2;
    }
    else
    {
      v9 = a2;
    }
    v10 = 32 * v9;
    if ( v9 > 0x7FFFFFFFFFFFFFFLL )
      v10 = -1LL;
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    v12 = a2 - v6;
    v13 = &v11[32 * v6];
    if ( v12 )
      memset_0(v13, 0, 32 * v12);
    memmove_0(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return (_UNKNOWN **)std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Change_array(a1, v11, a2, v9);
  }
  return result;
}
