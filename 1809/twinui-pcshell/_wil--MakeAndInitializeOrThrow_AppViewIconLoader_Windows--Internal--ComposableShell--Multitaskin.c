/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&___ptr64_IApplicationView_____ptr64_Windows::UI::Xaml::Media::Imaging::IWriteableBitmap_____ptr64_IApplicationViewIconLoader_____ptr64__::_1_::dtor$0 @ 0x1802A8C04
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x180151054 (--1-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_____ptr64_IApplicationView_____ptr64_Windows::UI::Xaml::Media::Imaging::IWriteableBitmap_____ptr64_IApplicationViewIconLoader_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewIconLoader>::~ComPtr<AppViewIconLoader>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
