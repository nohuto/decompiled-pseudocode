/*
 * XREFs of SpiSend16 @ 0x14032DA18
 * Callers:
 *     SpiMax311GetByte @ 0x14032D6C0 (SpiMax311GetByte.c)
 *     SpiMax311PutByte @ 0x14032D7A0 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x14032D830 (SpiMax311RxReady.c)
 *     SpiMax311SetBaud @ 0x14032D890 (SpiMax311SetBaud.c)
 *     SpiMax311TxEmpty @ 0x14032D9E0 (SpiMax311TxEmpty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     SpiInit @ 0x14032D568 (SpiInit.c)
 */

__int64 __fastcall SpiSend16(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx

  v3 = *a1;
  v4 = (unsigned __int16)a2;
  SpiInit(*a1, a2, a3, word_1404E0BC8);
  ((void (__fastcall *)(__int64, __int64))off_140401728)(v3 + 16, 2LL);
  ((void (__fastcall *)(__int64, _QWORD))off_140401728)(v3 + 96, v4);
  while ( (((__int64 (__fastcall *)(__int64))off_140401720)(v3 + 40) & 0xD) != 0xC )
    ;
  return ((__int64 (__fastcall *)(__int64))off_140401720)(v3 + 96);
}
