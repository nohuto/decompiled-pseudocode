/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x1800F8EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlQueryProcessPlaceholderCompatibilityMode()
{
  struct _PEB *v0; // rax

  v0 = NtCurrentPeb();
  if ( v0 )
    return (char)v0[2].UnicodeCaseTableData;
  else
    return -3;
}
