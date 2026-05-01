/*
 * XREFs of ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::QueryInterface(
           (Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *)(a1 - 40),
           a2,
           a3);
}
