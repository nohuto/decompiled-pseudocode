/*
 * XREFs of HvlGetReferenceTime @ 0x140288120
 * Callers:
 *     HvlGetPpmStatsForProcessor @ 0x14028ACB8 (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x140288160 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x14028CDDC (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
