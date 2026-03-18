/*
 * XREFs of CmpTransSilentIgnore @ 0x1400B9C60
 * Callers:
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
