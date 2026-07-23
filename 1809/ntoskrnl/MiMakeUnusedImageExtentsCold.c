/*
 * XREFs of MiMakeUnusedImageExtentsCold @ 0x1402C3F8C
 * Callers:
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiAddPageToHeatRanges @ 0x1402CECC0 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiMakeUnusedImageExtentsCold(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // rbx
  int v3; // [rsp+20h] [rbp-A8h] BYREF
  int v4; // [rsp+24h] [rbp-A4h]
  int v5; // [rsp+28h] [rbp-A0h]

  result = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v4 = 0;
  v5 = 16;
  v2 = *(_QWORD **)(*(_QWORD *)(result + 32) + 96LL);
  if ( v2 )
  {
    do
    {
      if ( (unsigned int)MiAddPageToHeatRanges(&v3, (__int64)(v2 + 0xB000000000LL) / 48) )
        MiNotifyPageHeat(&v3);
      result = MiGetLeafPfnBuddy(v2);
      v2 = (_QWORD *)result;
    }
    while ( result );
    if ( v4 )
      return MiNotifyPageHeat(&v3);
  }
  return result;
}
