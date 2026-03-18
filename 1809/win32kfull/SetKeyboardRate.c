/*
 * XREFs of SetKeyboardRate @ 0x1C00EBF50
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxInitWindowStation @ 0x1C00EBBA8 (xxxInitWindowStation.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetKeyboardRate()
{
  unsigned int v0; // r10d
  __int64 result; // rax

  v0 = ((unsigned int)gnKeyboardSpeed >> 5) & 3;
  gktp[1] = gKeyboardInfo[9] + (gnKeyboardSpeed & 0x1F) * (gKeyboardInfo[12] - (unsigned int)gKeyboardInfo[9]) / 0x1F;
  result = gdwUpdateKeyboard;
  gktp[2] = gKeyboardInfo[10] + v0 * (gKeyboardInfo[13] - gKeyboardInfo[10]) / 3;
  gdwUpdateKeyboard |= 1u;
  return result;
}
