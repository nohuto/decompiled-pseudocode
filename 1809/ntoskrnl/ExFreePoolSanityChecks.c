/*
 * XREFs of ExFreePoolSanityChecks @ 0x14094BD7C
 * Callers:
 *     VerifierExFreePoolWithTag @ 0x1409267D0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     MmDeterminePoolType @ 0x1402B938C (MmDeterminePoolType.c)
 *     KevSkipVerification @ 0x14032CA60 (KevSkipVerification.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ExFreePoolSanityChecks(ULONG_PTR a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // dl
  unsigned int *v4; // rdi
  char v5; // al
  unsigned int v6; // ecx
  ULONG_PTR v7; // rdx

  result = KevSkipVerification();
  if ( !(_DWORD)result )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10uLL, a1, 0LL, 0LL);
    if ( !ExpSpecialAllocations || (result = ExIsSpecialPoolAddress(a1), !(_DWORD)result) )
    {
      if ( (a1 & 0xFFF) == 0 )
      {
        result = MmDeterminePoolType(a1);
        CurrentIrql = KeGetCurrentIrql();
        if ( (result & 1) != 0 )
        {
          if ( CurrentIrql > 1u )
            return VerifierBugCheckIfAppropriate(0xC4u, 0x11uLL, KeGetCurrentIrql(), (int)result, a1);
        }
        else if ( CurrentIrql > 2u )
        {
          return VerifierBugCheckIfAppropriate(0xC4u, 0x12uLL, KeGetCurrentIrql(), (int)result, a1);
        }
        return result;
      }
      if ( (a1 & 0xF) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x16uLL, 0x20BCuLL, a1, 0LL);
      v4 = (unsigned int *)(a1 - 16);
      v5 = *(_BYTE *)(a1 - 16 + 3);
      if ( (v5 & 3) == 0 )
      {
        VerifierBugCheckIfAppropriate(0xC4u, 0x13uLL, 0x20C6uLL, a1 - 16, *v4);
        v5 = *((_BYTE *)v4 + 3);
      }
      v6 = v5 & 3;
      result = KeGetCurrentIrql();
      if ( (v6 & 1) != 0 )
      {
        if ( (unsigned __int8)result <= 1u )
          goto LABEL_22;
        v7 = 17LL;
      }
      else
      {
        if ( (unsigned __int8)result <= 2u )
          goto LABEL_22;
        v7 = 18LL;
      }
      result = VerifierBugCheckIfAppropriate(0xC4u, v7, KeGetCurrentIrql(), v6, a1);
LABEL_22:
      if ( (*((_BYTE *)v4 + 3) & 2) == 0 )
        return VerifierBugCheckIfAppropriate(0xC4u, 0x14uLL, 0x20E3uLL, a1 - 16, 0LL);
    }
  }
  return result;
}
