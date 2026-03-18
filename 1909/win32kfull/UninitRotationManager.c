/*
 * XREFs of UninitRotationManager @ 0x1C011BE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void UninitRotationManager()
{
  if ( P )
    ExFreePoolWithTag(P, 0x6D747255u);
  P = 0LL;
}
