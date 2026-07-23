/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1400D9660
 * Callers:
 *     BgpFwReserveAllocate @ 0x14016F764 (BgpFwReserveAllocate.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140185734 (MiGetUltraHugeAlreadyActive.c)
 *     MiAssignSharedUserRanges @ 0x140187A90 (MiAssignSharedUserRanges.c)
 *     RtlApplyHotPatch @ 0x14057F148 (RtlApplyHotPatch.c)
 *     SepAddLuidToIndexEntry @ 0x14065016C (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x140650C9C (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     PspStorageAllocSlot @ 0x140729B28 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x140852EF8 (MiAllocatePartitionId.c)
 *     TtmiCreateTerminal @ 0x14087FA6C (TtmiCreateTerminal.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14089B04C (RtlHotPatchSynchronizationRequired.c)
 *     ViAllocateFromContiguousMemory @ 0x14092D6B0 (ViAllocateFromContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1409D3CE0 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x1409D4794 (MiAssignSessionRanges.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
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
  int v25; // ecx
  unsigned __int64 *v26; // rdi
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r10d
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned int v32; // r9d
  unsigned __int64 v33; // r10
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r9
  unsigned __int64 *v37; // rcx
  unsigned int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned int v42; // r10d
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
        v33 = v16 + 8;
        if ( (v14 & 0x3F) == 0 )
          v33 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
        if ( !v18 )
        {
          v35 = 0;
          goto LABEL_48;
        }
        if ( *++v17 )
          goto LABEL_57;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v34, v18);
        if ( !v27 )
        {
          v35 = 63 - v34;
          goto LABEL_48;
        }
LABEL_79:
        v35 = 64;
LABEL_48:
        while ( 1 )
        {
          v21 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) - v35;
          if ( v21 > v14 )
            goto LABEL_35;
          v36 = NumberToFind - v35;
          v37 = &v17[(unsigned __int64)(NumberToFind - v35) >> 6];
          while ( ++v17 != v37 )
          {
            if ( *v17 )
              goto LABEL_57;
          }
          v38 = v36 & 0x3F;
          if ( !v38 )
            goto LABEL_12;
          v27 = !_BitScanForward64((unsigned __int64 *)&v39, *v17);
          if ( v27 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_12;
          do
          {
LABEL_57:
            if ( (unsigned __int64)v17 > v33 )
              goto LABEL_35;
            ++v17;
          }
          while ( *v17 );
          v27 = !_BitScanReverse64((unsigned __int64 *)&v40, *(v17 - 1));
          if ( v27 )
            goto LABEL_79;
          v35 = 63 - v40;
        }
      }
      v19 = 64;
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v25 = 0;
          v26 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
          while ( v18 != -1 )
          {
LABEL_20:
            v27 = !_BitScanForward64((unsigned __int64 *)&v28, v18);
            if ( v27 )
              LODWORD(v28) = 64;
            if ( v25 + (int)v28 >= NumberToFind )
            {
              LODWORD(v30) = -v25;
LABEL_27:
              v21 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) + v30;
              v22 = v21 <= v14;
              goto LABEL_11;
            }
            v29 = NumberToFind;
            v30 = ~v18;
            while ( 1 )
            {
              v30 &= v30 >> (v29 >> 1);
              if ( !v30 )
                break;
              v29 -= v29 >> 1;
              if ( v29 <= 1 )
              {
                _BitScanForward64(&v30, v30);
                goto LABEL_27;
              }
            }
            if ( v17 == v26 )
              goto LABEL_35;
            v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
            if ( v27 )
              v25 = 64;
            else
              v25 = 63 - v31;
            v18 = *++v17;
          }
          while ( (unsigned __int64)++v17 <= v16 )
          {
            v18 = *v17;
            if ( *v17 != -1LL )
            {
              v25 = 0;
              goto LABEL_20;
            }
          }
        }
        else
        {
          while ( v18 == -1 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_35;
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
            goto LABEL_36;
          }
        }
LABEL_35:
        v21 = -1;
LABEL_36:
        v4 = HintIndex;
        goto LABEL_37;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_35;
            v18 = *v17;
          }
          v27 = !_BitScanReverse64((unsigned __int64 *)&v41, v18);
          if ( !v27 )
            v19 = 63 - v41;
          v21 = (((unsigned int)(((char *)v17 - v13) >> 3) + 1) << 6) - v19;
          if ( v21 > v14 )
            goto LABEL_35;
          v42 = NumberToFind - v19;
          if ( NumberToFind == v19 )
            goto LABEL_12;
          ++v17;
          v19 = 64;
          v18 = *v17;
          if ( v42 >= 0x40 )
            break;
LABEL_69:
          v27 = !_BitScanForward64((unsigned __int64 *)&v43, v18);
          if ( v27 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 >= v42 )
            goto LABEL_12;
        }
        if ( !*v17 )
        {
          v42 -= 64;
          if ( !v42 )
            goto LABEL_12;
          v18 = *++v17;
          goto LABEL_69;
        }
      }
    }
    v21 = -1;
LABEL_37:
    if ( !v7 )
      break;
    Buffer = v44;
    v32 = NumberToFind + v4;
    if ( NumberToFind + v4 > SizeOfBitMap )
      v32 = SizeOfBitMap;
    v8 = v32 - 1;
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
