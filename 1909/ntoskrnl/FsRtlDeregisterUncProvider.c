/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x14084E220
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 */

void __stdcall FsRtlDeregisterUncProvider(HANDLE Handle)
{
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ZwClose(Handle) >= 0 )
  {
    KeWaitForSingleObject(&FsRtlpUncSemaphore, Executive, 0, 0, 0LL);
    --FsRtlpRedirs;
    KeReleaseSemaphore(&FsRtlpUncSemaphore, 0, 1, 0);
  }
}
