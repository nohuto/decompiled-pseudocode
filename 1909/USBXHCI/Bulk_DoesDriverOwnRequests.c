/*
 * XREFs of Bulk_DoesDriverOwnRequests @ 0x1C0033E48
 * Callers:
 *     Bulk_Cleanup @ 0x1C00338C0 (Bulk_Cleanup.c)
 *     Bulk_ProcessTransferCompletion @ 0x1C00353A0 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Bulk_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[46] != a1 + 46 || (_QWORD *)a1[48] != a1 + 48 || (_QWORD *)a1[50] != a1 + 50;
}
