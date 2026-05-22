/*
 * XREFs of _lambda_8f38397fb510ec0288b294132d0aacc6_::_lambda_invoker_cdecl_ @ 0x180061500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_8f38397fb510ec0288b294132d0aacc6_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v3 = (__int64 *)(a1 + 120);
  v4 = 0LL;
  v5 = 0LL;
  if ( &v10 != (__int64 *)(a1 + 120) )
  {
    v4 = *v3;
    *v3 = 0LL;
    v5 = v4;
  }
  v10 = v4;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    v11 = a1 + 32;
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v6 + 2776) + 64LL))(
             *(_QWORD *)(v6 + 2776),
             v4,
             (v6 + 2760) & -(__int64)(v6 != 0));
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v7);
    }
    if ( a1 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)a1);
  return 0LL;
}
