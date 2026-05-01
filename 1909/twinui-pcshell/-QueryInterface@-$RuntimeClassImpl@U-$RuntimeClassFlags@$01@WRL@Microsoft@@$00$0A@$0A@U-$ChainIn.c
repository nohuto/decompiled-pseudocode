/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BA80
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D4BC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D4BC0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  _DWORD *v8; // r9
  void (*v9)(void); // rax

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    v9 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
  }
  else
  {
    if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_05581915_c410_44c8_819a_f310f6c0ffee, a3, a2)
      && !(unsigned int)InlineIsEqualGUID(v4, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, v5, v6) )
    {
      v7 += 8LL;
      if ( *v8 != 773384899
        || v8[1] != *(_DWORD *)&GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data2
        || v8[2] != *(_DWORD *)GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data4
        || v8[3] != *(_DWORD *)&GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
    }
    *(_QWORD *)v5 = v7;
    v9 = *(void (**)(void))(**(_QWORD **)v5 + 8LL);
  }
  v9();
  return v3;
}
