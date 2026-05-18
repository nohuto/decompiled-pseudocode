/*
 * XREFs of sub_1801119E0 @ 0x1801119E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F9440 @ 0x1800F9440 (sub_1800F9440.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1801119E0(__int64 a1, __int64 a2, float a3, float a4, float a5, int a6)
{
  _UNKNOWN **v6; // rax
  __int64 v7; // rdi
  __int64 i; // rsi
  volatile signed __int32 *v9; // rbx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  v6 = &retaddr;
  v7 = *(_QWORD *)(a1 + 128);
  for ( i = *(_QWORD *)(a1 + 136); v7 != i; v7 += 16LL )
  {
    v9 = *(volatile signed __int32 **)(v7 + 8);
    if ( v9 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *(volatile signed __int32 **)(v7 + 8);
    }
    LOBYTE(v6) = sub_1800F9440(*(_QWORD **)v7, a3, a4, a5, 1, a6);
    if ( v9 )
    {
      LODWORD(v6) = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
      if ( (_DWORD)v6 == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        LODWORD(v6) = _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
        if ( (_DWORD)v6 == 1 )
          LOBYTE(v6) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  return (char)v6;
}
