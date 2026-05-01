/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18008B800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,0>::ActivateInstance(
        __int64 a1,
        void **a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,IInspectable,>(a2);
}
