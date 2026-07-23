/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x1800FB330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryProcessPlaceholderCompatibilityMode(void)
{
  struct _PEB *v0; // rax

  v0 = NtCurrentPeb();
  if ( v0 )
    return v0->PlaceholderCompatibilityMode;
  else
    return -3;
}
