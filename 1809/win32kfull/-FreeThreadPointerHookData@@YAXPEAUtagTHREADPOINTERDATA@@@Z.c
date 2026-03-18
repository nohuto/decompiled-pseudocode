/*
 * XREFs of ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01DC1B0
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C01029F0 (xxxCleanupThreadPointerInputInfo.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01DC8BC (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeThreadPointerHookData(struct tagTHREADPOINTERDATA *a1)
{
  CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *((_QWORD *)a1 + 3), 5LL, a1);
  Win32FreePool(a1);
}
