/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01B9B78
 * Callers:
 *     xxxPointerCallHook @ 0x1C01B89EC (xxxPointerCallHook.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveThreadPointerHookData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 3);
  if ( v1 )
  {
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v1 + 24), 5LL, *((_QWORD *)a1 + 3));
    Win32FreePool(v1);
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
