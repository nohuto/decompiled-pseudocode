/*
 * XREFs of PfpScenCtxInitialize @ 0x14075305C
 * Callers:
 *     PfInitializeSuperfetch @ 0x1409D4634 (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(_QWORD *a1)
{
  memset(a1, 0, 0x78uLL);
  *a1 = 0LL;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 2) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 2), NotificationEvent, 0);
}
