/*
 * XREFs of RtlSetProcessPlaceholderCompatibilityMode @ 0x1800F8FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetProcessPlaceholderCompatibilityMode(char a1)
{
  struct _PEB *v1; // rdx
  char result; // al

  if ( (unsigned __int8)a1 > 3u )
    return -1;
  v1 = NtCurrentPeb();
  if ( !v1 )
    return -3;
  result = v1->PlaceholderCompatibilityMode;
  v1->PlaceholderCompatibilityMode = a1;
  return result;
}
