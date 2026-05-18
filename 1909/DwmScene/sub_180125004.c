/*
 * XREFs of sub_180125004 @ 0x180125004
 * Callers:
 *     sub_180123EB8 @ 0x180123EB8 (sub_180123EB8.c)
 * Callees:
 *     sub_180124968 @ 0x180124968 (sub_180124968.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180125004(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_180124968(v7);
  v3 = *v2;
  *v2 = 0LL;
  *a1 = v3;
  v4 = v2[1];
  v2[1] = 0LL;
  v5 = (volatile signed __int32 *)v7[1];
  a1[1] = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
