/*
 * XREFs of MiClearFileOnlyPfn @ 0x1402B5954
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x1402B6D7C (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  _OWORD v6[3]; // [rsp+20h] [rbp-30h] BYREF

  memset(v6, 0, sizeof(v6));
  *((_QWORD *)&v6[1] + 1) = 0x8000000000000000uLL;
  BYTE2(v6[2]) = BYTE2(v6[2]) & 0x3F | 0x40;
  BYTE2(v6[2]) = BYTE2(v6[2]) & 0xF8 | 5;
  v2 = *((_QWORD *)&v6[2] + 1);
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
    v2 = *((_QWORD *)&v6[2] + 1) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  v3 = v6[1];
  *(_OWORD *)a1 = v6[0];
  *((_QWORD *)&v6[2] + 1) = v2 | 0x30000000000000LL;
  v4 = v6[2];
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  return MiQueueExtentPfnDeletion(a1);
}
