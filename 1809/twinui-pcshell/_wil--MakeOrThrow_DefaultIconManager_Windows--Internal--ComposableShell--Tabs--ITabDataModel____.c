/*
 * XREFs of _wil::MakeOrThrow_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64_IImmersiveWindowMessageService_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801FBA17
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VDefaultIconManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801FD770 (--1-$ComPtr@VDefaultIconManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_DefaultIconManager_Windows::Internal::ComposableShell::Tabs::ITabDataModel_____ptr64_____ptr64_ITabViewManager_____ptr64_____ptr64_IImmersiveWindowMessageService_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<DefaultIconManager>::~ComPtr<DefaultIconManager>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
