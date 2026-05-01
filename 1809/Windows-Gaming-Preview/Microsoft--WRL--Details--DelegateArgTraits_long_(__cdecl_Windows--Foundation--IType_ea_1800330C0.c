/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_d22facc111afee216f03a1c91e368862___1_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64_::Invoke @ 0x1800330C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800156C4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64___::___WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_d22facc111afee216f03a1c91e368862___1_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____ptr64_::Invoke(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    return 0;
  v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_735924d3_811f_4494_b69c_c641a0c61543,
         &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( v14 )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 72) + 168LL);
      EnterCriticalSection(v6);
      v7 = *(_QWORD *)(a1 + 72);
      v8 = *(_QWORD *)(v7 + 208);
      if ( v8 )
      {
        *(_QWORD *)(v7 + 208) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v7 = *(_QWORD *)(a1 + 72);
      }
      v9 = *(_QWORD *)(v7 + 216);
      if ( v9 )
      {
        *(_QWORD *)(v7 + 216) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 224LL);
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, v14);
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v4 = 0;
      goto LABEL_17;
    }
    return 0;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21B,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v3);
  v5 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_17:
  if ( v4 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v4);
  return (unsigned int)v4;
}
