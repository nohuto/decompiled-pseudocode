/*
 * XREFs of ?MakeITable256@@YAHPEAE@Z @ 0x1C027F5C0
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00E521C (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MakeITable256(unsigned __int8 *a1)
{
  int i; // edx
  int j; // r8d
  int k; // r10d
  int v5; // eax

  for ( i = 0; i < 32; ++i )
  {
    for ( j = 0; j < 32; ++j )
    {
      for ( k = 0; k < 32; ++k )
      {
        v5 = k;
        *a1++ = (8 * (i & 0xFC)) | j & 0x1C | (v5 >> 3) & 3;
      }
    }
  }
  return 1LL;
}
