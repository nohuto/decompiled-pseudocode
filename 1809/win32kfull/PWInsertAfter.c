/*
 * XREFs of PWInsertAfter @ 0x1C000FC68
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C000F6D0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C000FAD4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall PWInsertAfter(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL )
    return a1;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( !result || *(char *)(*(_QWORD *)(result + 40) + 19LL) < 0 || !*(_QWORD *)(result + 80) )
    return 0LL;
  return result;
}
