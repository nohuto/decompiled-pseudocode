/*
 * XREFs of ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::QueryInterface(
           (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)(a1 - 32),
           a2,
           a3);
}
