/*
 * XREFs of IopUpdateWriteTransferCount @ 0x14011EDA8
 * Callers:
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IopUpdateWriteTransferCount(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  if ( a2 )
  {
    result = (struct _KTHREAD *)_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1240), a1);
  }
  else
  {
    result = KeGetCurrentThread();
    result->WriteTransferCount += a1;
  }
  __addgsqword(0x2EF0u, a1);
  return result;
}
