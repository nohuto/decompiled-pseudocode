/*
 * XREFs of ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C0125668
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___ @ 0x1C0124AA8 (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C01265CC (ndisLoadNamedFilterAltitudes.c)
 * Callees:
 *     ?grow@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0125748 (-grow@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<Rtl::_KStringAtom *,1>::append(__int64 a1, _QWORD *a2)
{
  char result; // al

  result = Rtl::KArray<Rtl::_KStringAtom *,1>::grow(a1, (unsigned int)(*(_DWORD *)(a1 + 4) + 1));
  if ( result )
  {
    result = 1;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4))++) = *a2;
  }
  return result;
}
