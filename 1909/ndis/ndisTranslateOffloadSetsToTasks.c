/*
 * XREFs of ndisTranslateOffloadSetsToTasks @ 0x1C007061C
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003CC40 (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall ndisTranslateOffloadSetsToTasks(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v3; // rbx
  bool v4; // bp
  char v5; // di
  char v6; // r14
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // r9d
  int v11; // r10d
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // edx
  int v19; // r8d
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  _UNKNOWN **result; // rax

  v2 = a2;
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      198,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1);
  }
  v8 = *(_DWORD *)(v2 + 4);
  v9 = *(_DWORD **)(a1 + 4096);
  v10 = *(_DWORD *)(v2 + 16);
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
  v9[296] |= 1u;
  v11 = 28;
  v9[292] = 28;
  v9[291] = 1;
  v9[295] = 2;
  v9[297] = 14;
  if ( v4 || v5 == 1 || v6 == 1 )
  {
    v3 = v9 + 298;
    v9[294] = 28;
    v9[299] = 24;
    v9[298] = 1;
  }
  else
  {
    v9[294] = 0;
  }
  if ( v5 )
  {
    LODWORD(a2) = 0;
    v3[2] = 0;
    v3[4] = 16;
    v11 = 64;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    if ( v8 == 1 )
    {
      v12 = v9[4];
      if ( (v12 & 0xC) == 4 )
      {
        v3[5] = 2;
        LODWORD(a2) = 2;
        v12 = v9[4];
      }
      if ( (v12 & 3) == 1 )
      {
        LODWORD(a2) = a2 | 1;
        v3[5] = a2;
        v12 = v9[4];
      }
      if ( (v12 & 0x30) == 0x10 )
      {
        LODWORD(a2) = a2 | 4;
        v3[5] = a2;
        v12 = v9[4];
      }
      if ( (v12 & 0xC0) == 0x40 )
      {
        LODWORD(a2) = a2 | 8;
        v3[5] = a2;
        v12 = v9[4];
      }
      if ( (v12 & 0x300) == 0x100 )
        v3[5] = a2 | 0x10;
      v13 = v9[6];
      if ( (v13 & 0xC) == 4 )
      {
        v3[6] |= 2u;
        v13 = v9[6];
      }
      if ( (v13 & 3) == 1 )
      {
        v3[6] |= 1u;
        v13 = v9[6];
      }
      if ( (v13 & 0x30) == 0x10 )
      {
        v3[6] |= 4u;
        v13 = v9[6];
      }
      if ( (v13 & 0xC0) == 0x40 )
      {
        v3[6] |= 8u;
        v13 = v9[6];
      }
      LODWORD(a2) = v13 & 0x300;
      if ( (_DWORD)a2 == 256 )
        v3[6] |= 0x10u;
    }
    if ( v10 == 1 )
    {
      v14 = v9[8];
      if ( (v14 & 0xC) == 4 )
      {
        v3[7] |= 2u;
        v14 = v9[8];
      }
      if ( (v14 & 0x30) == 0x10 )
      {
        v3[7] |= 4u;
        v14 = v9[8];
      }
      if ( (v14 & 0xC0) == 0x40 )
        v3[7] |= 8u;
      LODWORD(a2) = v9[10];
      if ( (a2 & 0xC) == 4 )
      {
        v3[8] |= 2u;
        LODWORD(a2) = v9[10];
      }
      if ( (a2 & 0x30) == 0x10 )
      {
        v3[8] |= 4u;
        LODWORD(a2) = v9[10];
      }
      if ( (a2 & 0xC0) == 0x40 )
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
    LODWORD(a2) = v9[14];
    if ( (a2 & 0xC) == 4 )
    {
      *((_BYTE *)v3 + 33) = 1;
      LODWORD(a2) = v9[14];
    }
    if ( (a2 & 3) == 1 )
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
    v15 = v9[19];
    if ( v15 )
      v3[8] = v15;
    v16 = v9[20];
    if ( (v16 & 3) == 1 )
    {
      v3[9] |= 1u;
      v16 = v9[20];
    }
    if ( (v16 & 0xC) == 4 )
    {
      v3[9] |= 2u;
      v16 = v9[20];
    }
    v17 = v3[9];
    if ( (v16 & 0x30) == 0x10 )
      v17 |= 4u;
    v18 = v17 & 0xFFFFFFF7;
    v3[9] = v18;
    v19 = v9[20];
    if ( (v19 & 0x300) == 0x100 )
    {
      v18 |= 0x10u;
      v3[9] = v18;
      v19 = v9[20];
    }
    if ( (v19 & 0xC00) == 0x400 )
      v3[9] = v18 | 0x20;
    v20 = v9[21];
    if ( (v20 & 3) == 1 )
    {
      v3[10] |= 1u;
      v20 = v9[21];
    }
    if ( (v20 & 0xC) != 0 )
    {
      v3[10] |= 2u;
      v20 = v9[21];
    }
    if ( (v20 & 0x30) == 0x10 )
    {
      v3[10] |= 4u;
      v20 = v9[21];
    }
    v21 = v3[10];
    if ( (v20 & 0x300) == 0x100 )
      v21 |= 0x10u;
    LODWORD(a2) = v21 & 0xFFFFFFDF;
    v3[10] = a2;
    v22 = v9[21];
    if ( (v22 & 0x3000) == 0x1000 )
    {
      LODWORD(a2) = a2 | 0x40;
      v3[10] = a2;
      v22 = v9[21];
    }
    if ( (v22 & 0xC000) == 0x4000 )
    {
      LODWORD(a2) = a2 | 0x80;
      v3[10] = a2;
    }
LABEL_93:
    v3[3] = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 4096) + 1308LL) = v11;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          a2,
                          11,
                          199,
                          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                          a1);
  }
  return result;
}
