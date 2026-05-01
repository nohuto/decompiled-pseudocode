/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@123@ABU_GUID@@PAPAX@Z @ 0x1000FF27
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UAGJABU_GUID@@PAPAX@Z @ 0x10010CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0_ea_10010CF0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IAEJABU_GUID@@PAPAX@Z @ 0x10008178 (-CanCastTo@FtmBase@WRL@Microsoft@@IAEJABU_GUID@@PAPAX@Z.c)
 *     ?InlineIsEqualGUID@@YGHABU_GUID@@0@Z @ 0x100098B0 (-InlineIsEqualGUID@@YGHABU_GUID@@0@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>>(
        int a1,
        _DWORD *a2,
        void **a3)
{
  int CanCastTo; // edi
  _DWORD *v5; // ecx
  const struct _GUID *v6; // ecx

  CanCastTo = 0;
  *a3 = 0;
  if ( InlineIsEqualGUID(a2, &_GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = (void *)a1;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1 + 4))(*(_DWORD *)(*(_DWORD *)a1 + 4), a1);
    return 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v5, &_GUID_c50898f6_c536_5f47_8583_8b2c2438a13b) )
    {
      *a3 = (void *)a1;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 4), v6, a3);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
    }
    if ( CanCastTo >= 0 )
      (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*a3 + 4))(*(_DWORD *)(*(_DWORD *)*a3 + 4), *a3);
    return CanCastTo;
  }
}
