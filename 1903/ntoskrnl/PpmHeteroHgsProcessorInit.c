/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x14019D2D4
 * Callers:
 *     PpmCheckProcessorInit @ 0x14019D2B0 (PpmCheckProcessorInit.c)
 *     PpmHeteroHgsBackupProcessorInit @ 0x140300A00 (PpmHeteroHgsBackupProcessorInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall PpmHeteroHgsProcessorInit(__int64 a1)
{
  __int64 result; // rax
  unsigned int v7; // r9d

  result = 0LL;
  if ( PpmHeteroHgsEnabled )
  {
    __asm { cpuid }
    v7 = _RAX;
    _RAX = 6LL;
    __asm { cpuid }
    result = 7LL;
    *(_WORD *)(a1 + 24314) = WORD1(_RDX);
    if ( v7 >= 7 )
    {
      __asm { cpuid }
      if ( (_RDX & 0x8000) != 0 )
      {
        result = 26LL;
        PpmHeteroHgsHeteroCoreTypes = 1;
        if ( v7 >= 0x1A )
        {
          __asm { cpuid }
          result = BYTE3(_RAX);
          *(_BYTE *)(a1 + 24319) = result;
        }
      }
    }
  }
  return result;
}
