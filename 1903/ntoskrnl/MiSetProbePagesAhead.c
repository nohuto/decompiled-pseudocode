/*
 * XREFs of MiSetProbePagesAhead @ 0x1400F0A70
 * Callers:
 *     MiProbeLeafFrame @ 0x1400F0464 (MiProbeLeafFrame.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLegitimatePageForDriversToMap @ 0x140156E60 (MiLegitimatePageForDriversToMap.c)
 */

char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rax
  int v3; // r15d
  unsigned __int64 v4; // rcx
  __int64 v5; // r11
  __int64 v6; // rdi
  unsigned __int64 i; // rbp
  __int64 v8; // r10
  signed __int64 v9; // rdx
  _QWORD *v10; // rcx
  signed __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 64);
  LOBYTE(v2) = v1 & 0xF;
  if ( (v1 & 0xF) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 88);
    if ( v3 != 3 )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v4 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL);
      LOBYTE(v2) = 40;
      if ( ((*(_QWORD *)(8 * v4 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
      {
        v6 = 0LL;
        v19 = *(_QWORD *)(v5 + 16);
        for ( i = v19 + 8; (i & 0xFFF) != 0; i += 8LL )
        {
          if ( i > *(_QWORD *)(v5 + 24) )
            break;
          v18 = MI_READ_PTE_LOCK_FREE(i);
          LOBYTE(v2) = v18;
          if ( (v18 & 0xF0FF000000000FFFuLL) != v8 )
            break;
          v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL);
          LOBYTE(v2) = 40;
          if ( ((*(_QWORD *)(v9 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
            break;
          v10 = (_QWORD *)qword_140465BC8;
          v11 = v9 - 0x58000000000LL;
          if ( qword_140465BC8 && ((*(_QWORD *)(v11 + 40) >> 54) & 7) == 1 )
          {
            v14 = (__int64)((unsigned __int128)(v9 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
            v15 = (v14 >> 63) + v14;
            while ( v10 )
            {
              v16 = v10[3];
              if ( v15 < v16 )
              {
                v10 = (_QWORD *)*v10;
              }
              else
              {
                LOBYTE(v2) = v15 - v16;
                if ( v15 - v16 < v10[4] )
                  goto LABEL_16;
                v10 = (_QWORD *)v10[1];
              }
            }
          }
          LODWORD(v2) = MiLegitimatePageForDriversToMap(v11);
          if ( (int)v2 < 0 )
            break;
          if ( !v3 )
          {
            LOBYTE(v2) = (*(_QWORD *)(v11 + 40) >> 54) & 7;
            if ( (_BYTE)v2 != 1 && *(__int64 *)(v11 + 8) >= 0 )
              break;
            LOBYTE(v2) = 0;
            if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 && (v1 & 0x10) != 0 )
              break;
          }
          ++v6;
        }
LABEL_16:
        v12 = v19;
        if ( v6 )
        {
          *(_QWORD *)(v5 + 160) = -1LL;
          v13 = v12 << 25 >> 16;
          *(_QWORD *)(v5 + 144) = v13;
          v2 = (v6 << 12) + v13 + 4095;
          *(_QWORD *)(v5 + 152) = v2;
          *(_DWORD *)(v5 + 64) = v1 | 0x20;
        }
      }
    }
  }
  return v2;
}
