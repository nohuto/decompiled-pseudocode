/*
 * XREFs of MiPageHasRelocations @ 0x1405A9B14
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiRevertRelocatedImagePfn @ 0x1405A9A60 (MiRevertRelocatedImagePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageHasRelocations(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r8
  int v3; // ecx
  __int64 v4; // rax

  v2 = *(_QWORD **)(a1 + 32);
  if ( (unsigned __int64)a2 >= v2[7] )
    return 0LL;
  v3 = 0;
  while ( !*(_QWORD *)(*v2 + 8LL * (v3 + a2)) )
  {
    v4 = v2[11];
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 8LL * (v3 + a2) + 56) )
        break;
    }
    if ( ++v3 )
      return 0LL;
  }
  return 1LL;
}
