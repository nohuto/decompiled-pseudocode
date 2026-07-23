/*
 * XREFs of RtlFindClearBits @ 0x140077EC0
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1405F3500 (MiFindEmptyAddressRange.c)
 *     MiSelectRelocationStartHint @ 0x140650D84 (MiSelectRelocationStartHint.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v5; // ebp
  unsigned int v7; // edx
  unsigned int *Buffer; // r10
  __int64 v9; // rsi
  int v10; // ebx
  unsigned int v11; // r9d
  ULONG v12; // r8d
  char *v13; // r14
  ULONG v14; // r13d
  unsigned __int64 v15; // r10
  unsigned __int64 *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // r9d
  ULONG result; // eax
  int v21; // edx
  bool v22; // zf
  __int64 v23; // rcx
  ULONG v24; // edi
  unsigned __int64 v25; // r9
  ULONG v26; // edx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  int v30; // edx
  char v31; // r8
  unsigned __int64 *v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // r8
  bool v36; // sf
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // edi
  __int64 v40; // rcx
  unsigned int *v41; // [rsp+0h] [rbp-58h]
  unsigned __int64 *v42; // [rsp+60h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v5 = 0;
  v7 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v5 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v9 = (unsigned __int8)Buffer & 4;
  v41 = Buffer;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v5;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v5 + 1 >= NumberToFind )
    {
      v14 = v11 - NumberToFind + 1;
      v15 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
      v16 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v12 >> 6)];
      v17 = *v16 | ((1LL << (v12 & 0x3F)) - 1);
      if ( NumberToFind > 0x7F )
      {
        v28 = v15 + 8;
        if ( (v14 & 0x3F) == 0 )
          v28 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
        if ( v17 )
        {
          if ( *++v16 )
            goto LABEL_57;
          v22 = !_BitScanReverse64((unsigned __int64 *)&v29, v17);
          if ( v22 )
            v30 = 64;
          else
            v30 = 63 - v29;
        }
        else
        {
          v30 = 0;
        }
LABEL_49:
        v19 = ((unsigned int)(((char *)v16 - v13) >> 3) << 6) - v30;
        if ( v19 <= v14 )
        {
          v31 = NumberToFind - v30;
          v32 = &v16[(unsigned __int64)(NumberToFind - v30) >> 6];
          for ( ++v16; v16 != v32; ++v16 )
          {
            if ( *v16 )
              goto LABEL_57;
          }
          v33 = v31 & 0x3F;
          if ( !v33 )
            goto LABEL_11;
          v22 = !_BitScanForward64((unsigned __int64 *)&v34, *v16);
          if ( v22 )
            LODWORD(v34) = 64;
          if ( (unsigned int)v34 >= v33 )
          {
LABEL_11:
            if ( v19 != -1 )
              break;
            goto LABEL_26;
          }
LABEL_57:
          while ( (unsigned __int64)v16 <= v28 )
          {
            if ( !*++v16 )
            {
              v22 = !_BitScanReverse64((unsigned __int64 *)&v35, *(v16 - 1));
              if ( v22 )
                v30 = 64;
              else
                v30 = 63 - v35;
              goto LABEL_49;
            }
          }
        }
      }
      else if ( NumberToFind >= 0x40 )
      {
LABEL_61:
        v36 = v17 < 0;
        while ( !v36 )
        {
LABEL_63:
          v22 = !_BitScanReverse64((unsigned __int64 *)&v37, v17);
          if ( v22 )
            v38 = 64;
          else
            v38 = 63 - v37;
          v19 = (((unsigned int)(((char *)v16 - v13) >> 3) + 1) << 6) - v38;
          if ( v19 > v14 )
            goto LABEL_25;
          v39 = NumberToFind - v38;
          if ( NumberToFind == v38 )
            goto LABEL_11;
          v17 = v16[1];
          ++v16;
          if ( v39 < 0x40 )
            goto LABEL_68;
          v36 = v17 < 0;
          if ( !v17 )
          {
            v39 -= 64;
            if ( !v39 )
              goto LABEL_11;
            v17 = v16[1];
            ++v16;
LABEL_68:
            v22 = !_BitScanForward64((unsigned __int64 *)&v40, v17);
            if ( v22 )
              LODWORD(v40) = 64;
            if ( (unsigned int)v40 >= v39 )
              goto LABEL_11;
            goto LABEL_61;
          }
        }
        while ( (unsigned __int64)++v16 <= v15 )
        {
          v17 = *v16;
          if ( (*v16 & 0x8000000000000000uLL) == 0LL )
            goto LABEL_63;
        }
      }
      else if ( NumberToFind > 1 )
      {
        v21 = 0;
        v42 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
        while ( 1 )
        {
          if ( v17 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v16 > v15 )
                goto LABEL_25;
              v17 = *v16;
              if ( *v16 != -1LL )
              {
                v21 = 0;
                break;
              }
            }
          }
          v22 = !_BitScanForward64((unsigned __int64 *)&v23, v17);
          if ( v22 )
            LODWORD(v23) = 64;
          if ( v21 + (int)v23 >= NumberToFind )
            break;
          v24 = NumberToFind;
          v25 = ~v17;
          while ( 1 )
          {
            v25 &= v25 >> (v24 >> 1);
            if ( !v25 )
              break;
            v24 -= v24 >> 1;
            if ( v24 <= 1 )
            {
              _BitScanForward64(&v25, v25);
              goto LABEL_24;
            }
          }
          if ( v16 == v42 )
            goto LABEL_25;
          v22 = !_BitScanReverse64((unsigned __int64 *)&v27, v17);
          if ( v22 )
            v21 = 64;
          else
            v21 = 63 - v27;
          v17 = v16[1];
          ++v16;
        }
        LODWORD(v25) = -v21;
LABEL_24:
        v19 = ((unsigned int)(((char *)v16 - v13) >> 3) << 6) + v25;
        if ( v19 <= v14 )
          goto LABEL_11;
      }
      else
      {
        if ( v17 != -1 )
        {
LABEL_10:
          _BitScanForward64(&v18, ~v17);
          v19 = v18 + ((unsigned int)(((char *)v16 - v13) >> 3) << 6);
          if ( v19 <= v14 )
            goto LABEL_11;
          v19 = -1;
LABEL_26:
          Buffer = v41;
          goto LABEL_27;
        }
        while ( (unsigned __int64)++v16 <= v15 )
        {
          v17 = *v16;
          if ( *v16 != -1LL )
            goto LABEL_10;
        }
      }
LABEL_25:
      v19 = -1;
      goto LABEL_26;
    }
    v19 = -1;
LABEL_27:
    if ( !v5 )
      break;
    v26 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v26 = SizeOfBitMap;
    v7 = v26 - 1;
    v5 = 0;
  }
  result = v19 - v10;
  if ( v19 == -1 )
    return -1;
  return result;
}
