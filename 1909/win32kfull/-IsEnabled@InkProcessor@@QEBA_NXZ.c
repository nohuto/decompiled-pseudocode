/*
 * XREFs of ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C00E3180
 * Callers:
 *     InkProcessorIsInkDevice @ 0x1C00E30F0 (InkProcessorIsInkDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall InkProcessor::IsEnabled(InkProcessor *this)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_BYTE *)this + 8);
  ExReleasePushLockSharedEx(this, 0LL, v3, v4);
  KeLeaveCriticalRegion();
  return v2;
}
