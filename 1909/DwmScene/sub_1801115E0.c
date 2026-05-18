/*
 * XREFs of sub_1801115E0 @ 0x1801115E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095E9C @ 0x180095E9C (sub_180095E9C.c)
 *     sub_180099B50 @ 0x180099B50 (sub_180099B50.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1801115E0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  signed __int32 v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v7; // [rsp+30h] [rbp-18h]

  v2 = sub_180099B50(a2, &v6);
  LOBYTE(v3) = sub_180095E9C(*v2, 0);
  v4 = v7;
  if ( v7 )
  {
    v3 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( v3 == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      v3 = _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( v3 == 1 )
        LOBYTE(v3) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return v3;
}
