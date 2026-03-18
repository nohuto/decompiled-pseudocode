/*
 * XREFs of MiCreatePfnBitMaps @ 0x14075063C
 * Callers:
 *     MmCreatePartition @ 0x14019A610 (MmCreatePartition.c)
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiSplitPfnBitMaps @ 0x14075079C (MiSplitPfnBitMaps.c)
 *     MiDeletePfnBitMaps @ 0x14089BD50 (MiDeletePfnBitMaps.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, _DWORD *a2)
{
  __int64 *v3; // r14
  unsigned int i; // edi
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // r12
  int v12; // edi

  v3 = MiLargePageSizes;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      v6 = 512LL;
      v7 = (_QWORD *)(a1 + 7096);
      if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      {
        *v7 = 0LL;
        *(_QWORD *)(a1 + 7104) = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v6 = *v3;
      v7 = (_QWORD *)(16LL * i + a1 + 5000);
    }
    v8 = 0x1000000000LL / v6 + (0x1000000000LL % v6 != 0);
    v9 = (((unsigned __int64)(v8 + 7) >> 3) + 4095) >> 12;
    v10 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)(unsigned int)v9);
    v11 = v10;
    if ( !v10 )
      goto LABEL_17;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v7, (__int64)(v10 << 25) >> 16, v8, 4) )
    {
      MiReleasePtes((__int64)&qword_1404669C0, v11, v9);
LABEL_17:
      MiDeletePfnBitMaps(a1);
      return 0LL;
    }
    *v7 = 0LL;
LABEL_7:
    ++v3;
  }
  if ( !a2 || (v12 = 0, !*a2) )
  {
LABEL_12:
    *(_BYTE *)(a1 + 4766) = 1;
    return 1LL;
  }
  while ( (unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * v12 + 4], *(_QWORD *)&a2[4 * v12 + 6]) )
  {
    if ( (unsigned int)++v12 >= *a2 )
      goto LABEL_12;
  }
  return 0LL;
}
