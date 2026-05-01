/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____const_&_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0___::permission__::_1_::dtor$0 @ 0x18020A22A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800946AC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____const___Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0___::permission__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
