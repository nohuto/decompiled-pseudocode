/*
 * XREFs of ExFreePoolSanityChecks @ 0x14098A778
 * Callers:
 *     VerifierExFreePoolWithTag @ 0x140972840 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14013C408 (MmDeterminePoolType.c)
 *     ExIsSpecialPoolAddress @ 0x14033F254 (ExIsSpecialPoolAddress.c)
 *     KevSkipVerification @ 0x14034E120 (KevSkipVerification.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ExFreePoolSanityChecks(ULONG_PTR a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned int *v4; // rsi
  char v5; // al
  ULONG_PTR v6; // rdx

  result = KevSkipVerification();
  if ( !(_DWORD)result )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10uLL, a1, 0LL, 0LL);
    if ( !ExpSpecialAllocations || (result = ExIsSpecialPoolAddress(a1), !(_DWORD)result) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (a1 & 0xFFF) == 0 )
      {
        result = MmDeterminePoolType(a1);
        if ( (result & 1) != 0 )
        {
          if ( CurrentIrql > 1u )
            return VerifierBugCheckIfAppropriate(0xC4u, 0x11uLL, CurrentIrql, (int)result, a1);
        }
        else if ( CurrentIrql > 2u )
        {
          return VerifierBugCheckIfAppropriate(0xC4u, 0x12uLL, CurrentIrql, (int)result, a1);
        }
        return result;
      }
      if ( (a1 & 0xF) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x16uLL, 0x14D5uLL, a1, 0LL);
      v4 = (unsigned int *)(a1 - 16);
      v5 = *(_BYTE *)(a1 - 16 + 3);
      if ( (v5 & 3) == 0 )
      {
        VerifierBugCheckIfAppropriate(0xC4u, 0x13uLL, 0x14DFuLL, a1 - 16, *v4);
        v5 = *((_BYTE *)v4 + 3);
      }
      result = v5 & 3;
      if ( (result & 1) != 0 )
      {
        if ( CurrentIrql <= 1u )
          goto LABEL_22;
        v6 = 17LL;
      }
      else
      {
        if ( CurrentIrql <= 2u )
          goto LABEL_22;
        v6 = 18LL;
      }
      result = VerifierBugCheckIfAppropriate(0xC4u, v6, CurrentIrql, (unsigned int)result, a1);
LABEL_22:
      if ( (*((_BYTE *)v4 + 3) & 2) == 0 )
        return VerifierBugCheckIfAppropriate(0xC4u, 0x14uLL, 0x14FCuLL, a1 - 16, 0LL);
    }
  }
  return result;
}
