/*
 * XREFs of ndisFillOffloadCapsInTasks @ 0x1C0044E6C
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C0047F64 (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisFillOffloadCapsInTasks(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int *v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v8; // r11
  int v9; // r10d
  _DWORD *v10; // rcx
  int v11; // r8d
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0xE7u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 28;
  v10 = *(_DWORD **)(a1 + 4128);
  v11 = *(_DWORD *)(v8 + 16);
  v12 = v8 + 28;
  *(_DWORD *)(v8 + 12) = 28;
  if ( v10[58] )
  {
    *(_DWORD *)(v8 + 32) = 24;
    *(_DWORD *)v12 = 1;
    v4 = v8 + 48;
    *(_DWORD *)(v8 + 36) = 2;
    v2 = v8 + 28;
    *(_DWORD *)(v8 + 44) = 16;
    *(_DWORD *)(v8 + 40) = 36;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_DWORD *)(v8 + 52) = v10[59];
    *(_DWORD *)(v8 + 56) = v10[60];
    v13 = v10[61];
    if ( (v13 & 3) == 1 )
    {
      *(_BYTE *)(v8 + 60) = 1;
      v13 = v10[61];
    }
    if ( (v13 & 0xC) == 4 )
      *(_BYTE *)(v8 + 61) = 1;
    v14 = *(unsigned int *)(v8 + 40);
    v12 += v14;
    v9 = v14 + 28;
  }
  if ( v10[52] || v10[50] || v10[56] || v10[54] )
  {
    *(_DWORD *)(v12 + 8) = 0;
    v3 = (int *)(v12 + 20);
    *(_DWORD *)(v12 + 4) = 24;
    *(_DWORD *)v12 = 1;
    v9 += 36;
    *(_DWORD *)(v12 + 16) = 16;
    v2 = v12;
    *(_DWORD *)(v12 + 12) = 36;
    *(_QWORD *)(v12 + 20) = 0LL;
    *(_QWORD *)(v12 + 28) = 0LL;
    if ( v11 == 2 )
    {
      if ( (v10[50] & 2) != 0 )
      {
        v15 = v10[51];
        v16 = 0;
        if ( (v15 & 3) == 1 )
        {
          *v3 = 1;
          v16 = 1;
          v15 = v10[51];
        }
        if ( (v15 & 0xC) == 4 )
        {
          v16 |= 2u;
          *v3 = v16;
          v15 = v10[51];
        }
        if ( (v15 & 0x30) == 0x10 )
        {
          v16 |= 4u;
          *v3 = v16;
          v15 = v10[51];
        }
        if ( (v15 & 0xC0) == 0x40 )
        {
          v16 |= 8u;
          *v3 = v16;
          v15 = v10[51];
        }
        if ( (v15 & 0x300) == 0x100 )
          *v3 = v16 | 0x10;
      }
      if ( (v10[52] & 2) != 0 )
      {
        v17 = v10[53];
        if ( (v17 & 3) == 1 )
        {
          *(_DWORD *)(v12 + 24) |= 1u;
          v17 = v10[53];
        }
        if ( (v17 & 0xC) == 4 )
        {
          *(_DWORD *)(v12 + 24) |= 2u;
          v17 = v10[53];
        }
        if ( (v17 & 0x30) == 0x10 )
        {
          *(_DWORD *)(v12 + 24) |= 4u;
          v17 = v10[53];
        }
        if ( (v17 & 0xC0) == 0x40 )
        {
          *(_DWORD *)(v12 + 24) |= 8u;
          v17 = v10[53];
        }
        if ( (v17 & 0x300) == 0x100 )
          *(_DWORD *)(v12 + 24) |= 0x10u;
      }
      if ( (v10[56] & 2) != 0 )
      {
        v18 = v10[57];
        if ( (v18 & 0xC) == 4 )
        {
          *(_DWORD *)(v12 + 32) |= 2u;
          v18 = v10[57];
        }
        if ( (v18 & 0x30) == 0x10 )
        {
          *(_DWORD *)(v12 + 32) |= 4u;
          v18 = v10[57];
        }
        if ( (v18 & 0xC0) == 0x40 )
          *(_DWORD *)(v12 + 32) |= 8u;
      }
      if ( (v10[54] & 2) != 0 )
      {
        v19 = v10[55];
        if ( (v19 & 0xC) == 4 )
        {
          *(_DWORD *)(v12 + 28) |= 2u;
          v19 = v10[55];
        }
        if ( (v19 & 0x30) == 0x10 )
        {
          *(_DWORD *)(v12 + 28) |= 4u;
          v19 = v10[55];
        }
        if ( (v19 & 0xC0) == 0x40 )
          *(_DWORD *)(v12 + 28) |= 8u;
      }
    }
    v12 += *(unsigned int *)(v12 + 12);
  }
  if ( v10[62] )
  {
    *(_DWORD *)(v12 + 4) = 24;
    v6 = v12 + 20;
    *(_DWORD *)v12 = 1;
    *(_DWORD *)(v12 + 8) = 1;
    v9 += 44;
    *(_DWORD *)(v12 + 16) = 24;
    v2 = v12;
    *(_DWORD *)(v12 + 12) = 44;
    *(_QWORD *)(v12 + 20) = 0LL;
    *(_QWORD *)(v12 + 28) = 0LL;
    *(_QWORD *)(v12 + 36) = 0LL;
    *(_DWORD *)(v12 + 20) = v10[63];
    *(_DWORD *)(v12 + 24) = v10[64];
    *(_DWORD *)(v12 + 28) = v10[65];
    *(_DWORD *)(v12 + 32) = v10[66];
    v20 = v10[67];
    if ( (v20 & 3) == 1 )
    {
      *(_DWORD *)(v12 + 36) |= 1u;
      v20 = v10[67];
    }
    if ( (v20 & 0xC) == 4 )
    {
      *(_DWORD *)(v12 + 36) |= 2u;
      v20 = v10[67];
    }
    if ( (v20 & 0x30) == 0x10 )
    {
      *(_DWORD *)(v12 + 36) |= 4u;
      v20 = v10[67];
    }
    if ( (v20 & 0x300) == 0x100 )
    {
      *(_DWORD *)(v12 + 36) |= 0x10u;
      v20 = v10[67];
    }
    if ( (v20 & 0xC00) == 0x400 )
      *(_DWORD *)(v12 + 36) |= 0x20u;
    v21 = v10[68];
    if ( (v21 & 0x300) == 0x100 )
    {
      *(_DWORD *)(v12 + 40) |= 0x10u;
      v21 = v10[68];
    }
    if ( (v21 & 0x3000) == 0x1000 )
    {
      *(_DWORD *)(v12 + 40) |= 0x40u;
      v21 = v10[68];
    }
    if ( (v21 & 0xC000) == 0x4000 )
    {
      *(_DWORD *)(v12 + 40) |= 0x80u;
      v21 = v10[68];
    }
    if ( (v21 & 3) == 1 )
    {
      *(_DWORD *)(v12 + 40) |= 1u;
      v21 = v10[68];
    }
    if ( (v21 & 0xC0) == 0x40 )
    {
      *(_DWORD *)(v12 + 40) |= 8u;
      v21 = v10[68];
    }
    if ( (v21 & 0x30) == 0x10 )
    {
      *(_DWORD *)(v12 + 40) |= 4u;
      v21 = v10[68];
    }
    if ( (v21 & 0xC) == 4 )
      *(_DWORD *)(v12 + 40) |= 2u;
  }
  if ( !v4 && !v3 )
    *(_DWORD *)(v8 + 12) &= -(v6 != 0);
  if ( v2 )
    *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(a2 + 52) = v9;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0xE8u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1);
}
