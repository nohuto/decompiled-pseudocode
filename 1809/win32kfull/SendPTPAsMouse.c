/*
 * XREFs of SendPTPAsMouse @ 0x1C01C2B90
 * Callers:
 *     <none>
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z @ 0x1C01C2148 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z.c)
 */

__int64 __fastcall SendPTPAsMouse(void *a1, struct tagPOINT a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int v6; // esi
  struct tagPOINT v7; // rbx

  v6 = a3;
  v7 = a2;
  if ( gdwInAtomicOperation )
  {
    a2 = (struct tagPOINT)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(a1, a2, a3, a4);
  QueuePTPMouseEvent(a1, v7, v6, a4, a5);
  return EnterCrit(0LL, 1LL);
}
