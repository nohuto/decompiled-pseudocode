/*
 * XREFs of SepDereferenceSidValuesBlock @ 0x1408A20F4
 * Callers:
 *     SepDeleteLogonSessionSidValues @ 0x1408A203C (SepDeleteLogonSessionSidValues.c)
 *     SepDeleteTokenUserAndGroups @ 0x1408A206C (SepDeleteTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1408A224C (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepLogTokenSidManagement @ 0x14089C174 (SepLogTokenSidManagement.c)
 */

void __fastcall SepDereferenceSidValuesBlock(volatile signed __int64 *P, __int64 a2)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 v5; // rax

  if ( P )
  {
    v3 = _InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = v3 <= 1;
    v5 = v3 - 1;
    if ( v4 )
    {
      if ( v5 )
        __fastfail(0xEu);
      SepLogTokenSidManagement(5, (__int64)P, 0LL, a2);
      ExFreePoolWithTag((PVOID)P, 0);
    }
  }
}
