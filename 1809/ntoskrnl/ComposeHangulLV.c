/*
 * XREFs of ComposeHangulLV @ 0x1402F4DF4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x140899E9C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComposeHangulLV(int a1, int a2)
{
  if ( (unsigned int)(a1 - 4352) > 0x12 || (unsigned int)(a2 - 4449) > 0x14 )
    return 0LL;
  else
    return (unsigned int)(28 * (a2 + 21 * a1) - 2639516);
}
