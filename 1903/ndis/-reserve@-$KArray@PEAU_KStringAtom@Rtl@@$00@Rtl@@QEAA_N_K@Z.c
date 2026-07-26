/*
 * XREFs of ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0126CBC
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___ @ 0x1C0124AA8 (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b.c)
 *     ?grow@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0125748 (-grow@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0125D24 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 */

char __fastcall Rtl::KArray<Rtl::_KStringAtom *,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  void *v7; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * a1[1]);
      v7 = (void *)*((_QWORD *)a1 + 1);
      if ( v7 )
        ExFreePoolWithTag(v7, 0x7272414Bu);
      *a1 = v2;
      *((_QWORD *)a1 + 1) = v6;
      return 1;
    }
  }
  return 0;
}
