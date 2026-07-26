/*
 * XREFs of ndisPreOffloadAdminSettings @ 0x1C00BAE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00E56FC (ndisUpdateOffloadKeywords.c)
 */

unsigned __int8 __fastcall ndisPreOffloadAdminSettings(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  char v7; // al
  int v8; // eax
  bool v9; // cf
  __int64 v10; // rax
  int v11; // eax
  unsigned __int8 v12; // cl
  bool v13; // cf
  unsigned __int8 v14; // al
  int updated; // eax
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xF0u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_30;
  if ( !*(_QWORD *)a1 )
    goto LABEL_5;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x14u )
  {
    *(_DWORD *)(v3 + 56) = 20;
    goto LABEL_33;
  }
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_BYTE *)(v6 + 1);
  if ( v7 == 1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_BYTE *)v6 != 0x80 || !*(_BYTE *)(v6 + 1) )
      goto LABEL_48;
    v8 = 0;
    v9 = *(_WORD *)(v6 + 2) < 0x14u;
    goto LABEL_17;
  }
  if ( v7 == 2 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x16u )
    {
      *(_DWORD *)(v3 + 56) = 22;
      goto LABEL_33;
    }
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_BYTE *)v6 != 0x80 || *(_BYTE *)(v6 + 1) < 2u )
      goto LABEL_48;
    v8 = 0;
    v9 = *(_WORD *)(v6 + 2) < 0x16u;
LABEL_17:
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_48;
  }
  if ( v7 != 3 )
  {
    if ( v7 != 4 )
    {
      *(_DWORD *)(a1 + 40) = -1073676267;
      goto LABEL_6;
    }
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x20u )
    {
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) >= 4u && *(_WORD *)(v6 + 2) >= 0x20u )
        goto LABEL_19;
      goto LABEL_48;
    }
    *(_DWORD *)(v3 + 56) = 32;
LABEL_33:
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x1Au )
  {
    *(_DWORD *)(v3 + 56) = 26;
    goto LABEL_33;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) >= 3u )
  {
    v8 = 0;
    v9 = *(_WORD *)(v6 + 2) < 0x1Au;
    goto LABEL_17;
  }
LABEL_48:
  v8 = -1073676267;
  *(_DWORD *)(a1 + 40) = -1073676267;
LABEL_18:
  if ( v8 )
    goto LABEL_6;
LABEL_19:
  v10 = *(_QWORD *)(v1 + 4128);
  if ( !v10 || *(_BYTE *)(v1 + 32) < 6u )
  {
LABEL_30:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(v10 + 5) && *(_BYTE *)(v6 + 1) >= 3u )
    *(_WORD *)(v6 + 22) = 257;
  v11 = *(_DWORD *)(v6 + 16);
  if ( (v11 & 1) != 0 )
  {
    *(_DWORD *)(v6 + 16) = v11 & 0xFFFFFFFE;
    goto LABEL_24;
  }
  updated = ndisUpdateOffloadKeywords(v1, v6, 26LL, 22LL);
  *(_DWORD *)(a1 + 40) = updated;
  if ( !updated )
  {
LABEL_24:
    v12 = *(_BYTE *)(v1 + 32);
    v13 = v12 < 6u;
    if ( v12 <= 6u )
    {
      if ( v12 == 6 )
      {
        v14 = *(_BYTE *)(v1 + 33);
        if ( v14 >= 0x32u )
          goto LABEL_5;
        if ( v14 >= 0x1Eu )
        {
          if ( *(_BYTE *)(v6 + 1) >= 4u )
          {
            *(_DWORD *)(v3 + 88) |= 0x400000u;
            *(_BYTE *)(v3 + 233) = *(_BYTE *)(v6 + 1);
            v17 = *(_WORD *)(v6 + 2);
            *(_BYTE *)(v6 + 1) = 3;
            *(_WORD *)(v3 + 234) = v17;
            *(_WORD *)(v6 + 2) = 26;
          }
          goto LABEL_5;
        }
        if ( v14 )
        {
          if ( *(_BYTE *)(v6 + 1) >= 3u )
          {
            *(_DWORD *)(v3 + 88) |= 0x400000u;
            *(_BYTE *)(v3 + 233) = *(_BYTE *)(v6 + 1);
            v16 = *(_WORD *)(v6 + 2);
            *(_BYTE *)(v6 + 1) = 2;
            *(_WORD *)(v3 + 234) = v16;
            *(_WORD *)(v6 + 2) = 22;
          }
          goto LABEL_5;
        }
        v13 = 0;
      }
      if ( !v13 && *(_BYTE *)(v6 + 1) >= 2u )
      {
        *(_DWORD *)(v3 + 88) |= 0x400000u;
        *(_BYTE *)(v3 + 233) = *(_BYTE *)(v6 + 1);
        v18 = *(_WORD *)(v6 + 2);
        *(_BYTE *)(v6 + 1) = 1;
        *(_WORD *)(v3 + 234) = v18;
        *(_WORD *)(v6 + 2) = 20;
      }
    }
LABEL_5:
    v4 = 0;
  }
LABEL_6:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qdD(0xF1u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, *(_DWORD *)(a1 + 40), v4);
  return v4;
}
