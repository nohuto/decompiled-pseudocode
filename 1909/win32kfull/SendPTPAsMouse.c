/*
 * XREFs of SendPTPAsMouse @ 0x1C0202FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z @ 0x1C0202718 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K2@Z.c)
 */

void __fastcall SendPTPAsMouse(void *a1, struct tagPOINT a2, int a3, __int64 a4, unsigned __int64 a5)
{
  QueuePTPMouseEvent(a1, a2, a3, a4, a5);
}
