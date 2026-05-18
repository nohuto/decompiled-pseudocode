/*
 * XREFs of sub_1800D4330 @ 0x1800D4330
 * Callers:
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 * Callees:
 *     sub_1800D43B0 @ 0x1800D43B0 (sub_1800D43B0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800D4330(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_1800D43B0(v7);
  v3 = *v2;
  *v2 = 0LL;
  *a1 = v3;
  v4 = v2[1];
  v2[1] = 0LL;
  v5 = v8;
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
