/*
 * XREFs of PnpCollectOpenHandles @ 0x1408340F0
 * Callers:
 *     PipRecordOpenHandleVeto @ 0x140841928 (PipRecordOpenHandleVeto.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1408419B0 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140288458 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopDebugPrint @ 0x140288B2C (IopDebugPrint.c)
 */

char __fastcall PnpCollectOpenHandles(PVOID **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  char result; // al

  v4 = (unsigned int)a2;
  if ( *(_BYTE *)(a3 + 36) )
    IopDebugPrint(0x14u, "Beginning handle dump:\n");
  *(_DWORD *)(a3 + 32) = 0;
  *(_QWORD *)(a3 + 24) = a3 + 16;
  *(_QWORD *)(a3 + 16) = a3 + 16;
  result = *(_BYTE *)(a3 + 36);
  if ( result || *(_BYTE *)(a3 + 37) )
  {
    if ( (_DWORD)v4 )
    {
      do
      {
        *(_QWORD *)a3 = *a1;
        PnpHandleEnumerateHandlesAgainstPdoStack(*a1++, a2, a3);
        --v4;
      }
      while ( v4 );
      result = *(_BYTE *)(a3 + 36);
    }
    if ( result )
      return IopDebugPrint(0x14u, "Dump complete - %d total handles found.\n", *(_DWORD *)(a3 + 32));
  }
  return result;
}
