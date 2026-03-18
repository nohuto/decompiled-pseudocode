/*
 * XREFs of HvpEnlistFreeCells @ 0x14065FAA0
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14076504C (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 *     HvpEnlistFreeCell @ 0x1405D52F8 (HvpEnlistFreeCell.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, int a4)
{
  char v4; // r13
  unsigned int v5; // r10d
  unsigned int v6; // edi
  unsigned int *v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int64 v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+88h] [rbp+20h]

  v15 = a4;
  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 32;
  v14 = *(_QWORD *)(BugCheckParameter2 + 56);
  if ( v5 <= 0x20 )
    return 0LL;
  do
  {
    v10 = (unsigned int *)(a2 + v6);
    v11 = *v10;
    if ( (*v10 & 0x80000000) != 0 )
      v11 = -v11;
    if ( v11 + v6 < v6 || v11 + v6 > v5 || (v11 & 7) != 0 || !v11 )
    {
      if ( (a4 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v14, 0, 26, -1073741492, 0);
        return 3221225804LL;
      }
      v12 = v6 + a3;
      v11 = v5 - v6;
      if ( !HvpMarkDirty(BugCheckParameter2, v6 + a3, v5 - v6, 0) )
      {
        SetFailureLocation(v14, 0, 26, -1073741670, 16);
        return 3221225626LL;
      }
      memset((void *)(a2 + v6), 0, v11);
      *v10 = v11;
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      SetFailureLocation(v14, 1, 26, 1073741833, 32);
    }
    else
    {
      v12 = v6 + a3;
      if ( (*v10 & 0x80000000) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 152) += v11;
        goto LABEL_10;
      }
    }
    *(_DWORD *)(BugCheckParameter2 + 148) += v11;
    HvpEnlistFreeCell(BugCheckParameter2, v12, v11, 0);
    a4 = v15;
LABEL_10:
    v5 = *(_DWORD *)(a2 + 8);
    v6 += v11;
  }
  while ( v6 < v5 );
  if ( !v4 )
    return 0LL;
  return 1073741833LL;
}
