/*
 * XREFs of SepDereferenceSidValuesBlock @ 0x1408E02F0
 * Callers:
 *     SepDeleteLogonSessionSidValues @ 0x1408E0238 (SepDeleteLogonSessionSidValues.c)
 *     SepDeleteTokenUserAndGroups @ 0x1408E0268 (SepDeleteTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1408E0448 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepLogTokenSidManagement @ 0x1408DA4B4 (SepLogTokenSidManagement.c)
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
