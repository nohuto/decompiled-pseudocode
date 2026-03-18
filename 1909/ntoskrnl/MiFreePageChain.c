/*
 * XREFs of MiFreePageChain @ 0x140164414
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreePageChain(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
      result = MiReleaseFreshPage(a1);
      if ( v1 == 0xFFFFFFFFFLL )
        break;
      result = 0xFFFFFA8000000000uLL;
      a1 = 48 * v1 - 0x58000000000LL;
    }
    while ( 48 * v1 != 0x58000000000LL );
  }
  return result;
}
