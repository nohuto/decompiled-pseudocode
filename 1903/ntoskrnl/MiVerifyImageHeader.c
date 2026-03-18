/*
 * XREFs of MiVerifyImageHeader @ 0x14068C9A4
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     MiLegacyImageArchitecture @ 0x1400E2E08 (MiLegacyImageArchitecture.c)
 *     MiComputeBadImageHeaderType @ 0x14088A4C8 (MiComputeBadImageHeaderType.c)
 */

__int64 __fastcall MiVerifyImageHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v6; // cx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  __int16 v11; // r9
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rdx
  char v17; // r8
  unsigned __int16 v18; // r11
  __int16 v19; // ax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  __int16 v24; // ax

  if ( (a2 & 3) != 0 )
  {
    dword_140464818 = 59;
    return 3221225776LL;
  }
  if ( *(_DWORD *)a2 == 17744 )
  {
    if ( !*(_WORD *)(a2 + 4) && !*(_WORD *)(a2 + 20) )
    {
      dword_140464818 = 70;
      return 3221225776LL;
    }
    if ( (*(_BYTE *)(a2 + 22) & 2) == 0 )
    {
      dword_140464818 = 71;
      return 3221225595LL;
    }
    v6 = *(_WORD *)(a2 + 24);
    *(_WORD *)(a1 + 48) = v6;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
    if ( v6 == 523 )
    {
      v7 = *(_DWORD *)(a2 + 128);
      *(_DWORD *)(a1 + 20) = v7;
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
      v8 = *(_DWORD *)(a2 + 132);
      if ( v8 > 6 && *(_DWORD *)(a2 + 184) )
      {
        *(_BYTE *)(a1 + 104) = 1;
        v8 = *(_DWORD *)(a2 + 132);
      }
      if ( v8 > 0xC )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 232);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 236);
        v8 = *(_DWORD *)(a2 + 132);
      }
      if ( v8 <= 0xE )
      {
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      else
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 248);
        *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 252);
        if ( *(_DWORD *)(a2 + 248) && *(_DWORD *)(a2 + 252) )
          *(_DWORD *)(a1 + 20) = v7 | 1;
      }
      if ( *(_DWORD *)(a2 + 132) <= 5u )
      {
        *(_DWORD *)(a1 + 88) = 0;
        v9 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 176);
        v9 = *(_DWORD *)(a2 + 180);
      }
      *(_DWORD *)(a1 + 92) = v9;
      if ( *(_DWORD *)(a2 + 132) > 0xAu )
      {
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 216);
        v10 = *(_DWORD *)(a2 + 220);
LABEL_17:
        *(_DWORD *)(a1 + 100) = v10;
        if ( dword_14046488C && dword_140464890 == *(_DWORD *)(a1 + 64) && dword_140464894 == *(_DWORD *)(a1 + 16) )
          __debugbreak();
        v11 = *(_WORD *)(a1 + 48);
        if ( ((v11 - 267) & 0xFEFF) != 0 )
        {
          dword_140464818 = 73;
        }
        else
        {
          v12 = *(_DWORD *)(a1 + 8);
          if ( (v12 & 0x1FF) != 0 && v12 != *(_DWORD *)(a1 + 12) )
          {
            dword_140464818 = 76;
            return 3221225595LL;
          }
          if ( !v12 )
          {
            dword_140464818 = 77;
            return 3221225595LL;
          }
          v13 = *(_DWORD *)(a1 + 12);
          if ( ((v13 - 1) & v13) != 0 )
          {
            dword_140464818 = 78;
            return 3221225595LL;
          }
          if ( ((v12 - 1) & v12) != 0 )
          {
            dword_140464818 = 79;
            return 3221225595LL;
          }
          if ( v13 < v12 )
          {
            dword_140464818 = 80;
            return 3221225595LL;
          }
          v14 = *(_DWORD *)(a1 + 16);
          if ( v14 > 0x77000000 )
          {
            dword_140464818 = 81;
            return 3221225595LL;
          }
          if ( v11 == 267 )
          {
            v24 = *(_WORD *)(a2 + 4);
            if ( v24 != 332 && v24 != 452 )
            {
              dword_140464818 = 82;
              return 3221225595LL;
            }
          }
          else if ( v11 == 523 )
          {
            v15 = *(_WORD *)(a2 + 4);
            if ( v15 != -31132 && v15 != -21916 )
            {
              dword_140464818 = 83;
              return 3221225595LL;
            }
          }
          if ( *(_DWORD *)(a1 + 24) >= v14 )
          {
            dword_140464818 = 84;
            return 3221225595LL;
          }
          if ( *(_WORD *)a1 )
          {
            dword_140464818 = 85;
            return 3221225595LL;
          }
          if ( (*(_BYTE *)(a2 + 20) & 7) != 0 )
          {
            dword_140464818 = 86;
            return 3221225595LL;
          }
          if ( !MiLegacyImageArchitecture(*(_WORD *)(a2 + 4)) )
          {
            if ( (v17 & 1) != 0 )
            {
              dword_140464818 = 88;
              return 3221225595LL;
            }
            if ( (*(_WORD *)(v16 + 60) & 0x140) != 0x140 )
            {
              dword_140464818 = 89;
              return 3221225595LL;
            }
            return 0LL;
          }
          v19 = *(_WORD *)(v16 + 60);
          if ( (((v17 & 1) != 0) & _bittest16(&v19, v18)) == 0 )
            return 0LL;
          dword_140464818 = 87;
        }
        return 3221225595LL;
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
        v10 = *(_DWORD *)(a2 + 204);
        goto LABEL_17;
      }
    }
    v10 = 0;
    *(_DWORD *)(a1 + 96) = 0;
    goto LABEL_17;
  }
  return MiComputeBadImageHeaderType(a2, a3, a4);
}
