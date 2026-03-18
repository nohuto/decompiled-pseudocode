/*
 * XREFs of std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___ @ 0x1801B3AB0
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B427C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAXQEAUComputeScribbleLatencyData@@_K1@Z @ 0x1801B4C20 (-_Change_array@-$vector@UComputeScribbleLatencyData@@V-$allocator@UComputeScribbleLatencyData@@@.c)
 */

__int64 __fastcall std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___(
        __int64 a1,
        unsigned __int64 a2)
{
  _BYTE *v2; // rdi
  _BYTE *v4; // r9
  const char *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  char *v13; // r15
  unsigned __int64 v14; // rbx
  size_t v15; // rbx

  v2 = *(_BYTE **)(a1 + 8);
  v4 = *(_BYTE **)a1;
  v6 = (const char *)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
  result = (unsigned __int64)((unsigned __int128)((__int64)v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v8 = (v2 - v4) / 24;
  v9 = (__int64)v6 / 24;
  if ( a2 <= (__int64)v6 / 24 )
  {
    if ( a2 <= v8 )
    {
      if ( a2 != v8 )
      {
        result = 3 * a2;
        *(_QWORD *)(a1 + 8) = &v4[24 * a2];
      }
    }
    else
    {
      v14 = a2 - v8;
      if ( v14 )
      {
        v15 = 24 * v14;
        result = (__int64)memset_0(v2, 0, v15);
        v2 += v15;
      }
      *(_QWORD *)(a1 + 8) = v2;
    }
  }
  else
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error(v6);
    v10 = v9 >> 1;
    if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < a2 )
        v11 = a2;
    }
    else
    {
      v11 = a2;
    }
    v12 = 24 * v11;
    if ( v11 > 0xAAAAAAAAAAAAAAALL )
      v12 = -1LL;
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
    if ( a2 != v8 )
      memset_0(&v13[24 * v8], 0, 24 * (a2 - v8));
    memmove_0(v13, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<ComputeScribbleLatencyData>::_Change_array(a1, v13, a2, v11);
  }
  return result;
}
