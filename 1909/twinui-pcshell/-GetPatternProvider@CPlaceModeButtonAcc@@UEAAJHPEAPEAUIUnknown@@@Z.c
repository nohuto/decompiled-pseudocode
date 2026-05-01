/*
 * XREFs of ?GetPatternProvider@CPlaceModeButtonAcc@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x1803FF130
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803FEA74 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_1803FEA74.c)
 */

__int64 __fastcall CPlaceModeButtonAcc::GetPatternProvider(CPlaceModeButtonAcc *this, int a2, struct IUnknown **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( !*((_BYTE *)this + 40) || a2 != 10000 )
    return (unsigned int)-2147220988;
  if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v3, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c) )
  {
    *v6 = v7;
    CanCastTo = 0;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::CanCastTo(
                v7 + 8,
                v8);
  if ( CanCastTo >= 0 )
    goto LABEL_7;
  return (unsigned int)CanCastTo;
}
