/*
 * XREFs of HvpEnlistFreeCells @ 0x1405FA800
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14073E1CC (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     HvpEnlistFreeCell @ 0x1405FBF0C (HvpEnlistFreeCell.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  char v4; // r13
  unsigned int v5; // r10d
  unsigned int v6; // edi
  unsigned int *v9; // rsi
  unsigned int v10; // ebx
  __int64 v12; // [rsp+70h] [rbp+8h]
  int v13; // [rsp+88h] [rbp+20h]

  v13 = a4;
  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 32;
  v12 = *(_QWORD *)(BugCheckParameter2 + 56);
  if ( v5 <= 0x20 )
    return 0LL;
  do
  {
    v9 = (unsigned int *)(a2 + v6);
    v10 = *v9;
    if ( (*v9 & 0x80000000) != 0 )
      v10 = -v10;
    if ( v10 + v6 < v6 || v10 + v6 > v5 || (v10 & 7) != 0 || !v10 )
    {
      if ( (a4 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v12, 0, 26, -1073741492, 0);
        return 3221225804LL;
      }
      v10 = v5 - v6;
      if ( !(unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
      {
        SetFailureLocation(v12, 0, 26, -1073741670, 16);
        return 3221225626LL;
      }
      memset((void *)(a2 + v6), 0, v10);
      *v9 = v10;
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      SetFailureLocation(v12, 1, 26, 1073741833, 32);
    }
    else if ( (*v9 & 0x80000000) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 152) += v10;
      goto LABEL_10;
    }
    *(_DWORD *)(BugCheckParameter2 + 148) += v10;
    HvpEnlistFreeCell(BugCheckParameter2);
    a4 = v13;
LABEL_10:
    v5 = *(_DWORD *)(a2 + 8);
    v6 += v10;
  }
  while ( v6 < v5 );
  if ( !v4 )
    return 0LL;
  return 1073741833LL;
}
