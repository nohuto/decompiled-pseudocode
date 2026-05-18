/*
 * XREFs of sub_18002582C @ 0x18002582C
 * Callers:
 *     sub_18001EB00 @ 0x18001EB00 (sub_18001EB00.c)
 *     sub_1801285BC @ 0x1801285BC (sub_1801285BC.c)
 *     sub_1801285E0 @ 0x1801285E0 (sub_1801285E0.c)
 *     sub_18013469F @ 0x18013469F (sub_18013469F.c)
 *     sub_1801346E7 @ 0x1801346E7 (sub_1801346E7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002582C(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx

  v2 = a2 + 40;
  v3 = a2;
  v4 = *(_QWORD *)(a2 + 96);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return j_j__o_free(v3);
}
