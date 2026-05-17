/*
 * XREFs of TpWaitForWork @ 0x18007D810
 * Callers:
 *     LdrpDetectDetour @ 0x1800635CC (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x180031C98 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x1800364D8 (TppWorkpValidateWork.c)
 */

struct _PEB *__fastcall TpWaitForWork(_PEB_LDR_DATA *a1, int a2)
{
  struct _PEB *result; // rax

  result = (struct _PEB *)TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
