/*
 * XREFs of sub_18008AAB0 @ 0x18008AAB0
 * Callers:
 *     sub_18000FB0C @ 0x18000FB0C (sub_18000FB0C.c)
 *     sub_1800BB018 @ 0x1800BB018 (sub_1800BB018.c)
 *     sub_1800E9DA4 @ 0x1800E9DA4 (sub_1800E9DA4.c)
 * Callees:
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_1800882B0 @ 0x1800882B0 (sub_1800882B0.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18008AAB0(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // rdx
  volatile signed __int32 *v8; // rsi
  _QWORD *v9; // rcx
  _BYTE v11[8]; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v12; // [rsp+30h] [rbp-18h]

  LOBYTE(i) = sub_180063430(a1 + 16);
  v5 = *(_QWORD **)(a1 + 88);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (__int64 *)sub_18008B420(v6[8], v11);
    sub_1800882B0(a2, v7);
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
