/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C013C370
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  char v3; // cl

  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators");
    v3 = *(_BYTE *)(v2 + 272);
    if ( (gklpBootTime[1] & 2) != 0 )
    {
      *(_BYTE *)(v2 + 272) = v3 | 2;
      BYTE4(gafAsyncKeyState[2]) |= 2u;
      gafRawKeyState[36] |= 2u;
    }
    else
    {
      *(_BYTE *)(v2 + 272) = v3 & 0xFD;
      BYTE4(gafAsyncKeyState[2]) &= ~2u;
      gafRawKeyState[36] &= ~2u;
    }
    gfKanaToggle = 0;
    *(_BYTE *)(v2 + 241) &= ~8u;
    BYTE5(gafAsyncKeyState[0]) &= ~8u;
    gafRawKeyState[5] &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
