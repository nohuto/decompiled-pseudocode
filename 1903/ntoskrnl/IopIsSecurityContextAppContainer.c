/*
 * XREFs of IopIsSecurityContextAppContainer @ 0x14029C0F0
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14069FB50 (SeIsAppContainerOrIdentifyLevelContext.c)
 */

char __fastcall IopIsSecurityContextAppContainer(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SeIsAppContainerOrIdentifyLevelContext(a1);
  return 0;
}
