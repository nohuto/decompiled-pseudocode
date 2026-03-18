/*
 * XREFs of MiInitializeCommitment @ 0x14019292C
 * Callers:
 *     MiInitializePartition @ 0x14074FC30 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x140192AB4 (MiIncreaseCommitLimits.c)
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
    *(_QWORD *)(a1 + 7216) = (-(__int64)(*(_QWORD *)(a1 + 7888) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 7216) = 0LL;
  *(_QWORD *)(a1 + 7208) = 0LL;
  v2 = *(_BYTE *)(a1 + 511);
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_DWORD *)(a1 + 504) = 0;
  *(_BYTE *)(a1 + 511) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 464) = 1LL;
  *(_QWORD *)(a1 + 456) = a1;
  *(_BYTE *)(a1 + 508) = -1;
  *(_WORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 484) = 0;
  *(_BYTE *)(a1 + 482) = 6;
  *(_QWORD *)(a1 + 496) = a1 + 488;
  *(_QWORD *)(a1 + 488) = a1 + 488;
  v3 = *(_QWORD *)(a1 + 8064);
  if ( dword_140465AB4 )
  {
    v4 = 0LL;
    v5 = (unsigned int)dword_140465AB4;
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
  v9 = *(_QWORD *)(a1 + 7888);
  *(_QWORD *)(a1 + 8128) = v3;
  result = MiIncreaseCommitLimits(a1, v9, v9, 0, 0LL);
  v11 = *(_QWORD *)(a1 + 7888);
  if ( v11 != v3 )
    result = MiChargeCommit(a1, v11 - v3, 2u);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    qword_140466A30 = *(_QWORD *)(a1 + 8424);
    qword_140466A30 -= qword_140466A38;
    result = qword_140466A58;
    qword_140466A30 -= qword_140466A58;
  }
  return result;
}
