/*
 * XREFs of RegisterPerUserKeyboardIndicators @ 0x1C0117DFC
 * Callers:
 *     PrepareForLogoff @ 0x1C0117D40 (PrepareForLogoff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPerUserKeyboardIndicators(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 48;
  LOWORD(v2) = gafAsyncKeyState[36] & 2 | 0x30;
  return FastWriteProfileStringW(a1, 13LL, L"InitialKeyboardIndicators", &v2);
}
