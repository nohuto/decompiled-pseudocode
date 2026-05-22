/*
 * XREFs of ?_Change_array@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULegacyInputInfo@@_K1@Z @ 0x18005849C
 * Callers:
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800580D4 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::vector<LegacyInputInfo>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r8
  char *v11; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
  {
    v9 = 1600 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 1600LL);
    if ( v9 >= 0x1000 )
    {
      v10 = (char *)*((_QWORD *)v6 - 1);
      v9 += 39LL;
      v11 = (char *)(v6 - v10);
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v11, v9);
        JUMPOUT(0x180058550LL);
      }
      v6 = v10;
    }
    operator delete(v6, (const struct std::nothrow_t *)v9);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 1600 * a3;
  result = a2 + 1600 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
