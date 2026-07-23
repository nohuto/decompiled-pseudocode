/*
 * XREFs of PoFxPowerControl @ 0x140159280
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     PopPluginRequestPowerControl @ 0x1402DAD7C (PopPluginRequestPowerControl.c)
 */

__int64 __fastcall PoFxPowerControl(
        struct _IO_REMOVE_LOCK *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  NTSTATUS v11; // edi
  struct _LIST_ENTRY *Blink; // rcx

  v11 = IoAcquireRemoveLockEx(a1 + 7, 0LL, &File, 1u, 0x20u);
  if ( v11 >= 0 )
  {
    v11 = -1073741637;
    Blink = a1[1].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( a7 )
      *a7 = 0LL;
    if ( BYTE4(Blink[7].Blink) )
      v11 = PopPluginRequestPowerControl(Blink[2].Flink, a2, a3, a4, a5, a6, (__int64)a7);
    if ( _InterlockedExchangeAdd(&a1[7].Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&a1[7].Common.RemoveEvent, 0, 0);
  }
  return (unsigned int)v11;
}
