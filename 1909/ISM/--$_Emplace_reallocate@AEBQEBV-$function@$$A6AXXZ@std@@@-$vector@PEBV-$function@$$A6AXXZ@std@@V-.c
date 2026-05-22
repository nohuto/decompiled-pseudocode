/*
 * XREFs of ??$_Emplace_reallocate@AEBQEBV?$function@$$A6AXXZ@std@@@?$vector@PEBV?$function@$$A6AXXZ@std@@V?$allocator@PEBV?$function@$$A6AXXZ@std@@@2@@std@@QEAAPEAPEBV?$function@$$A6AXXZ@1@QEAPEBV21@AEBQEBV21@@Z @ 0x18014C048
 * Callers:
 *     ?AddHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXPEBV?$function@$$A6AXXZ@std@@0@Z @ 0x180152FEC (-AddHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 *     ?_Change_array@?$vector@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@V?$allocator@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@2@@std@@AEAAXQEAPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@2@_K1@Z @ 0x1800AF9C0 (-_Change_array@-$vector@PEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@V-$allocator@PEAV-$function.c)
 */

__int64 __fastcall std::vector<std::function<void (void)> const *,std::allocator<std::function<void (void)> const *>>::_Emplace_reallocate<std::function<void (void)> const * const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  __int64 result; // rax
  void *v20; // [rsp+68h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v20 = v13;
  try
  {
    v13[v6] = *a3;
    v15 = a1[1];
    v16 = *a1;
    v17 = v13;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v13, v16, a2 - (_BYTE *)*a1);
      v17 = (void *)(v14 + 8 * (v6 + 1));
      v18 = (_BYTE *)a1[1] - a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    std::vector<std::function<void (DeviceInfo *)> *,std::allocator<std::function<void (DeviceInfo *)> *>>::_Change_array(
      (__int64)a1,
      v14,
      v8,
      v11);
    result = (__int64)*a1 + 8 * v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
