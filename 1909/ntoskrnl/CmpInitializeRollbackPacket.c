/*
 * XREFs of CmpInitializeRollbackPacket @ 0x1406B9FDC
 * Callers:
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitializeRollbackPacket(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
