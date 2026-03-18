/*
 * XREFs of MiBadRefCount @ 0x1401BE9E4
 * Callers:
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
}
