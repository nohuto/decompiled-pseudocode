/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x140192FE4
 * Callers:
 *     PpmCheckProcessorInit @ 0x140192FC0 (PpmCheckProcessorInit.c)
 *     PpmHeteroHgsBackupProcessorInit @ 0x1402E3E30 (PpmHeteroHgsBackupProcessorInit.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1)
{
  unsigned int v7; // r9d

  if ( PpmHeteroHgsEnabled )
  {
    _RAX = 0LL;
    __asm { cpuid }
    v7 = _RAX;
    _RAX = 6LL;
    __asm { cpuid }
    _RAX = 7LL;
    *(_WORD *)(a1 + 24314) = WORD1(_RDX);
    if ( v7 >= 7 )
    {
      __asm { cpuid }
      if ( (_RDX & 0x8000) != 0 )
      {
        _RAX = 26LL;
        PpmHeteroHgsHeteroCoreTypes = 1;
        if ( v7 >= 0x1A )
        {
          __asm { cpuid }
          *(_BYTE *)(a1 + 24319) = BYTE3(_RAX);
        }
      }
    }
  }
}
