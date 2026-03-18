/*
 * XREFs of RIMUpdateInputObserverRegistration @ 0x1C010F980
 * Callers:
 *     <none>
 * Callees:
 *     rimObsUpdateInputObserverRegistration @ 0x1C012D6EC (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall RIMUpdateInputObserverRegistration(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        KPROCESSOR_MODE PreviousMode)
{
  return rimObsUpdateInputObserverRegistration(a1, PreviousMode);
}
