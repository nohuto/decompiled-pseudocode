/*
 * XREFs of ?get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z @ 0x180086350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_CurrentlyShownApplicationViewId(
        CActivatedEventArgsWithViewIdBase *this,
        int *a2)
{
  *a2 = *((_DWORD *)this - 8);
  return 0LL;
}
