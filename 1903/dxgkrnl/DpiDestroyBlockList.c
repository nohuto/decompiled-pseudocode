/*
 * XREFs of DpiDestroyBlockList @ 0x1C029DAD4
 * Callers:
 *     DpiInitializeBlockList @ 0x1C0161340 (DpiInitializeBlockList.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DpiDestroyBlockList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 5728);
  if ( v2 )
  {
    operator delete[](v2);
    *(_QWORD *)(a1 + 5728) = 0LL;
  }
  v3 = *(void **)(a1 + 5744);
  if ( v3 )
  {
    operator delete[](v3);
    *(_QWORD *)(a1 + 5744) = 0LL;
  }
}
