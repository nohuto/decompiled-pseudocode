/*
 * XREFs of CcDereferenceVacbArray @ 0x14027E0AC
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x14027E354 (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x140823474 (CcFreeVacbArray.c)
 */

void __fastcall CcDereferenceVacbArray(__int64 a1, char a2)
{
  KIRQL v4; // bl
  int v5; // eax
  int v6; // eax
  KIRQL v7; // [rsp+48h] [rbp+10h]

  if ( a2 )
    v4 = v7;
  else
    v4 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x16EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = v5 - 1;
  *(_DWORD *)(a1 + 4) = v6;
  if ( !a2 )
  {
    if ( v6 )
    {
      KeReleaseQueuedSpinLock(4uLL, v4);
    }
    else
    {
      CcRemoveVacbArray(a1);
      KeReleaseQueuedSpinLock(4uLL, v4);
      CcFreeVacbArray(a1);
    }
  }
}
