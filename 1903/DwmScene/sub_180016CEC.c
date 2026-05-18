/*
 * XREFs of sub_180016CEC @ 0x180016CEC
 * Callers:
 *     sub_180016FC0 @ 0x180016FC0 (sub_180016FC0.c)
 *     sub_18001FA1C @ 0x18001FA1C (sub_18001FA1C.c)
 *     sub_18001FA9C @ 0x18001FA9C (sub_18001FA9C.c)
 *     sub_18001FB1C @ 0x18001FB1C (sub_18001FB1C.c)
 *     sub_18001FB9C @ 0x18001FB9C (sub_18001FB9C.c)
 *     sub_18001FC1C @ 0x18001FC1C (sub_18001FC1C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180016CEC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 72);
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      *(_QWORD *)(a2 + 64) = a2;
      v5 = *(volatile signed __int32 **)(a2 + 72);
      *(_QWORD *)(a2 + 72) = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}
