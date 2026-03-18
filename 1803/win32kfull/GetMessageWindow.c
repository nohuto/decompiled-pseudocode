/*
 * XREFs of GetMessageWindow @ 0x1C00F1F74
 * Callers:
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1C0139F80 (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMessageWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 104);
  return result;
}
