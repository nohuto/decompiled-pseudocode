/*
 * XREFs of RtlpRunOnceWaitForInit @ 0x180086DFC
 * Callers:
 *     RtlRunOnceBeginInitialize @ 0x18000EA90 (RtlRunOnceBeginInitialize.c)
 *     RtlpSubSegmentInitialize @ 0x18000ED20 (RtlpSubSegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     NtWaitForKeyedEvent @ 0x1800A3C50 (NtWaitForKeyedEvent.c)
 */

signed __int64 __fastcall RtlpRunOnceWaitForInit(signed __int64 a1, volatile signed __int64 *a2)
{
  bool v3; // zf
  signed __int64 v4; // rax
  unsigned __int64 KeyValue; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    KeyValue = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v4 = _InterlockedCompareExchange64(a2, (signed __int64)&KeyValue + 1, a1);
    v3 = a1 == v4;
    a1 = v4;
    if ( v3 )
    {
      NtWaitForKeyedEvent(0LL, &KeyValue, 0, 0LL);
      a1 = *a2;
    }
  }
  while ( (a1 & 3) == 1 );
  return a1;
}
