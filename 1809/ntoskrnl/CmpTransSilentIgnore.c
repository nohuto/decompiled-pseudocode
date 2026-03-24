/*
 * XREFs of CmpTransSilentIgnore @ 0x1400B9C80
 * Callers:
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
