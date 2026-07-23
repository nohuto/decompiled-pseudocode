/*
 * XREFs of KiInitializeDynamicProcessor @ 0x14057C1F8
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x1407376D8 (KiStartDpcThread.c)
 */

char __fastcall KiInitializeDynamicProcessor(struct _SINGLE_LIST_ENTRY *a1)
{
  int started; // eax
  struct _SINGLE_LIST_ENTRY v4; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  v4.Next = a1;
  v5 = 0;
  LOBYTE(started) = KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)KiInitializeDynamicProcessorDpc, &v4);
  if ( KeThreadDpcEnable )
  {
    started = KiStartDpcThread(a1);
    if ( started < 0 )
      KeBugCheckEx(0x33u, started, 0LL, 0LL, 0LL);
  }
  return started;
}
