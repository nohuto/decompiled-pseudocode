/*
 * XREFs of CmpFilterAcpiDockingState @ 0x1407325B4
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall CmpFilterAcpiDockingState(unsigned __int16 *a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  char v7; // r13
  char v9; // r8
  int v10; // r12d
  int v11; // r10d
  __int64 v13; // rdi
  unsigned int v14; // ecx
  SIZE_T v15; // rax
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // r14d
  __int64 v19; // rax
  char v20; // r11
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // edi
  __int64 v24; // r9
  int v25; // ecx
  char v27; // [rsp+20h] [rbp-38h]
  char v28; // [rsp+24h] [rbp-34h]
  int v29; // [rsp+28h] [rbp-30h]
  int v30; // [rsp+2Ch] [rbp-2Ch]

  v6 = 0LL;
  v7 = 0;
  v30 = 0;
  v9 = 0;
  v27 = 0;
  v10 = a2;
  v28 = 0;
  LOBYTE(a2) = 0;
  v11 = a4;
  v29 = a2;
  if ( a6 && *(_DWORD *)(a6 + 4) )
  {
    do
    {
      v13 = 3 * v6;
      if ( (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == 0 || (*(_DWORD *)(a6 + 24 * v6 + 12) & 3) == (*a1 & 3) )
      {
        v14 = *(_DWORD *)(a6 + 24 * v6 + 16);
        if ( v14 == a1[1] )
        {
          v15 = RtlCompareMemory(a1 + 2, *(const void **)(a6 + 24 * v6 + 24), v14);
          v11 = a4;
          v9 = v28;
          if ( *(_DWORD *)(a6 + 24 * v6 + 16) == v15 )
          {
            v16 = 0;
            if ( *(_DWORD *)(a5 + 4) )
            {
              v17 = *(_DWORD *)(a6 + 24 * v6 + 8);
              v18 = v29;
              do
              {
                v19 = 32LL * v16;
                if ( *(_DWORD *)(v19 + a5 + 28) == v17 )
                {
                  *(_DWORD *)(v19 + a5 + 32) |= 2u;
                  v7 = 1;
                }
                if ( v10 == *a1 )
                {
                  v18 = (unsigned __int8)v18;
                  if ( !a3 )
                    v18 = 1;
                }
                v17 = *(_DWORD *)(a6 + 8 * v13 + 8);
                if ( v17 == a4 )
                  v9 = 1;
                ++v16;
              }
              while ( v16 < *(_DWORD *)(a5 + 4) );
              v29 = v18;
              LODWORD(v6) = v30;
              v28 = v9;
            }
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
      v30 = v6;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a6 + 4) );
    LOBYTE(a2) = v29;
    if ( (_BYTE)v29 )
      goto LABEL_20;
  }
  if ( a3 || v7 || v10 != *a1 )
  {
LABEL_20:
    v20 = 0;
  }
  else
  {
    v20 = 1;
    v27 = 1;
    v7 = 1;
  }
  v21 = *(_DWORD *)(a5 + 4);
  v22 = 0;
  if ( v21 )
  {
    v23 = 1;
    while ( 1 )
    {
      v24 = 32LL * v22;
      v25 = *(_DWORD *)(v24 + a5 + 32);
      if ( (_BYTE)a2 )
        break;
      if ( ((v25 & 4) == 0 || v7) && (v25 & 1) == 0 && (v25 & 2) == 0 )
      {
        if ( !v20 )
        {
LABEL_30:
          if ( v21 - v22 != 1 )
          {
            memmove((void *)(v24 + a5 + 8), (const void *)(32LL * v23 + a5 + 8), 32LL * (v21 - v22 - 1));
            v21 = *(_DWORD *)(a5 + 4);
            LOBYTE(a2) = v29;
          }
          *(_DWORD *)(a5 + 4) = --v21;
          goto LABEL_28;
        }
LABEL_26:
        if ( *(_DWORD *)(v24 + a5 + 28) != v11 )
          goto LABEL_30;
      }
      ++v22;
      ++v23;
LABEL_28:
      v11 = a4;
      v9 = v28;
      v20 = v27;
      if ( v22 >= v21 )
        return 0LL;
    }
    if ( (v25 & 2) == 0 )
      goto LABEL_30;
    if ( !v9 )
    {
      ++v22;
      *(_DWORD *)(v24 + a5 + 32) = v25 | 8;
      ++v23;
      v21 = *(_DWORD *)(a5 + 4);
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  return 0LL;
}
