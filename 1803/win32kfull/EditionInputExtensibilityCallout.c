/*
 * XREFs of EditionInputExtensibilityCallout @ 0x1C0112EE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientCallDevCallbackCapture @ 0x1C0006FC8 (xxxClientCallDevCallbackCapture.c)
 *     xxxClientCallDevCallbackSimple @ 0x1C0138160 (xxxClientCallDevCallbackSimple.c)
 */

__int64 __fastcall EditionInputExtensibilityCallout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 4);
  if ( (int)result >= 0 )
  {
    if ( (int)result > 4 )
    {
      if ( (_DWORD)result == 5 )
        return xxxClientCallDevCallbackCapture(a1, a2);
    }
    else
    {
      return xxxClientCallDevCallbackSimple();
    }
  }
  return result;
}
