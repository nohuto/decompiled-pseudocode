/*
 * XREFs of NtGdiGetKerningPairs @ 0x1C0144DF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetKerningPairs @ 0x1C0144EE4 (GreGetKerningPairs.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtGdiGetKerningPairs(HDC a1, unsigned int a2, char *a3)
{
  unsigned int KerningPairs; // ebx
  const void *v7; // rdi
  size_t v9; // r8

  KerningPairs = 0;
  v7 = 0LL;
  if ( a3 && a2 <= 0x4E2000 )
    v7 = (const void *)AllocFreeTmpBuffer(8 * a2);
  if ( !a3 || v7 )
  {
    KerningPairs = GreGetKerningPairs(a1);
    if ( a3 )
    {
      if ( KerningPairs > a2 )
        KerningPairs = 0;
      if ( KerningPairs )
      {
        v9 = 8LL * KerningPairs;
        if ( (unsigned __int64)&a3[v9] > MmUserProbeAddress || &a3[v9] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v7, v9);
      }
      FreeTmpBuffer(v7);
    }
  }
  return KerningPairs;
}
