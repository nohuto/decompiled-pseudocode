/*
 * XREFs of PnpUpdateExtensionFlags @ 0x14015A99C
 * Callers:
 *     PnpIsChainDereferenced @ 0x14015A878 (PnpIsChainDereferenced.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpUpdateExtensionFlags(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 i; // rdx
  __int64 v5; // rax
  int v6; // ecx
  unsigned int v7; // ecx

  for ( i = *a1; i; i = *(_QWORD *)(i + 24) )
  {
    v5 = *(_QWORD *)(i + 312);
    v6 = *(_DWORD *)(v5 + 32);
    if ( a4 )
      v7 = v6 | 4;
    else
      v7 = v6 & 0xFFFFFFFB;
    *(_DWORD *)(v5 + 32) = v7;
  }
}
