/*
 * XREFs of ?CreateComponent@CoCreateInstanceImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801D4AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CoCreateInstanceImmersiveShellComponentCreator::CreateComponent(
        CoCreateInstanceImmersiveShellComponentCreator *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **ppv)
{
  return CoCreateInstance(a2, 0LL, 1u, a3, ppv);
}
