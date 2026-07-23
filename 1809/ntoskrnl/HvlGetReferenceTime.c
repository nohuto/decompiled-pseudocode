/*
 * XREFs of HvlGetReferenceTime @ 0x140274350
 * Callers:
 *     HvlGetPpmStatsForProcessor @ 0x140276C5C (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x140274390 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x140278CF8 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
