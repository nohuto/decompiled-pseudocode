/*
 * XREFs of MiVerifyImageHeader @ 0x1406B5B64
 * Callers:
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     memcmp @ 0x140196340 (memcmp.c)
 *     MiCheckDosCalls @ 0x14084F7B8 (MiCheckDosCalls.c)
 */

__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v8; // al
  char v10; // cl
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  __int16 v16; // cx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  __int16 v24; // r9
  unsigned int v25; // ecx
  unsigned int v26; // r8d
  __int16 v27; // ax
  __int16 v28; // cx

  if ( (a2 & 3) == 0 )
  {
    if ( *(_DWORD *)a2 != 17744 )
    {
      if ( (unsigned __int16)*(_DWORD *)a2 == 17742 )
      {
        if ( !(unsigned int)MiCheckDosCalls(a2, a4) )
        {
          v8 = *(_BYTE *)(a2 + 54);
          if ( v8 == 2 || !v8 && (((*(_WORD *)(a2 + 62) & 0xFF00) - 512) & 0xFEFF) == 0 )
            return 3221225777LL;
        }
        v10 = *(_BYTE *)(a2 + 54);
        if ( v10 != 5
          && *(_WORD *)(a2 + 4) != *(_WORD *)(a2 + 42)
          && (v10 != 1 || *(_DWORD *)(a3 + 512) != *(_DWORD *)"16STUB" || *(_WORD *)(a3 + 516) != *(_WORD *)"UB") )
        {
          v11 = 16LL * *(unsigned __int16 *)(a3 + 8);
          if ( v11 > 0xFC6
            || *(_QWORD *)(v11 + a3 + 24) != *(_QWORD *)"Phar Lap Software, Inc."
            || *(_QWORD *)(v11 + a3 + 32) != *(_QWORD *)" Software, Inc."
            || *(_QWORD *)(v11 + a3 + 40) != *(_QWORD *)"e, Inc."
            || (v12 = *(_WORD *)(v11 + a3 + 56), v12 != 19280) && v12 != 20304 && v12 != 22096 )
          {
            if ( v11 + 50 > 0x1000
              || v11 + *(unsigned __int16 *)(v11 + a3 + 48) > 0xFDC
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v11 + a3 + 48) + v11 + a3),
                   "Copyright (C) Rational Systems, Inc.",
                   0x24uLL) )
            {
              v13 = *(_DWORD *)(a2 + 44);
              v14 = *(_DWORD *)(a3 + 60);
              if ( v13 <= v14 )
                return 3221225755LL;
              v15 = (int)(v13 - v14);
              if ( v15 + 16 < v15 || v15 + 16 >= a4 || memcmp((const void *)(a2 + v15 + 1), "1-2-3 Preloader", 0xFuLL) )
                return 3221225755LL;
            }
          }
        }
      }
      return 3221225776LL;
    }
    if ( *(_WORD *)(a2 + 4) || *(_WORD *)(a2 + 20) )
    {
      if ( (*(_BYTE *)(a2 + 22) & 2) == 0 )
        return 3221225595LL;
      v16 = *(_WORD *)(a2 + 24);
      *(_WORD *)(a1 + 48) = v16;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
      if ( v16 == 523 )
      {
        v17 = *(_DWORD *)(a2 + 128);
        *(_DWORD *)(a1 + 20) = v17;
        *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
        *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 96);
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 104);
        *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
        *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
        *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
        *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
        *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
        *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
        *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
        *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
        *(_BYTE *)(a1 + 104) = 0;
        v18 = *(_DWORD *)(a2 + 132);
        if ( v18 > 6 && *(_DWORD *)(a2 + 184) )
        {
          *(_BYTE *)(a1 + 104) = 1;
          v18 = *(_DWORD *)(a2 + 132);
        }
        if ( v18 > 0xC )
        {
          *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 232);
          *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 236);
          v18 = *(_DWORD *)(a2 + 132);
        }
        if ( v18 <= 0xE )
        {
          *(_QWORD *)(a1 + 80) = 0LL;
        }
        else
        {
          *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 248);
          *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 252);
          if ( *(_DWORD *)(a2 + 248) && *(_DWORD *)(a2 + 252) )
            *(_DWORD *)(a1 + 20) = v17 | 1;
        }
        if ( *(_DWORD *)(a2 + 132) <= 5u )
        {
          *(_DWORD *)(a1 + 88) = 0;
          v19 = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 176);
          v19 = *(_DWORD *)(a2 + 180);
        }
        *(_DWORD *)(a1 + 92) = v19;
        if ( *(_DWORD *)(a2 + 132) > 0xAu )
        {
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 216);
          v20 = *(_DWORD *)(a2 + 220);
LABEL_64:
          *(_DWORD *)(a1 + 100) = v20;
          if ( dword_140439F24 && dword_140439F28 == *(_DWORD *)(a1 + 64) && dword_140439F2C == *(_DWORD *)(a1 + 16) )
            __debugbreak();
          v24 = *(_WORD *)(a1 + 48);
          if ( ((v24 - 267) & 0xFEFF) != 0 )
            return 3221225595LL;
          v25 = *(_DWORD *)(a1 + 8);
          if ( (v25 & 0x1FF) != 0 && v25 != *(_DWORD *)(a1 + 12) )
            return 3221225595LL;
          if ( !v25 )
            return 3221225595LL;
          v26 = *(_DWORD *)(a1 + 12);
          if ( ((v26 - 1) & v26) != 0 || ((v25 - 1) & v25) != 0 || v26 < v25 || *(_DWORD *)(a1 + 16) > 0x77000000u )
            return 3221225595LL;
          if ( v24 == 267 )
          {
            v27 = *(_WORD *)(a2 + 4);
            if ( v27 == 332 )
              return 0LL;
            v28 = 452;
          }
          else
          {
            if ( v24 != 523 )
              return 0LL;
            v27 = *(_WORD *)(a2 + 4);
            if ( v27 == -31132 )
              return 0LL;
            v28 = -21916;
          }
          if ( v27 != v28 )
            return 3221225595LL;
          return 0LL;
        }
      }
      else
      {
        v21 = *(_DWORD *)(a2 + 112);
        *(_DWORD *)(a1 + 20) = v21;
        *(_QWORD *)a1 = *(unsigned int *)(a2 + 52);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
        *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
        *(_QWORD *)(a1 + 32) = *(unsigned int *)(a2 + 96);
        *(_QWORD *)(a1 + 40) = *(unsigned int *)(a2 + 100);
        *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
        *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
        *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
        *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
        *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
        *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
        *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
        *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
        *(_BYTE *)(a1 + 104) = 0;
        v22 = *(_DWORD *)(a2 + 116);
        if ( v22 > 6 && *(_DWORD *)(a2 + 168) )
        {
          *(_BYTE *)(a1 + 104) = 1;
          v22 = *(_DWORD *)(a2 + 116);
        }
        if ( v22 > 0xC )
        {
          *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 216);
          *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 220);
          v22 = *(_DWORD *)(a2 + 116);
        }
        if ( v22 <= 0xE )
        {
          *(_QWORD *)(a1 + 80) = 0LL;
        }
        else
        {
          *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 232);
          *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 236);
          if ( *(_DWORD *)(a2 + 232) && *(_DWORD *)(a2 + 236) )
            *(_DWORD *)(a1 + 20) = v21 | 1;
        }
        if ( *(_DWORD *)(a2 + 116) <= 5u )
        {
          *(_DWORD *)(a1 + 88) = 0;
          v23 = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 160);
          v23 = *(_DWORD *)(a2 + 164);
        }
        *(_DWORD *)(a1 + 92) = v23;
        if ( *(_DWORD *)(a2 + 116) > 0xAu )
        {
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 200);
          v20 = *(_DWORD *)(a2 + 204);
          goto LABEL_64;
        }
      }
      v20 = 0;
      *(_DWORD *)(a1 + 96) = 0;
      goto LABEL_64;
    }
  }
  return 3221225776LL;
}
