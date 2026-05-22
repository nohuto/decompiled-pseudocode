/*
 * XREFs of ?deallocate@?$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z @ 0x18005808C
 * Callers:
 *     _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo_const_&___ptr64__::_1_::catch$0 @ 0x180130B43 (_std--vector_LegacyInputInfo_std--allocator_LegacyInputInfo___--_Emplace_reallocate_LegacyInputI.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<LegacyInputInfo>::deallocate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 1600 * a3;
  if ( (unsigned __int64)(1600 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x1800580CDLL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
