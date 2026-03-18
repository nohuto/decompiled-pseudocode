/*
 * XREFs of RtlFindClearBits @ 0x14008AF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // r10d
  unsigned int v7; // r9d
  unsigned int *Buffer; // r11
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r8d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int64 *v17; // rdx
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  bool v22; // cc
  ULONG v23; // r10d
  ULONG v25; // r9d
  int v26; // ecx
  unsigned __int64 *v27; // rbx
  bool v28; // zf
  __int64 v29; // rax
  ULONG v30; // r11d
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // r11
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r9
  unsigned __int64 *v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r9d
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // r11d
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-58h]
  unsigned int *v45; // [rsp+8h] [rbp-50h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v45 = Buffer;
  v9 = (unsigned __int8)Buffer & 4;
  v44 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 < NumberToFind )
    {
LABEL_16:
      v21 = -1;
      goto LABEL_17;
    }
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
        goto LABEL_45;
      }
      if ( *++v17 )
        goto LABEL_49;
      v28 = !_BitScanReverse64((unsigned __int64 *)&v34, v18);
      if ( !v28 )
      {
        v35 = 63 - v34;
        goto LABEL_45;
      }
LABEL_75:
      v35 = 64;
LABEL_45:
      while ( 1 )
      {
        v21 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) - v35;
        if ( v21 > v14 )
          goto LABEL_16;
        v36 = NumberToFind - v35;
        v37 = &v17[(unsigned __int64)(NumberToFind - v35) >> 6];
        while ( ++v17 != v37 )
        {
          if ( *v17 )
            goto LABEL_49;
        }
        v39 = v36 & 0x3F;
        if ( !v39 )
          goto LABEL_12;
        v28 = !_BitScanForward64((unsigned __int64 *)&v40, *v17);
        if ( v28 )
          LODWORD(v40) = 64;
        if ( (unsigned int)v40 >= v39 )
          goto LABEL_12;
        do
        {
LABEL_49:
          if ( (unsigned __int64)v17 > v33 )
            goto LABEL_16;
          ++v17;
        }
        while ( *v17 );
        v28 = !_BitScanReverse64((unsigned __int64 *)&v38, *(v17 - 1));
        if ( v28 )
          goto LABEL_75;
        v35 = 63 - v38;
      }
    }
    v19 = 64;
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_16;
            v18 = *v17;
          }
          v28 = !_BitScanReverse64((unsigned __int64 *)&v41, v18);
          if ( !v28 )
            v19 = 63 - v41;
          v21 = (((unsigned int)(((char *)v17 - v13) >> 3) + 1) << 6) - v19;
          if ( v21 > v14 )
            goto LABEL_16;
          v42 = NumberToFind - v19;
          if ( NumberToFind == v19 )
            goto LABEL_12;
          ++v17;
          v19 = 64;
          v18 = *v17;
          if ( v42 >= 0x40 )
            break;
LABEL_66:
          v28 = !_BitScanForward64((unsigned __int64 *)&v43, v18);
          if ( v28 )
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
          goto LABEL_66;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v26 = 0;
      v27 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
      while ( v18 != -1 )
      {
LABEL_23:
        v28 = !_BitScanForward64((unsigned __int64 *)&v29, v18);
        if ( v28 )
          LODWORD(v29) = 64;
        if ( v26 + (int)v29 >= NumberToFind )
        {
          LODWORD(v31) = -v26;
LABEL_30:
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
            goto LABEL_30;
          }
        }
        if ( v17 == v27 )
          goto LABEL_16;
        v28 = !_BitScanReverse64((unsigned __int64 *)&v32, v18);
        if ( v28 )
          v26 = 64;
        else
          v26 = 63 - v32;
        v18 = *++v17;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v17 > v16 )
          goto LABEL_16;
        v18 = *v17;
        if ( *v17 != -1LL )
        {
          v26 = 0;
          goto LABEL_23;
        }
      }
    }
    while ( v18 == -1 )
    {
      if ( (unsigned __int64)++v17 > v16 )
        goto LABEL_16;
      v18 = *v17;
    }
    _BitScanForward64(&v20, ~v18);
    v21 = v20 + ((unsigned int)(((char *)v17 - v13) >> 3) << 6);
    v22 = v21 <= v14;
LABEL_11:
    if ( !v22 )
      goto LABEL_16;
LABEL_12:
    if ( v21 != -1 )
      break;
LABEL_17:
    if ( !v6 )
      break;
    v9 = v44;
    v25 = NumberToFind + HintIndex;
    Buffer = v45;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v25 = SizeOfBitMap;
    v7 = v25 - 1;
    v6 = 0;
  }
  v23 = v21 - v10;
  if ( v21 == -1 )
    return -1;
  return v23;
}
