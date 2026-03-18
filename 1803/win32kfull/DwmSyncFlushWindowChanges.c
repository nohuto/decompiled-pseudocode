/*
 * XREFs of DwmSyncFlushWindowChanges @ 0x1C005A7AC
 * Callers:
 *     xxxSendInput @ 0x1C005D570 (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C006BAF0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 */

__int64 __fastcall DwmSyncFlushWindowChanges(void *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = g_cDWMWindowUniqueness;
  v2 = -1073741823;
  if ( a1 )
  {
    v2 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( gbInVideoPnpCallout || qword_1C031D818 == g_cDWMWindowUniqueness )
    {
      ObfDereferenceObject(a1);
    }
    else
    {
      v2 = DwmSyncFlushForceRenderAndWaitForBatch(a1);
      qword_1C031D818 = v1;
    }
  }
  return v2;
}
