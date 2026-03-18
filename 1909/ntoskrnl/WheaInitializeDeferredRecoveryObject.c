/*
 * XREFs of WheaInitializeDeferredRecoveryObject @ 0x14019AB90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall WheaInitializeDeferredRecoveryObject(__int64 a1, __int64 a2, char a3)
{
  void *result; // rax

  result = memset((void *)a1, 0, 0x28uLL);
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 24) = a3;
  return result;
}
