/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@123@ABU_GUID@@PAPAX@Z @ 0x10010033
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGJABU_GUID@@PAPAX@Z @ 0x10010D30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  int v4; // edi
  _DWORD *v5; // edx
  _DWORD *v6; // ecx

  v4 = 0;
  *a3 = 0;
  if ( InlineIsEqualGUID(a2, &_GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = a1;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1 + 4))(*(_DWORD *)(*(_DWORD *)a1 + 4), a1);
    return 0;
  }
  else
  {
    if ( !InlineIsEqualGUID(v6, v5) )
      return -2147467262;
    *a3 = a1;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1 + 4))(*(_DWORD *)(*(_DWORD *)a1 + 4), a1);
    return v4;
  }
}
