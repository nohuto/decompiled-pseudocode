/*
 * XREFs of IopIsSecurityContextAppContainer @ 0x14029BE50
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067249C (SeIsAppContainerOrIdentifyLevelContext.c)
 */

char __fastcall IopIsSecurityContextAppContainer(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SeIsAppContainerOrIdentifyLevelContext(a1);
  return 0;
}
