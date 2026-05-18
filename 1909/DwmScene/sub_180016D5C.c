/*
 * XREFs of sub_180016D5C @ 0x180016D5C
 * Callers:
 *     sub_180017030 @ 0x180017030 (sub_180017030.c)
 *     sub_18001FB2C @ 0x18001FB2C (sub_18001FB2C.c)
 *     sub_18001FBAC @ 0x18001FBAC (sub_18001FBAC.c)
 *     sub_18001FC2C @ 0x18001FC2C (sub_18001FC2C.c)
 *     sub_18001FCAC @ 0x18001FCAC (sub_18001FCAC.c)
 *     sub_18001FD2C @ 0x18001FD2C (sub_18001FD2C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180016D5C(__int64 a1, __int64 a2)
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
