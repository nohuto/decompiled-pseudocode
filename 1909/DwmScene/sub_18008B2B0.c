/*
 * XREFs of sub_18008B2B0 @ 0x18008B2B0
 * Callers:
 *     sub_1800C1C08 @ 0x1800C1C08 (sub_1800C1C08.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_18008B02C @ 0x18008B02C (sub_18008B02C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18008B2B0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // r9
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  volatile signed __int32 *v12; // [rsp+40h] [rbp-28h]

  v10 = 0LL;
  v5 = a3[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a3[1];
  }
  *(_QWORD *)&v10 = *a3;
  *((_QWORD *)&v10 + 1) = v5;
  v6 = *sub_18008B02C(a1, &v11, (__int64 *)&v10);
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001115C(a2, v6);
  v7 = v12;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
