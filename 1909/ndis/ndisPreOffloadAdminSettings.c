/*
 * XREFs of ndisPreOffloadAdminSettings @ 0x1C0022100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ndisUpdateOffloadKeywords @ 0x1C0070C64 (ndisUpdateOffloadKeywords.c)
 */

unsigned __int8 __fastcall ndisPreOffloadAdminSettings(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rdi
  char v6; // al
  int v7; // eax
  bool v8; // cf
  __int64 v9; // rax
  int v10; // eax
  int updated; // eax
  unsigned __int8 v12; // cl
  bool v13; // cf
  unsigned __int8 v14; // al
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax

  v1 = *a1;
  v3 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      221,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_68;
  }
  if ( !*a1 )
  {
    v4 = 0;
    goto LABEL_68;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x14u )
  {
    *(_DWORD *)(v3 + 56) = 20;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_68;
  }
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_BYTE *)(v5 + 1);
  switch ( v6 )
  {
    case 1:
      if ( *(_BYTE *)v5 == 0x80 )
      {
        v7 = 0;
        v8 = *(_WORD *)(v5 + 2) < 0x14u;
        goto LABEL_12;
      }
LABEL_39:
      v7 = -1073676267;
      *((_DWORD *)a1 + 10) = -1073676267;
LABEL_40:
      if ( v7 )
        goto LABEL_68;
      goto LABEL_41;
    case 2:
      if ( *(_DWORD *)(v3 + 48) < 0x16u )
      {
        *(_DWORD *)(v3 + 56) = 22;
LABEL_17:
        *((_DWORD *)a1 + 10) = -1073676268;
        goto LABEL_68;
      }
      if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 2u )
        goto LABEL_39;
      v7 = 0;
      v8 = *(_WORD *)(v5 + 2) < 0x16u;
      goto LABEL_12;
    case 3:
      if ( *(_DWORD *)(v3 + 48) < 0x1Au )
      {
        *(_DWORD *)(v3 + 56) = 26;
        goto LABEL_17;
      }
      if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 3u )
        goto LABEL_39;
      v7 = 0;
      v8 = *(_WORD *)(v5 + 2) < 0x1Au;
LABEL_12:
      if ( !v8 )
        goto LABEL_40;
      goto LABEL_39;
    case 4:
      if ( *(_DWORD *)(v3 + 48) < 0x20u )
      {
        *(_DWORD *)(v3 + 56) = 32;
        goto LABEL_17;
      }
      if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 4u )
        goto LABEL_39;
      v7 = 0;
      v8 = *(_WORD *)(v5 + 2) < 0x20u;
      goto LABEL_12;
  }
  if ( v6 != 5 )
  {
    *((_DWORD *)a1 + 10) = -1073676267;
    goto LABEL_68;
  }
  if ( *(_DWORD *)(v3 + 48) < 0x22u )
  {
    *(_DWORD *)(v3 + 56) = 34;
    goto LABEL_17;
  }
  if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 5u || *(_WORD *)(v5 + 2) < 0x22u )
    goto LABEL_39;
LABEL_41:
  v9 = *(_QWORD *)(v1 + 4096);
  if ( v9 && *(_BYTE *)(v1 + 32) >= 6u )
  {
    if ( *(_BYTE *)(v9 + 5) && *(_BYTE *)(v5 + 1) >= 3u )
      *(_WORD *)(v5 + 22) = 257;
    v10 = *(_DWORD *)(v5 + 16);
    if ( (v10 & 1) != 0 )
    {
      *(_DWORD *)(v5 + 16) = v10 & 0xFFFFFFFE;
    }
    else
    {
      updated = ndisUpdateOffloadKeywords(v1);
      *((_DWORD *)a1 + 10) = updated;
      if ( updated )
        goto LABEL_68;
    }
    v12 = *(_BYTE *)(v1 + 32);
    v13 = v12 < 6u;
    if ( v12 > 6u )
      goto LABEL_65;
    if ( v12 == 6 )
    {
      v14 = *(_BYTE *)(v1 + 33);
      if ( v14 >= 0x53u )
      {
LABEL_65:
        v4 = 0;
        goto LABEL_68;
      }
      if ( v14 >= 0x32u )
      {
        if ( *(_BYTE *)(v5 + 1) >= 5u )
        {
          *(_DWORD *)(v3 + 88) |= 0x400000u;
          *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
          v17 = *(_WORD *)(v5 + 2);
          *(_BYTE *)(v5 + 1) = 4;
          *(_WORD *)(v3 + 234) = v17;
          *(_WORD *)(v5 + 2) = 32;
        }
        goto LABEL_65;
      }
      if ( v14 >= 0x1Eu )
      {
        if ( *(_BYTE *)(v5 + 1) >= 4u )
        {
          *(_DWORD *)(v3 + 88) |= 0x400000u;
          *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
          v16 = *(_WORD *)(v5 + 2);
          *(_BYTE *)(v5 + 1) = 3;
          *(_WORD *)(v3 + 234) = v16;
          *(_WORD *)(v5 + 2) = 26;
        }
        goto LABEL_65;
      }
      if ( v14 )
      {
        if ( *(_BYTE *)(v5 + 1) >= 3u )
        {
          *(_DWORD *)(v3 + 88) |= 0x400000u;
          *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
          v15 = *(_WORD *)(v5 + 2);
          *(_BYTE *)(v5 + 1) = 2;
          *(_WORD *)(v3 + 234) = v15;
          *(_WORD *)(v5 + 2) = 22;
        }
        goto LABEL_65;
      }
      v13 = 0;
    }
    if ( !v13 && *(_BYTE *)(v5 + 1) >= 2u )
    {
      *(_DWORD *)(v3 + 88) |= 0x400000u;
      *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
      v18 = *(_WORD *)(v5 + 2);
      *(_BYTE *)(v5 + 1) = 1;
      *(_WORD *)(v3 + 234) = v18;
      *(_WORD *)(v5 + 2) = 20;
    }
    goto LABEL_65;
  }
  *((_DWORD *)a1 + 10) = -1073741637;
LABEL_68:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDEu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      v4);
  return v4;
}
