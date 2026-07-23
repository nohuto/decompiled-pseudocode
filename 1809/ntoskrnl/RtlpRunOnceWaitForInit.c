/*
 * XREFs of RtlpRunOnceWaitForInit @ 0x14089ABF4
 * Callers:
 *     RtlRunOnceBeginInitialize @ 0x14060E9F0 (RtlRunOnceBeginInitialize.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 */

signed __int64 __fastcall RtlpRunOnceWaitForInit(signed __int64 a1, volatile signed __int64 *a2)
{
  bool v4; // zf
  signed __int64 v5; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  do
  {
    v7 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = _InterlockedCompareExchange64(a2, (signed __int64)&v7 + 1, a1);
    v4 = a1 == v5;
    a1 = v5;
    if ( v4 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      a1 = *a2;
    }
  }
  while ( (a1 & 3) == 1 );
  return a1;
}
