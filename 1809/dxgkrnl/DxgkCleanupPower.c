/*
 * XREFs of DxgkCleanupPower @ 0x1C026E6F8
 * Callers:
 *     DxgkUnload @ 0x1C0208940 (DxgkUnload.c)
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C008E757 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C008EB68 )
    {
      PoUnregisterPowerSettingCallback(qword_1C008EB68);
      qword_1C008EB68 = 0LL;
    }
    if ( qword_1C008EBF8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C008EBF8, qword_1C008EBF8 | 3, qword_1C008EBF8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C008EBF8 = 0LL;
      }
    }
  }
}
