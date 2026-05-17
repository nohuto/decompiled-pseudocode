/*
 * XREFs of TpWaitForWork @ 0x18002C690
 * Callers:
 *     LdrpDetectDetour @ 0x180028E48 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18002D368 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18002D3EC (TppWorkpValidateWork.c)
 */

__int64 __fastcall TpWaitForWork(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = TppWorkpValidateWork(a1, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
