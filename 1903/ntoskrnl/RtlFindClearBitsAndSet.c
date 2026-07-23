/*
 * XREFs of RtlFindClearBitsAndSet @ 0x140085350
 * Callers:
 *     BgpFwReserveAllocate @ 0x140178E64 (BgpFwReserveAllocate.c)
 *     MiAssignSoftwareWsleRegion @ 0x140187F58 (MiAssignSoftwareWsleRegion.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14018EED0 (MiGetUltraHugeAlreadyActive.c)
 *     RtlApplyHotPatch @ 0x1405AE038 (RtlApplyHotPatch.c)
 *     SepAddLuidToIndexEntry @ 0x14061957C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14061E218 (SepGetLowBoxNumberEntry.c)
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     PspStorageAllocSlot @ 0x1407599D8 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x14088B70C (MiAllocatePartitionId.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     RtlHotPatchSynchronizationRequired @ 0x1408D893C (RtlHotPatchSynchronizationRequired.c)
 *     ViAllocateFromContiguousMemory @ 0x14096AF20 (ViAllocateFromContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1409F0920 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A17964 (MiAssignSessionRanges.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v4; // esi
  _RTL_BITMAP *v6; // r13
  ULONG v7; // ebx
  unsigned int v8; // r9d
  unsigned int *Buffer; // r10
  int v10; // r12d
  unsigned int v11; // r8d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 *v17; // rdx
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  bool v22; // cc
  ULONG v23; // ebx
  unsigned int v25; // r9d
  int v26; // ecx
  unsigned __int64 *v27; // rdi
  bool v28; // zf
  __int64 v29; // rax
  ULONG v30; // r10d
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  unsigned int v33; // r10d
  __int64 v34; // rax
  unsigned __int64 v35; // r10
  int v36; // ecx
  char v37; // r9
  unsigned __int64 *v38; // rcx
  unsigned int v39; // r9d
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int *v44; // [rsp+28h] [rbp-50h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  v6 = BitMapHeader;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v23 = v7 & 0xFFFFFFF8;
    goto LABEL_15;
  }
  Buffer = BitMapHeader->Buffer;
  v44 = Buffer;
  v10 = ((unsigned __int8)Buffer & 4) != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v8;
    v12 = v10 + v7;
    v13 = (char *)Buffer - (((unsigned __int8)v44 & 4) != 0LL ? 4 : 0);
    if ( v8 - v7 + 1 >= NumberToFind )
    {
      v14 = v11 - NumberToFind + 1;
      v15 = (1LL << (v12 & 0x3F)) - 1;
      v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
      v17 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v12 >> 6)];
      v18 = *v17 | v15;
      if ( NumberToFind > 0x7F )
      {
        v35 = v16 + 8;
        if ( (v14 & 0x3F) == 0 )
          v35 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
        if ( !v18 )
        {
          v36 = 0;
          goto LABEL_53;
        }
        if ( *++v17 )
          goto LABEL_64;
        v28 = !_BitScanReverse64((unsigned __int64 *)&v43, v18);
        if ( !v28 )
        {
          v36 = 63 - v43;
          goto LABEL_53;
        }
LABEL_81:
        v36 = 64;
LABEL_53:
        while ( 1 )
        {
          v21 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) - v36;
          if ( v21 > v14 )
            goto LABEL_18;
          v37 = NumberToFind - v36;
          v38 = &v17[(unsigned __int64)(NumberToFind - v36) >> 6];
          while ( ++v17 != v38 )
          {
            if ( *v17 )
              goto LABEL_64;
          }
          v39 = v37 & 0x3F;
          if ( !v39 )
            goto LABEL_12;
          v28 = !_BitScanForward64((unsigned __int64 *)&v40, *v17);
          if ( v28 )
            LODWORD(v40) = 64;
          if ( (unsigned int)v40 >= v39 )
            goto LABEL_12;
          do
          {
LABEL_64:
            if ( (unsigned __int64)v17 > v35 )
              goto LABEL_18;
            ++v17;
          }
          while ( *v17 );
          v28 = !_BitScanReverse64((unsigned __int64 *)&v41, *(v17 - 1));
          if ( v28 )
            goto LABEL_81;
          v36 = 63 - v41;
        }
      }
      v19 = 64;
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v26 = 0;
          v27 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
          while ( v18 != -1 )
          {
LABEL_26:
            v28 = !_BitScanForward64((unsigned __int64 *)&v29, v18);
            if ( v28 )
              LODWORD(v29) = 64;
            if ( v26 + (int)v29 >= NumberToFind )
            {
              LODWORD(v31) = -v26;
LABEL_33:
              v21 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) + v31;
              v22 = v21 <= v14;
              goto LABEL_11;
            }
            v30 = NumberToFind;
            v31 = ~v18;
            while ( 1 )
            {
              v31 &= v31 >> (v30 >> 1);
              if ( !v31 )
                break;
              v30 -= v30 >> 1;
              if ( v30 <= 1 )
              {
                _BitScanForward64(&v31, v31);
                goto LABEL_33;
              }
            }
            if ( v17 == v27 )
              goto LABEL_18;
            v28 = !_BitScanReverse64((unsigned __int64 *)&v42, v18);
            if ( v28 )
              v26 = 64;
            else
              v26 = 63 - v42;
            v18 = *++v17;
          }
          while ( (unsigned __int64)++v17 <= v16 )
          {
            v18 = *v17;
            if ( *v17 != -1LL )
            {
              v26 = 0;
              goto LABEL_26;
            }
          }
        }
        else
        {
          while ( v18 == -1 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_18;
            v18 = *v17;
          }
          _BitScanForward64(&v20, ~v18);
          v21 = v20 + ((unsigned int)(((char *)v17 - v13) >> 3) << 6);
          v22 = v21 <= v14;
LABEL_11:
          if ( v22 )
          {
LABEL_12:
            if ( v21 != -1 )
              break;
            goto LABEL_19;
          }
        }
LABEL_18:
        v21 = -1;
LABEL_19:
        v4 = HintIndex;
        goto LABEL_20;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_18;
            v18 = *v17;
          }
          v28 = !_BitScanReverse64((unsigned __int64 *)&v32, v18);
          if ( !v28 )
            v19 = 63 - v32;
          v21 = (((unsigned int)(((char *)v17 - v13) >> 3) + 1) << 6) - v19;
          if ( v21 > v14 )
            goto LABEL_18;
          v33 = NumberToFind - v19;
          if ( NumberToFind == v19 )
            goto LABEL_12;
          ++v17;
          v19 = 64;
          v18 = *v17;
          if ( v33 >= 0x40 )
            break;
LABEL_45:
          v28 = !_BitScanForward64((unsigned __int64 *)&v34, v18);
          if ( v28 )
            LODWORD(v34) = 64;
          if ( (unsigned int)v34 >= v33 )
            goto LABEL_12;
        }
        if ( !*v17 )
        {
          v33 -= 64;
          if ( !v33 )
            goto LABEL_12;
          v18 = *++v17;
          goto LABEL_45;
        }
      }
    }
    v21 = -1;
LABEL_20:
    if ( !v7 )
      break;
    Buffer = v44;
    v25 = NumberToFind + v4;
    if ( NumberToFind + v4 > SizeOfBitMap )
      v25 = SizeOfBitMap;
    v8 = v25 - 1;
    v7 = 0;
  }
  v6 = BitMapHeader;
  v23 = v21 - v10;
  if ( v21 == -1 )
    v23 = -1;
LABEL_15:
  if ( v23 != -1 )
    RtlSetBits(v6, v23, NumberToFind);
  return v23;
}
