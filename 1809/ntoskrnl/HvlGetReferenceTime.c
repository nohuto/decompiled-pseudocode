/*
 * XREFs of HvlGetReferenceTime @ 0x140274060
 * Callers:
 *     HvlGetPpmStatsForProcessor @ 0x14027696C (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x1402740A0 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x140278A08 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
