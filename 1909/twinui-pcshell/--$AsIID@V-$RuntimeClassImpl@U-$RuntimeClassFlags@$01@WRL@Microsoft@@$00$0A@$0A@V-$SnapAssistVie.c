/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18037E778
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037EA40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18037EA40.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewInvocationAnimationCoordinator>>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  BOOL IsEqualGUID; // eax
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int v10; // r11d
  _DWORD *v11; // rcx
  __int64 v12; // r9
  int v13; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0LL;
  }
  IsEqualGUID = InlineIsEqualGUID(v3, &GUID_b406b6c5_d8ab_475a_b797_5e5d2d5d22c4);
  v10 = -2147467262;
  if ( IsEqualGUID || InlineIsEqualGUID(v7, &GUID_ea7f7ba6_4c6a_4191_9c06_24520bc6be9e) )
  {
    *v8 = v9;
    goto LABEL_8;
  }
  if ( InlineIsEqualGUID(v11, &GUID_a1b0cf80_ce10_4efd_8623_e2697c1b0f4b) )
  {
    *v8 = v12 + 8;
LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  v13 = v10;
LABEL_9:
  if ( v13 == v10 )
    v13 = v10;
  if ( v13 == v10 )
    v13 = v10;
  if ( v13 >= 0 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)v13;
}
