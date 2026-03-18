/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x14075C300
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( (CmpGlobalFlushControlFlags & 0xFFFFFFFE) != 0 )
    CmpGlobalFlushControlFlags = 0;
}
