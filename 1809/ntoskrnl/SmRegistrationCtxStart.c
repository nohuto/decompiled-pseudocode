/*
 * XREFs of SmRegistrationCtxStart @ 0x14076114C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E68 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x14075ED50 (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x1408ABC5C (SmcCacheCreatePrepare.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x1407611A4 (SmCreateEvent.c)
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
