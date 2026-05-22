/*
 * XREFs of std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___ @ 0x1800279FC
 * Callers:
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180027980 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

__int64 __fastcall std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  char *v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  size_t v13; // rcx
  _QWORD *v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  size_t v17; // rbx
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v5 = *(char **)(a1 + 8);
  v6 = (__int64)&v5[-*(_QWORD *)a1] / 84;
  v7 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  result = (unsigned __int64)(v7 + ((unsigned __int128)(v7 * (__int128)(__int64)0xC30C30C30C30C30DuLL) >> 64)) >> 63;
  v9 = v7 / 84;
  if ( a2 <= v7 / 84 )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
      {
        result = *(_QWORD *)a1 + 84 * a2;
        *(_QWORD *)(a1 + 8) = result;
      }
    }
    else
    {
      v16 = a2 - v6;
      if ( v16 )
      {
        v17 = 84 * v16;
        result = (__int64)memset_0(v5, 0, v17);
        v5 += v17;
      }
      *(_QWORD *)(a1 + 8) = v5;
    }
  }
  else
  {
    if ( a2 > 0x30C30C30C30C30CLL )
      std::_Xlength_error("vector<T> too long");
    v10 = v9 >> 1;
    if ( v9 > 0x30C30C30C30C30CLL - (v9 >> 1) )
    {
      v11 = a2;
    }
    else
    {
      v11 = v10 + v9;
      if ( v10 + v9 < a2 )
        v11 = a2;
    }
    v12 = 84 * v11;
    v13 = 84 * v11;
    if ( v11 > 0x30C30C30C30C30CLL )
      v13 = -1LL;
    v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
    if ( a2 != v6 )
      memset_0((char *)v14 + 84 * v6, 0, 84 * (a2 - v6));
    std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v18);
    memmove_0(v14, *(const void **)a1, v15 - *(_QWORD *)a1);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)(84 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 84LL)));
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = (char *)v14 + 84 * a2;
    result = (__int64)v14 + v12;
    *(_QWORD *)(a1 + 16) = (char *)v14 + v12;
  }
  return result;
}
