/*
 * XREFs of ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C00FF014
 * Callers:
 *     InkProcessorIsInkDevice @ 0x1C00FEF70 (InkProcessorIsInkDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall InkProcessor::IsEnabled(InkProcessor *this)
{
  char v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_BYTE *)this + 8);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
