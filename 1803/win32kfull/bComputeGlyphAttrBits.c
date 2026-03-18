/*
 * XREFs of bComputeGlyphAttrBits @ 0x1C0223E7C
 * Callers:
 *     bLoadFontFile @ 0x1C0219334 (bLoadFontFile.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00DE960 (ConvertToAndFromWideChar.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall bComputeGlyphAttrBits(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  ULONG v4; // ebx
  __int64 result; // rax
  _DWORD *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int16 *v11; // rsi
  unsigned __int64 v12; // r13
  unsigned int *v13; // rbp
  unsigned int **v14; // r12
  unsigned int v15; // ebx
  _DWORD *v16; // r15
  unsigned int v17; // ecx
  unsigned int v18; // edx
  _WORD *v19; // rax
  unsigned int v20; // eax
  int v21; // [rsp+30h] [rbp-78h]
  unsigned int v22; // [rsp+34h] [rbp-74h]
  unsigned int *v23; // [rsp+38h] [rbp-70h]
  unsigned __int64 v24; // [rsp+40h] [rbp-68h]
  unsigned __int16 *v25; // [rsp+48h] [rbp-60h]
  unsigned __int64 v26; // [rsp+50h] [rbp-58h]
  WCHAR v29; // [rsp+C0h] [rbp+18h] BYREF
  CHAR v30; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a1;
  v4 = ((unsigned int)(*(_DWORD *)(v2 + 552) + 7) >> 3) + 12;
  result = (__int64)EngAllocMem(0, v4, 0x64667454u);
  v6 = (_DWORD *)result;
  if ( result )
  {
    memset((void *)result, 0, v4);
    *v6 = v4;
    v7 = 0LL;
    v6[1] = *(_DWORD *)(v2 + 552);
    v6[2] = 1;
    v21 = 0;
    while ( (unsigned int)v7 < *(_DWORD *)(v3 + 12) )
    {
      if ( *(_DWORD *)(v3 + 16LL * (unsigned int)v7 + 44) == 1 )
      {
        v23 = 0LL;
        v8 = *(_QWORD *)(v3 + 16 * (v7 + 3));
        v9 = *(_QWORD *)(v8 + 88);
        v10 = *(_QWORD *)(v8 + 96);
        v24 = v10;
        v11 = (unsigned __int16 *)(v9 + 16);
        v25 = (unsigned __int16 *)(v9 + 16);
        v12 = v9 + 16 * (*(unsigned int *)(v9 + 12) + 1LL);
        v26 = v12;
        if ( v9 + 16 < v12 )
        {
          v13 = 0LL;
          v14 = (unsigned int **)(((v10 + 16) & ((unsigned __int128)-(__int128)v10 >> 64)) + 8);
          do
          {
            v15 = *v11;
            v16 = (_DWORD *)*((_QWORD *)v11 + 1);
            v22 = v15 + v11[1] - 1;
            if ( v10 )
            {
              v13 = *v14;
              v23 = *v14;
            }
            if ( *v11 != 0xFFFF && v15 <= v15 + v11[1] - 1 )
            {
              while ( 1 )
              {
                v17 = *(_DWORD *)(a2 + 288);
                v29 = v15;
                if ( (unsigned __int16)v15 >= (unsigned __int16)VerticalUnicodes
                  && (unsigned __int16)v15 <= (unsigned __int16)word_1C03202F6 )
                {
                  break;
                }
LABEL_16:
                if ( (int)ConvertToAndFromWideChar(v17, &v29, 2u, &v30, 2u, 0) > 1 )
                  goto LABEL_17;
LABEL_22:
                ++v23;
                ++v16;
                v13 = v23;
                if ( ++v15 > v22 )
                {
                  v11 = v25;
                  v12 = v26;
                  v10 = v24;
                  goto LABEL_24;
                }
              }
              v18 = 0;
              v19 = &unk_1C03202C2;
              while ( (unsigned __int16)v15 < *(v19 - 1) || (unsigned __int16)v15 > *v19 )
              {
                ++v18;
                v19 += 2;
                if ( v18 >= 0xE )
                  goto LABEL_16;
              }
LABEL_17:
              if ( *v16 < v6[1] )
              {
                *((_BYTE *)v6 + ((unsigned __int64)(unsigned int)*v16 >> 3) + 12) |= *((_BYTE *)&glyphBits + (*v16 & 7));
                if ( v24 )
                {
                  v20 = *v13;
                  if ( *v16 != *v13 && v20 < v6[1] )
                    *((_BYTE *)v6 + ((unsigned __int64)v20 >> 3) + 12) |= *((_BYTE *)&glyphBits + (v20 & 7));
                }
              }
              goto LABEL_22;
            }
LABEL_24:
            v11 += 8;
            v14 += 2;
            v25 = v11;
          }
          while ( (unsigned __int64)v11 < v12 );
          v3 = a1;
          LODWORD(v7) = v21;
        }
      }
      v7 = (unsigned int)(v7 + 1);
      v21 = v7;
    }
    *(_QWORD *)(v3 + 32) = v6;
    return 1LL;
  }
  return result;
}
