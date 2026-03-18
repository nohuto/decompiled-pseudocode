/*
 * XREFs of rimIDECheckConfidenceSupport @ 0x1C00F2810
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

int __fastcall rimIDECheckConfidenceSupport(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  int result; // eax
  unsigned __int16 v4[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_BUTTON_CAPS v5; // [rsp+50h] [rbp-68h] BYREF

  v4[0] = 1;
  result = rimHidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0x47u, &v5, v4, a2);
  if ( (int)(result + 0x80000000) < 0 || result == -1072627705 )
    *(_DWORD *)(a1 + 276) |= 0x10u;
  else
    *(_DWORD *)(a1 + 276) &= ~0x10u;
  return result;
}
