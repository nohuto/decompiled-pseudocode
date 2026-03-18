/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x140760A80
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( (CmpGlobalFlushControlFlags & 0xFFFFFFFE) != 0 )
    CmpGlobalFlushControlFlags = 0;
}
