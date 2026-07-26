/*
 * XREFs of ndisTranslateOffloadSetsToTasks @ 0x1C00E5140
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0023740 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisTranslateOffloadSetsToTasks(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  bool v4; // bp
  char v5; // di
  char v6; // r14
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // r9d
  int v11; // r10d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // eax
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // edx
  int v22; // r8d
  int v23; // r8d
  int v24; // edx
  unsigned int v25; // edx
  int v26; // r8d

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0xD9u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD **)(a1 + 4128);
  v10 = *(_DWORD *)(a2 + 16);
  if ( v8 == 1 )
  {
    v4 = v9[11] != 0;
    if ( v9[3] || v9[5] )
      v5 = 1;
    if ( v9[15] )
      v6 = 1;
  }
  if ( v10 == 1 && (v9[7] || v9[9]) )
    v5 = 1;
  v9[268] |= 1u;
  v11 = 28;
  v9[264] = 28;
  v9[263] = 1;
  v9[267] = 2;
  v9[269] = 14;
  if ( v4 || v5 == 1 || v6 == 1 )
  {
    v3 = v9 + 270;
    v9[266] = 28;
    v9[271] = 24;
    v9[270] = 1;
  }
  else
  {
    v9[266] = 0;
  }
  if ( v5 )
  {
    v12 = 0;
    v3[2] = 0;
    v3[4] = 16;
    v11 = 64;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    if ( v8 == 1 )
    {
      v13 = v9[4];
      if ( (v13 & 0xC) == 4 )
      {
        v3[5] = 2;
        v12 = 2;
        v13 = v9[4];
      }
      if ( (v13 & 3) == 1 )
      {
        v12 |= 1u;
        v3[5] = v12;
        v13 = v9[4];
      }
      if ( (v13 & 0x30) == 0x10 )
      {
        v12 |= 4u;
        v3[5] = v12;
        v13 = v9[4];
      }
      if ( (v13 & 0xC0) == 0x40 )
      {
        v12 |= 8u;
        v3[5] = v12;
        v13 = v9[4];
      }
      if ( (v13 & 0x300) == 0x100 )
        v3[5] = v12 | 0x10;
      v14 = v9[6];
      if ( (v14 & 0xC) == 4 )
      {
        v3[6] |= 2u;
        v14 = v9[6];
      }
      if ( (v14 & 3) == 1 )
      {
        v3[6] |= 1u;
        v14 = v9[6];
      }
      if ( (v14 & 0x30) == 0x10 )
      {
        v3[6] |= 4u;
        v14 = v9[6];
      }
      if ( (v14 & 0xC0) == 0x40 )
      {
        v3[6] |= 8u;
        v14 = v9[6];
      }
      if ( (v14 & 0x300) == 0x100 )
        v3[6] |= 0x10u;
    }
    if ( v10 == 1 )
    {
      v15 = v9[8];
      if ( (v15 & 0xC) == 4 )
      {
        v3[7] |= 2u;
        v15 = v9[8];
      }
      if ( (v15 & 0x30) == 0x10 )
      {
        v3[7] |= 4u;
        v15 = v9[8];
      }
      if ( (v15 & 0xC0) == 0x40 )
        v3[7] |= 8u;
      v16 = v9[10];
      if ( (v16 & 0xC) == 4 )
      {
        v3[8] |= 2u;
        v16 = v9[10];
      }
      if ( (v16 & 0x30) == 0x10 )
      {
        v3[8] |= 4u;
        v16 = v9[10];
      }
      if ( (v16 & 0xC0) == 0x40 )
        v3[8] |= 8u;
    }
    if ( !v4 && !v6 )
      goto LABEL_93;
    v3 = (_DWORD *)((char *)v3 + (unsigned int)v3[3]);
    v3[1] = 24;
    *v3 = 1;
  }
  if ( v4 )
  {
    v3[2] = 2;
    v3[4] = 16;
    v11 += 36;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    v3[5] = 0;
    v17 = v9[14];
    if ( (v17 & 0xC) == 4 )
    {
      *((_BYTE *)v3 + 33) = 1;
      v17 = v9[14];
    }
    if ( (v17 & 3) == 1 )
      *((_BYTE *)v3 + 32) = 1;
    v3[6] = v9[12];
    v3[7] = v9[13];
    if ( v6 )
    {
      v3 = (_DWORD *)((char *)v3 + (unsigned int)v3[3]);
      v3[1] = 24;
      *v3 = 1;
    }
    else
    {
      v3[3] = 0;
    }
  }
  if ( v6 )
  {
    *((_QWORD *)v3 + 1) = 1LL;
    v3[4] = 24;
    v11 += 44;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    *(_QWORD *)(v3 + 9) = 0LL;
    if ( v9[16] == 1 )
      v3[5] = 1;
    v3[6] = 0;
    if ( v9[18] == 1 )
      v3[7] = 1;
    v18 = v9[19];
    if ( v18 )
      v3[8] = v18;
    v19 = v9[20];
    if ( (v19 & 3) == 1 )
    {
      v3[9] |= 1u;
      v19 = v9[20];
    }
    if ( (v19 & 0xC) == 4 )
    {
      v3[9] |= 2u;
      v19 = v9[20];
    }
    v20 = v3[9];
    if ( (v19 & 0x30) == 0x10 )
    {
      v20 |= 4u;
      v3[9] = v20;
    }
    v21 = v20 & 0xFFFFFFF7;
    v3[9] = v21;
    v22 = v9[20];
    if ( (v22 & 0x300) == 0x100 )
    {
      v21 |= 0x10u;
      v3[9] = v21;
      v22 = v9[20];
    }
    if ( (v22 & 0xC00) == 0x400 )
      v3[9] = v21 | 0x20;
    v23 = v9[21];
    if ( (v23 & 3) == 1 )
    {
      v3[10] |= 1u;
      v23 = v9[21];
    }
    if ( (v23 & 0xC) != 0 )
    {
      v3[10] |= 2u;
      v23 = v9[21];
    }
    if ( (v23 & 0x30) == 0x10 )
    {
      v3[10] |= 4u;
      v23 = v9[21];
    }
    v24 = v3[10];
    if ( (v23 & 0x300) == 0x100 )
    {
      v24 |= 0x10u;
      v3[10] = v24;
    }
    v25 = v24 & 0xFFFFFFDF;
    v3[10] = v25;
    v26 = v9[21];
    if ( (v26 & 0x3000) == 0x1000 )
    {
      v25 |= 0x40u;
      v3[10] = v25;
      v26 = v9[21];
    }
    if ( (v26 & 0xC000) == 0x4000 )
      v3[10] = v25 | 0x80;
LABEL_93:
    v3[3] = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 4128) + 1196LL) = v11;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0xDAu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
}
