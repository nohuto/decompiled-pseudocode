/*
 * XREFs of HUBMISC_ComputeU2Timeout @ 0x1C002C8E0
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C0021780 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBMISC_ComputeU2Timeout(__int64 *a1)
{
  int v2; // edx
  char v3; // cl
  char v4; // dl
  unsigned __int16 v5; // dx
  char v6; // r13
  _QWORD *v7; // rsi
  bool v8; // zf
  __int64 v9; // rbp
  __int64 v10; // r9
  unsigned int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // r10
  _QWORD *v14; // rax
  char v15; // di
  char v16; // r12
  unsigned int v17; // r15d
  int v18; // r14d
  __int64 v19; // rbx
  __int64 v20; // r10
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rax

  if ( (*((_DWORD *)a1 + 411) & 0x80u) != 0
    || (*(_DWORD *)(*a1 + 40) & 0x8000) != 0
    || (v2 = *((_DWORD *)a1 + 554), (v2 & 0x180) != 0) )
  {
    _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
LABEL_53:
    v4 = 0;
    goto LABEL_54;
  }
  v3 = *((_BYTE *)a1 + 2220);
  *((_DWORD *)a1 + 554) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(16 * v3)) & 0x20;
  if ( (v3 & 8) == 0 )
    goto LABEL_53;
  if ( (a1[204] & 2) != 0 || (v3 & 0x20) == 0 )
  {
    v4 = -1;
    goto LABEL_54;
  }
  if ( v3 < 0 )
  {
    v4 = 1;
    goto LABEL_54;
  }
  if ( (v3 & 0x40) != 0 )
    goto LABEL_10;
  v5 = 0;
  v6 = 0;
  v7 = (_QWORD *)(a1[6] + 16);
  v8 = v7 == (_QWORD *)*v7;
  v9 = *v7 - 8LL;
  v10 = v9;
  while ( !v8 )
  {
    v11 = *(_DWORD *)(v10 + 24);
    v12 = 0;
    if ( v11 )
    {
      v13 = v10 + 72;
      while ( (*(_BYTE *)(*(_QWORD *)v13 + 3LL) & 3) == 0 )
      {
        ++v12;
        v13 += 72LL;
        if ( v12 >= v11 )
          goto LABEL_17;
      }
      v6 = 1;
      break;
    }
LABEL_17:
    v14 = *(_QWORD **)(v10 + 8);
    v8 = v7 == v14;
    v10 = (__int64)(v14 - 1);
  }
  v15 = 0;
  v16 = 0;
  if ( v7 == (_QWORD *)*v7 )
    goto LABEL_50;
  do
  {
    v17 = *(_DWORD *)(v9 + 24);
    v18 = 0;
    if ( v17 )
    {
      v19 = v9 + 72;
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        v21 = *(char *)(*(_QWORD *)v19 + 2LL) >= 0 ? *((_WORD *)a1 + 1102) : *((_WORD *)a1 + 1099);
        if ( (*(_BYTE *)(v20 + 3) & 3) == 0 )
          break;
        switch ( *(_BYTE *)(v20 + 3) & 3 )
        {
          case 1:
            if ( v21 > 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6) )
            {
              _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
              goto LABEL_53;
            }
LABEL_37:
            v22 = 1;
            break;
          case 2:
            goto LABEL_33;
          case 3:
            if ( (*(_BYTE *)(v20 + 3) & 0x30) != 0
              || (v16 = 1, v21 <= 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6)) )
            {
LABEL_33:
              v23 = 5 * v21;
LABEL_39:
              v22 = v23;
              break;
            }
            v15 = 1;
            v22 = 255;
            break;
          default:
            v22 = 0;
            break;
        }
        if ( v5 > v22 )
          v22 = v5;
        v19 += 72LL;
        v5 = v22;
        if ( ++v18 >= v17 )
          goto LABEL_43;
      }
      if ( !v6 )
      {
        v23 = 5 * v21;
        goto LABEL_39;
      }
      goto LABEL_37;
    }
LABEL_43:
    v24 = *(_QWORD **)(v9 + 8);
    v9 = (__int64)(v24 - 1);
  }
  while ( v7 != v24 );
  if ( v15 )
  {
    v4 = -1;
    goto LABEL_54;
  }
  if ( v16 && *((_BYTE *)a1 + 2214) )
    *((_BYTE *)a1 + 2214) = -1;
  if ( v5 < 0xFE00u )
  {
LABEL_50:
    v4 = HIBYTE(v5) + 1;
    goto LABEL_54;
  }
LABEL_10:
  v4 = -2;
LABEL_54:
  v25 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    LODWORD(v25) = *((_DWORD *)a1 + 408);
    if ( (v25 & 2) == 0 )
    {
      LOBYTE(v25) = *((_BYTE *)a1 + 2214) - 1;
      if ( (unsigned __int8)v25 <= 0xFDu && v4 == -1 )
      {
        v4 = 0;
        _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
      }
    }
  }
  *((_BYTE *)a1 + 2215) = v4;
  return v25;
}
