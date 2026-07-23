/*
 * XREFs of MiSetProbePagesAhead @ 0x140029710
 * Callers:
 *     MiProbeLeafFrame @ 0x140094BAC (MiProbeLeafFrame.c)
 * Callees:
 *     MiLegitimatePageForDriversToMap @ 0x1400298DC (MiLegitimatePageForDriversToMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rax
  int v3; // r14d
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 i; // rsi
  __int64 v9; // r9
  signed __int64 v10; // rdx
  _QWORD *v11; // rcx
  signed __int64 v12; // rbp
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 64);
  LOBYTE(v2) = v1 & 0xF;
  if ( (v1 & 0xF) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 88);
    if ( v3 != 3 )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v4 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL);
      LOBYTE(v2) = 40;
      if ( ((*(_QWORD *)(8 * v4 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
      {
        v6 = *(_QWORD *)(v5 + 16);
        v7 = 0LL;
        for ( i = v6 + 8; (i & 0xFFF) != 0; i += 8LL )
        {
          if ( i > *(_QWORD *)(v5 + 24) )
            break;
          v18 = MI_READ_PTE_LOCK_FREE(i);
          LOBYTE(v2) = v18;
          if ( (v18 & 0xF0FF000000000FFFuLL) != v9 )
            break;
          v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL);
          LOBYTE(v2) = 40;
          if ( ((*(_QWORD *)(v10 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
            break;
          v11 = (_QWORD *)qword_14043B248;
          v12 = v10 - 0x58000000000LL;
          if ( qword_14043B248 && ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 1 )
          {
            v14 = (__int64)((unsigned __int128)(v10 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
            v15 = (v14 >> 63) + v14;
            while ( v11 )
            {
              v16 = v11[3];
              if ( v15 < v16 )
              {
                v11 = (_QWORD *)*v11;
              }
              else
              {
                LOBYTE(v2) = v15 - v16;
                if ( v15 - v16 < v11[4] )
                  goto LABEL_16;
                v11 = (_QWORD *)v11[1];
              }
            }
          }
          LODWORD(v2) = MiLegitimatePageForDriversToMap(v12);
          if ( (int)v2 < 0 )
            break;
          if ( !v3 )
          {
            LOBYTE(v2) = (*(_QWORD *)(v12 + 40) >> 54) & 7;
            if ( (_BYTE)v2 != 1 && *(__int64 *)(v12 + 8) >= 0 )
              break;
            LOBYTE(v2) = 0;
            if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 && (v1 & 0x10) != 0 )
              break;
          }
          ++v7;
        }
LABEL_16:
        if ( v7 )
        {
          *(_QWORD *)(v5 + 160) = -1LL;
          v13 = v6 << 25 >> 16;
          *(_QWORD *)(v5 + 144) = v13;
          v2 = (v7 << 12) + v13 + 4095;
          *(_QWORD *)(v5 + 152) = v2;
          *(_DWORD *)(v5 + 64) = v1 | 0x20;
        }
      }
    }
  }
  return v2;
}
