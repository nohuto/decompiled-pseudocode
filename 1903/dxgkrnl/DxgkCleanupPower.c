/*
 * XREFs of DxgkCleanupPower @ 0x1C029E108
 * Callers:
 *     DxgkUnload @ 0x1C023A4B0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C00A2757 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C00A2B68 )
    {
      PoUnregisterPowerSettingCallback(qword_1C00A2B68);
      qword_1C00A2B68 = 0LL;
    }
    if ( qword_1C00A2BF8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C00A2BF8, qword_1C00A2BF8 | 3, qword_1C00A2BF8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C00A2BF8 = 0LL;
      }
    }
  }
}
