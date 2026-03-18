/*
 * XREFs of EditionInputExtensibilityCallout @ 0x1C01F1AB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientCallDevCallbackSimple @ 0x1C021DB1C (xxxClientCallDevCallbackSimple.c)
 */

__int64 __fastcall EditionInputExtensibilityCallout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a2 + 4) - 1);
  if ( (unsigned int)result <= 2 )
    return xxxClientCallDevCallbackSimple();
  return result;
}
