/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x14093B820
 * Callers:
 *     <none>
 * Callees:
 *     ViKeObjectAcquired @ 0x14093BFD0 (ViKeObjectAcquired.c)
 *     ViKeWaitForSingleObjectCommon @ 0x14093C318 (ViKeWaitForSingleObjectCommon.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  v5 = a5;
  v6 = ViKeWaitForSingleObjectCommon(a1, a2, a3, a4, a5);
  if ( ((MmVerifierData & 0x400000) == 0 || ViDeadlockDetectionEnabled) && (v6 & 0xFFFFFF7F) == 0 )
    ViKeObjectAcquired(1LL, &v9, v5, retaddr);
  return v6;
}
