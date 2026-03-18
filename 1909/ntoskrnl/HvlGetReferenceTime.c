/*
 * XREFs of HvlGetReferenceTime @ 0x140287E80
 * Callers:
 *     HvlGetPpmStatsForProcessor @ 0x14028AA18 (HvlGetPpmStatsForProcessor.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x140287EC0 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x14028CB3C (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage();
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
