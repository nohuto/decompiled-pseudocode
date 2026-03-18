/*
 * XREFs of PfpScenCtxInitialize @ 0x14077BDBC
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A19260 (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
