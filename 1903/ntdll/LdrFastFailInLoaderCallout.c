/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x180083460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( stru_18015F4F8.OwningThread == result->ClientId.UniqueThread || dword_180165418 < 2 )
    __fastfail(0x17u);
  return result;
}
