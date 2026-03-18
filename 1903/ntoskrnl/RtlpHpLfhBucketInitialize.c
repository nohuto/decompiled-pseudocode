/*
 * XREFs of RtlpHpLfhBucketInitialize @ 0x1401117BC
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x1401115EC (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x140111ED4 (RtlpHpLfhOwnerInitialize.c)
 */

int __fastcall RtlpHpLfhBucketInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rax

  RtlpHpLfhOwnerInitialize(a1, a2, 0xFFFFFFFFLL, a3);
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a1 + 1)];
  if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
  {
    v6 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a1 + 1)];
    _BitScanForward(&v7, *(unsigned __int16 *)(a3 + 60));
    LOBYTE(v7) = v7 + 18;
    *(_BYTE *)(a1 + 76) = v7;
    v8 = (v5 - 1 + (1LL << v7)) / v6;
    *(_DWORD *)(a1 + 72) = v8;
  }
  else
  {
    _BitScanForward((unsigned int *)&v8, v5);
    *(_BYTE *)(a1 + 76) = v8;
  }
  return v8;
}
