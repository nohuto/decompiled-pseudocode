/*
 * XREFs of QueueNotifyMessage @ 0x1C01D1650
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00634B4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall QueueNotifyMessage(struct tagWND *a1, unsigned int a2, HWND a3, unsigned __int64 a4, int a5)
{
  QueueNotifyTransformableMessage(a1, a2, a3, a4, a5, 0);
}
