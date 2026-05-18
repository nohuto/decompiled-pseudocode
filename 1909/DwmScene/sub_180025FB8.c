/*
 * XREFs of sub_180025FB8 @ 0x180025FB8
 * Callers:
 *     sub_180026024 @ 0x180026024 (sub_180026024.c)
 *     sub_180066860 @ 0x180066860 (sub_180066860.c)
 *     sub_1800EA0D0 @ 0x1800EA0D0 (sub_1800EA0D0.c)
 *     sub_1800ED870 @ 0x1800ED870 (sub_1800ED870.c)
 *     sub_180125090 @ 0x180125090 (sub_180125090.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180025FB8(__int64 a1, __int64 a2)
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
