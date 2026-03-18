/*
 * XREFs of PopFxRequestWorker @ 0x1400E3A10
 * Callers:
 *     PopPepRequestWork @ 0x1400E217C (PopPepRequestWork.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140080660 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 */

signed __int32 __fastcall PopFxRequestWorker(__int64 a1)
{
  struct _KSEMAPHORE *v1; // rbx
  signed __int32 result; // eax
  __int64 v4; // rdx
  int v5; // edi

  v1 = (struct _KSEMAPHORE *)&PopFxSystemWorkPool;
  if ( a1 )
    v1 = (struct _KSEMAPHORE *)(a1 + 120);
  result = KeReleaseSemaphore(v1 + 2, 0, 1, 0);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v4 = 0LL;
    while ( 1 )
    {
      v5 = 1 << v4;
      _m_prefetchw(&v1[3]);
      result = _InterlockedOr(&v1[3].Header.Lock, 1 << v4);
      if ( (result & (1 << v4)) == 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 4 )
        return result;
    }
    result = ExTryQueueWorkItem((__int64)(&v1[v4 + 3].Header.WaitListHead.Blink + (unsigned int)v4), 0x30u);
    if ( !(_BYTE)result )
      _InterlockedAnd(&v1[3].Header.Lock, ~v5);
  }
  return result;
}
