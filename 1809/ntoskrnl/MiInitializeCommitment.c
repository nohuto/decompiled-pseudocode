/*
 * XREFs of MiInitializeCommitment @ 0x140187E40
 * Callers:
 *     MiInitializePartition @ 0x14072BD18 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x140187FC8 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  __int64 result; // rax
  __int64 v11; // rdx

  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 6448) = (-(__int64)(*(_QWORD *)(a1 + 7120) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 6448) = 0LL;
  *(_QWORD *)(a1 + 6440) = 0LL;
  v2 = *(_BYTE *)(a1 + 503);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_DWORD *)(a1 + 496) = 0;
  *(_BYTE *)(a1 + 503) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 456) = 1LL;
  *(_QWORD *)(a1 + 448) = a1;
  *(_BYTE *)(a1 + 500) = -1;
  *(_WORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_BYTE *)(a1 + 474) = 6;
  *(_QWORD *)(a1 + 488) = a1 + 480;
  *(_QWORD *)(a1 + 480) = a1 + 480;
  v3 = *(_QWORD *)(a1 + 7296);
  if ( dword_14043B14C )
  {
    v4 = 0LL;
    v5 = (unsigned int)dword_14043B14C;
    do
    {
      v6 = (__int64 *)(a1 + 4136);
      v7 = 2LL;
      do
      {
        v8 = *v6++;
        v3 += *(unsigned __int16 *)(v8 + v4);
        --v7;
      }
      while ( v7 );
      v4 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  v9 = *(_QWORD *)(a1 + 7120);
  *(_QWORD *)(a1 + 7360) = v3;
  result = MiIncreaseCommitLimits(a1, v9, v9, 0, 0LL);
  v11 = *(_QWORD *)(a1 + 7120);
  if ( v11 != v3 )
    result = MiChargeCommit(a1, v11 - v3, 2u);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    qword_14043C0D0 = *(_QWORD *)(a1 + 7656);
    qword_14043C0D0 -= qword_14043C0D8;
    result = qword_14043C100;
    qword_14043C0D0 -= qword_14043C100;
  }
  return result;
}
