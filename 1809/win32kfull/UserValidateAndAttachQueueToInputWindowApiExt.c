/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00B1F20
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00B1F34 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 */

int __fastcall UserValidateAndAttachQueueToInputWindowApiExt(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  return ValidateAndAttachQueueToInputWindow(a1, a2, a3);
}
