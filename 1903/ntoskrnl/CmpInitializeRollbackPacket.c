/*
 * XREFs of CmpInitializeRollbackPacket @ 0x140662834
 * Callers:
 *     CmpTryToRundownHive @ 0x1400993CC (CmpTryToRundownHive.c)
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
