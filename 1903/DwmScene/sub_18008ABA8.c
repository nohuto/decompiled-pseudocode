/*
 * XREFs of sub_18008ABA8 @ 0x18008ABA8
 * Callers:
 *     sub_180015FC4 @ 0x180015FC4 (sub_180015FC4.c)
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180088238 @ 0x180088238 (sub_180088238.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18008ABA8(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 *v6; // rdx
  char v7; // bp
  volatile signed __int32 *v8; // rsi
  __int64 **v9; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  _BYTE v12[8]; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-18h]

  sub_1800634AC(a1 + 16, a2);
  v4 = *(_QWORD **)(a1 + 88);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v6 = (__int64 *)sub_18008B420(v5[8], v12);
    v7 = sub_180088238(a2, v6);
    v8 = v13;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    if ( !v7 )
      break;
    v9 = (__int64 **)v5[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v5 = (_QWORD *)i;
      v5 = (_QWORD *)i;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
}
