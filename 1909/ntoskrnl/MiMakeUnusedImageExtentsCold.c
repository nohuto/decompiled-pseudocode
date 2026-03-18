/*
 * XREFs of MiMakeUnusedImageExtentsCold @ 0x1402DDDA4
 * Callers:
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14013D5BC (MiGetLeafPfnBuddy.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiAddPageToHeatRanges @ 0x1402EB898 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1402EBD14 (MiNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiMakeUnusedImageExtentsCold(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx
  int v4; // [rsp+20h] [rbp-A8h] BYREF
  int v5; // [rsp+24h] [rbp-A4h]
  int v6; // [rsp+28h] [rbp-A0h]
  _BYTE v7[132]; // [rsp+2Ch] [rbp-9Ch] BYREF

  memset(v7, 0, sizeof(v7));
  result = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v5 = 0;
  v6 = 16;
  v3 = *(_QWORD **)(*(_QWORD *)(result + 32) + 104LL);
  if ( v3 )
  {
    do
    {
      if ( (unsigned int)MiAddPageToHeatRanges(&v4, (__int64)(v3 + 0xB000000000LL) / 48) )
        MiNotifyPageHeat(&v4);
      result = MiGetLeafPfnBuddy(v3);
      v3 = (_QWORD *)result;
    }
    while ( result );
    if ( v5 )
      return MiNotifyPageHeat(&v4);
  }
  return result;
}
