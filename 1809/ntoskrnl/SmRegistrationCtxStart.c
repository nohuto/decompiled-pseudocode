/*
 * XREFs of SmRegistrationCtxStart @ 0x14076112C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E88 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x14075ED30 (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x1408ABC3C (SmcCacheCreatePrepare.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x140761184 (SmCreateEvent.c)
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
