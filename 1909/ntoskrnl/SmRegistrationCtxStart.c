/*
 * XREFs of SmRegistrationCtxStart @ 0x14078A208
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x140788DEC (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x1408E8604 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x14078A260 (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(_QWORD *a1)
{
  int v2; // ebx
  void *v3; // rcx
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = SmCreateEvent(a1, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v2;
}
