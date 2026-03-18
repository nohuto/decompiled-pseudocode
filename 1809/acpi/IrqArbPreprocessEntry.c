/*
 * XREFs of IrqArbPreprocessEntry @ 0x1C009EF40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall IrqArbPreprocessEntry(__int64 a1, __int64 a2)
{
  char v3; // dl
  char v4; // al
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi

  v3 = *(_BYTE *)(a2 + 66) & 0xCF;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL) & 1) != 0 )
    v4 = v3 | 0x20;
  else
    v4 = v3 | 0x10;
  *(_BYTE *)(a2 + 66) = v4;
  if ( (*(_BYTE *)(a2 + 64) & 0x10) != 0 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *(_WORD *)(a2 + 64) |= 0x10u;
    *(_QWORD *)(a2 + 72) = v6;
    return 0LL;
  }
  return 3221225626LL;
}
