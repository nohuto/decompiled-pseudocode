/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C004F1CC
 * Callers:
 *     SfnINLPWINDOWPOS @ 0x1C004EE40 (SfnINLPWINDOWPOS.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 * Callees:
 *     <none>
 */

__int64 IS_USERCRIT_OWNED_SHAREDONLY()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
  return v0;
}
