/*
 * XREFs of sub_180025EA8 @ 0x180025EA8
 * Callers:
 *     sub_180025F14 @ 0x180025F14 (sub_180025F14.c)
 *     sub_180066750 @ 0x180066750 (sub_180066750.c)
 *     sub_1800E9FC0 @ 0x1800E9FC0 (sub_1800E9FC0.c)
 *     sub_1800ED760 @ 0x1800ED760 (sub_1800ED760.c)
 *     sub_180124F80 @ 0x180124F80 (sub_180124F80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180025EA8(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        LOBYTE(v5) = v6 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
