/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00AE3AC
 * Callers:
 *     SfnINLPWINDOWPOS @ 0x1C00AE020 (SfnINLPWINDOWPOS.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
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
