/*
 * XREFs of ndisFillOffloadCapsInTasks @ 0x1C006AA54
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C006EE08 (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall ndisFillOffloadCapsInTasks(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v8; // r11
  int v9; // r10d
  _DWORD *v10; // rcx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  _UNKNOWN **result; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  v6 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      212,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1);
  }
  v8 = *(_QWORD *)(v5 + 40);
  v9 = 28;
  v10 = *(_DWORD **)(a1 + 4096);
  v11 = *(_DWORD *)(v8 + 16);
  v12 = v8 + 28;
  *(_DWORD *)(v8 + 12) = 28;
  if ( v10[65] )
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
    *(_DWORD *)(v8 + 52) = v10[66];
    *(_DWORD *)(v8 + 56) = v10[67];
    LODWORD(a2) = v10[68];
    if ( (a2 & 3) == 1 )
    {
      *(_BYTE *)(v8 + 60) = 1;
      LODWORD(a2) = v10[68];
    }
    if ( (a2 & 0xC) == 4 )
      *(_BYTE *)(v8 + 61) = 1;
    v13 = *(unsigned int *)(v8 + 40);
    v12 += v13;
    v9 = v13 + 28;
  }
  if ( v10[59] || v10[57] || v10[63] || v10[61] )
  {
    *(_DWORD *)(v12 + 8) = 0;
    v3 = (_DWORD *)(v12 + 20);
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
      if ( (v10[57] & 2) != 0 )
      {
        v14 = v10[58];
        LODWORD(a2) = 0;
        if ( (v14 & 3) == 1 )
        {
          *v3 = 1;
          LODWORD(a2) = 1;
          v14 = v10[58];
        }
        if ( (v14 & 0xC) == 4 )
        {
          LODWORD(a2) = a2 | 2;
          *v3 = a2;
          v14 = v10[58];
        }
        if ( (v14 & 0x30) == 0x10 )
        {
          LODWORD(a2) = a2 | 4;
          *v3 = a2;
          v14 = v10[58];
        }
        if ( (v14 & 0xC0) == 0x40 )
        {
          LODWORD(a2) = a2 | 8;
          *v3 = a2;
          v14 = v10[58];
        }
        if ( (v14 & 0x300) == 0x100 )
        {
          LODWORD(a2) = a2 | 0x10;
          *v3 = a2;
        }
      }
      if ( (v10[59] & 2) != 0 )
      {
        v15 = v10[60];
        if ( (v15 & 3) == 1 )
        {
          *(_DWORD *)(v12 + 24) |= 1u;
          v15 = v10[60];
        }
        if ( (v15 & 0xC) == 4 )
        {
          *(_DWORD *)(v12 + 24) |= 2u;
          v15 = v10[60];
        }
        if ( (v15 & 0x30) == 0x10 )
        {
          *(_DWORD *)(v12 + 24) |= 4u;
          v15 = v10[60];
        }
        if ( (v15 & 0xC0) == 0x40 )
        {
          *(_DWORD *)(v12 + 24) |= 8u;
          v15 = v10[60];
        }
        LODWORD(a2) = v15 & 0x300;
        if ( (_DWORD)a2 == 256 )
          *(_DWORD *)(v12 + 24) |= 0x10u;
      }
      if ( (v10[63] & 2) != 0 )
      {
        LODWORD(a2) = v10[64];
        if ( (a2 & 0xC) == 4 )
        {
          *(_DWORD *)(v12 + 32) |= 2u;
          LODWORD(a2) = v10[64];
        }
        if ( (a2 & 0x30) == 0x10 )
        {
          *(_DWORD *)(v12 + 32) |= 4u;
          LODWORD(a2) = v10[64];
        }
        if ( (a2 & 0xC0) == 0x40 )
          *(_DWORD *)(v12 + 32) |= 8u;
      }
      if ( (v10[61] & 2) != 0 )
      {
        LODWORD(a2) = v10[62];
        if ( (a2 & 0xC) == 4 )
        {
          *(_DWORD *)(v12 + 28) |= 2u;
          LODWORD(a2) = v10[62];
        }
        if ( (a2 & 0x30) == 0x10 )
        {
          *(_DWORD *)(v12 + 28) |= 4u;
          LODWORD(a2) = v10[62];
        }
        if ( (a2 & 0xC0) == 0x40 )
          *(_DWORD *)(v12 + 28) |= 8u;
      }
    }
    v12 += *(unsigned int *)(v12 + 12);
  }
  if ( v10[69] )
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
    *(_DWORD *)(v12 + 20) = v10[70];
    *(_DWORD *)(v12 + 24) = v10[71];
    *(_DWORD *)(v12 + 28) = v10[72];
    *(_DWORD *)(v12 + 32) = v10[73];
    v16 = v10[74];
    if ( (v16 & 3) == 1 )
    {
      *(_DWORD *)(v12 + 36) |= 1u;
      v16 = v10[74];
    }
    if ( (v16 & 0xC) == 4 )
    {
      *(_DWORD *)(v12 + 36) |= 2u;
      v16 = v10[74];
    }
    if ( (v16 & 0x30) == 0x10 )
    {
      *(_DWORD *)(v12 + 36) |= 4u;
      v16 = v10[74];
    }
    if ( (v16 & 0x300) == 0x100 )
    {
      *(_DWORD *)(v12 + 36) |= 0x10u;
      v16 = v10[74];
    }
    if ( (v16 & 0xC00) == 0x400 )
      *(_DWORD *)(v12 + 36) |= 0x20u;
    LODWORD(a2) = v10[75];
    if ( (a2 & 0x300) == 0x100 )
    {
      *(_DWORD *)(v12 + 40) |= 0x10u;
      LODWORD(a2) = v10[75];
    }
    if ( (a2 & 0x3000) == 0x1000 )
    {
      *(_DWORD *)(v12 + 40) |= 0x40u;
      LODWORD(a2) = v10[75];
    }
    if ( (a2 & 0xC000) == 0x4000 )
    {
      *(_DWORD *)(v12 + 40) |= 0x80u;
      LODWORD(a2) = v10[75];
    }
    if ( (a2 & 3) == 1 )
    {
      *(_DWORD *)(v12 + 40) |= 1u;
      LODWORD(a2) = v10[75];
    }
    if ( (a2 & 0xC0) == 0x40 )
    {
      *(_DWORD *)(v12 + 40) |= 8u;
      LODWORD(a2) = v10[75];
    }
    if ( (a2 & 0x30) == 0x10 )
    {
      *(_DWORD *)(v12 + 40) |= 4u;
      LODWORD(a2) = v10[75];
    }
    if ( (a2 & 0xC) == 4 )
      *(_DWORD *)(v12 + 40) |= 2u;
  }
  if ( !v4 && !v3 )
    *(_DWORD *)(v8 + 12) &= -(v6 != 0);
  if ( v2 )
    *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v5 + 52) = v9;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          a2,
                          11,
                          213,
                          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                          a1);
  }
  return result;
}
