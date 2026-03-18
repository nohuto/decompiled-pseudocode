/*
 * XREFs of KiInitializeDynamicProcessor @ 0x14057B1F8
 * Callers:
 *     KiStartDynamicProcessor @ 0x140842DE8 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1401203D0 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x140736508 (KiStartDpcThread.c)
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
