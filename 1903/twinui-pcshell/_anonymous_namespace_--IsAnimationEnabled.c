/*
 * XREFs of _anonymous_namespace_::IsAnimationEnabled @ 0x18031035C
 * Callers:
 *     _lambda_be51cf16fbf0031c38a94162e4d6f864_::operator() @ 0x18009DAC0 (_lambda_be51cf16fbf0031c38a94162e4d6f864_--operator().c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x18030DCA0 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x180314544 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::IsAnimationEnabled()
{
  char v0; // bl
  __int64 pvParam; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    return HIDWORD(pvParam) != 0;
  return v0;
}
