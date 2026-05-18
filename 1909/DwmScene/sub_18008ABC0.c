/*
 * XREFs of sub_18008ABC0 @ 0x18008ABC0
 * Callers:
 *     sub_18000FB5C @ 0x18000FB5C (sub_18000FB5C.c)
 *     sub_1800BB128 @ 0x1800BB128 (sub_1800BB128.c)
 *     sub_1800E9EB4 @ 0x1800E9EB4 (sub_1800E9EB4.c)
 * Callees:
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 *     sub_1800883C0 @ 0x1800883C0 (sub_1800883C0.c)
 *     sub_18008B530 @ 0x18008B530 (sub_18008B530.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18008ABC0(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // rdx
  volatile signed __int32 *v8; // rsi
  _QWORD *v9; // rcx
  _BYTE v11[8]; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v12; // [rsp+30h] [rbp-18h]

  LOBYTE(i) = sub_180063540(a1 + 16);
  v5 = *(_QWORD **)(a1 + 88);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (__int64 *)sub_18008B530(v6[8], v11);
    sub_1800883C0(a2, v7);
    v8 = v12;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    i = v6[2];
    if ( *(_BYTE *)(i + 25) )
    {
      for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = (_QWORD *)i;
      v6 = (_QWORD *)i;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
      v9 = *(_QWORD **)i;
      if ( !*(_BYTE *)(*(_QWORD *)i + 25LL) )
      {
        do
        {
          v6 = v9;
          i = *v9;
          v9 = (_QWORD *)i;
        }
        while ( !*(_BYTE *)(i + 25) );
      }
    }
  }
  return i;
}
