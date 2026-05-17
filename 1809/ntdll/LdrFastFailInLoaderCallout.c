/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x180087B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( (void *)qword_18015F5D8 == result->ClientId.UniqueThread || LdrpProcessInitialized < 2 )
    __fastfail(0x17u);
  return result;
}
