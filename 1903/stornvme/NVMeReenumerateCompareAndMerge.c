/*
 * XREFs of NVMeReenumerateCompareAndMerge @ 0x1C0016F2C
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C00175F0 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 * Callees:
 *     memset @ 0x1C0005400 (memset.c)
 *     NVMeIsLunActive @ 0x1C0011D24 (NVMeIsLunActive.c)
 */

void __fastcall NVMeReenumerateCompareAndMerge(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char v5; // r11
  unsigned int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // r8d
  unsigned int v10; // r15d
  unsigned int v11; // esi
  char v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edx
  char v17; // r10
  unsigned __int16 i; // di
  unsigned __int16 j; // si
  unsigned int v20; // eax
  unsigned int k; // edi
  unsigned int v22; // ecx
  __int64 *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // roff
  __int64 v28; // rax
  unsigned int m; // edi
  _DWORD *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // r15d
  unsigned int v33; // esi
  __int64 *v34; // rdi
  __int64 v35; // rcx
  int v36; // edx
  unsigned int v37; // r10d
  unsigned int v38; // r9d
  __int64 v39; // r8
  _QWORD v40[10]; // [rsp+20h] [rbp-50h] BYREF
  char v41; // [rsp+B8h] [rbp+48h]
  int v42; // [rsp+C0h] [rbp+50h]

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 192);
    v41 = 0;
    v42 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    if ( v2 )
    {
      do
      {
        if ( NVMeIsLunActive(*(_QWORD *)(a1 + 8LL * v6 + 1648)) )
        {
          *(_DWORD *)(v8 + 20) |= 0x20u;
          ++v7;
        }
        v2 = *(_DWORD *)(a1 + 192);
        v6 = v9 + 1;
      }
      while ( v6 < v2 );
      v42 = v7;
    }
    v10 = *(_DWORD *)(a2 + 4);
    v11 = 0;
    if ( v10 <= v2 )
      v10 = v2;
    if ( v10 )
    {
      do
      {
        v12 = 0;
        v13 = 0LL;
        v14 = *(_QWORD *)(a2 + 8LL * v11 + 8);
        if ( v14 )
        {
          do
          {
            if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 192) )
              break;
            v15 = *(_QWORD *)(a1 + 8 * v13 + 1648);
            if ( v15 && *(_DWORD *)(v15 + 16) == *(_DWORD *)(v14 + 16) )
            {
              *(_DWORD *)(v15 + 20) &= ~0x20u;
              v12 = 1;
              v16 = *(_DWORD *)(v14 + 20);
              v42 = v7 - 1;
              if ( *(_DWORD *)(v15 + 52) != *(_DWORD *)(v14 + 52) )
              {
                v16 |= 0x50u;
                v41 = 1;
                *(_DWORD *)(v14 + 20) = v16;
              }
              v17 = v16;
              if ( (_DWORD)v13 != v11
                || *(_QWORD *)(v15 + 56) != *(_QWORD *)(v14 + 56)
                || *(_WORD *)(v15 + 92) != *(_WORD *)(v14 + 92)
                || *(_BYTE *)(v15 + 64) != *(_BYTE *)(v14 + 64)
                || *(_DWORD *)(v15 + 48) != *(_DWORD *)(v14 + 48)
                || *(_BYTE *)(v15 + 65) != *(_BYTE *)(v14 + 65)
                || *(_BYTE *)(v15 + 66) != *(_BYTE *)(v14 + 66)
                || *(_BYTE *)(v15 + 10) != *(_BYTE *)(v14 + 10) )
              {
                v41 = 1;
                v17 = v16 | 0x10;
                *(_DWORD *)(v14 + 20) = v16 | 0x10;
              }
              if ( (v17 & 0x10) == 0 )
              {
                StorPortExtendedFunction(1LL, a1, v14);
                v14 = 0LL;
                *(_QWORD *)(a2 + 8LL * v11 + 8) = 0LL;
              }
              v7 = v42;
            }
            v13 = (unsigned int)(v13 + 1);
          }
          while ( v14 );
          v5 = v41;
        }
        ++v11;
        if ( v12 != 1 && v14 )
        {
          *(_DWORD *)(v14 + 20) |= 8u;
          v5 = 1;
          v41 = 1;
        }
      }
      while ( v11 < v10 );
    }
    if ( v7 || v5 )
    {
      StorPortPause(a1, 120LL);
      *(_DWORD *)(a1 + 20) |= 0x100u;
      for ( i = 0; i < *(_WORD *)(a1 + 272); ++i )
      {
        for ( j = 0; j < 0x3E8u; ++j )
        {
          StorPortExtendedFunction(81LL, a1, 10000LL);
          if ( !*(_WORD *)(136LL * i + *(_QWORD *)(a1 + 760) + 128) )
            break;
        }
      }
    }
    v20 = *(_DWORD *)(a2 + 4);
    k = 0;
    v22 = *(_DWORD *)(a1 + 192);
    if ( v20 <= v22 )
      v20 = *(_DWORD *)(a1 + 192);
    if ( v20 )
    {
      v23 = (__int64 *)(a2 + 8);
      v24 = v20;
      do
      {
        v25 = *v23;
        if ( *v23 && (*(_DWORD *)(v25 + 20) & 8) != 0 )
        {
          for ( k = 0; k < 0xFF; ++k )
          {
            v26 = *(_QWORD *)(a1 + 8LL * k + 1648);
            if ( !v26 )
              break;
            if ( (*(_DWORD *)(v26 + 20) & 4) != 0 )
              break;
          }
          if ( k >= 0xFF )
          {
            memset(v40, 0, 0x48uLL);
            v40[6] = *(unsigned int *)(a2 + 4);
            v40[0] = 0x4800000100LL;
            HIDWORD(v40[1]) = 0;
            BYTE4(v40[3]) = 1;
            v40[4] = 0x100000006LL;
            LODWORD(v40[5]) = 4;
            StorPortExtendedFunction(16LL, a1, v40);
          }
          else
          {
            *(_QWORD *)(a1 + 8LL * k + 1648) = v25;
            *(_BYTE *)(v25 + 10) = k;
            v27 = (_DWORD *)(*(_QWORD *)(a1 + 8LL * k + 1648) + 20LL);
            *v27 |= 0x80u;
            v28 = *(_QWORD *)(a1 + 8LL * k + 1648);
            *(_DWORD *)(v28 + 20) &= ~8u;
          }
        }
        ++v23;
        --v24;
      }
      while ( v24 );
      v22 = *(_DWORD *)(a1 + 192);
    }
    if ( k >= v22 )
    {
      v22 = 255;
      if ( (unsigned int)(unsigned __int16)k + 1 < 0xFF )
        v22 = (unsigned __int16)k + 1;
      *(_DWORD *)(a1 + 192) = v22;
    }
    for ( m = 0; m < v22; ++m )
    {
      v30 = *(_DWORD **)(a1 + 8LL * m + 1648);
      if ( v30 && (v30[5] & 0x20) != 0 )
        memset(v30, 0, 0x68uLL);
      v22 = *(_DWORD *)(a1 + 192);
    }
    v31 = *(_DWORD *)(a2 + 4);
    v32 = 0;
    v33 = v31;
    if ( v31 <= v22 )
      v33 = v22;
    if ( v33 )
    {
      v34 = (__int64 *)(a2 + 8);
      do
      {
        v35 = *v34;
        if ( *v34 )
        {
          v36 = *(_DWORD *)(v35 + 20);
          if ( (v36 & 0x80u) != 0 )
          {
            *(_DWORD *)(v35 + 20) = v36 & 0xFFFFFF7F;
          }
          else
          {
            v37 = *(_DWORD *)(a1 + 192);
            v38 = 0;
            if ( v37 )
            {
              while ( 1 )
              {
                v39 = *(_QWORD *)(a1 + 8LL * v38 + 1648);
                if ( v39 )
                {
                  if ( *(_DWORD *)(v39 + 16) == *(_DWORD *)(v35 + 16) && (v36 & 0x10) != 0 )
                    break;
                }
                if ( ++v38 >= v37 )
                  goto LABEL_79;
              }
              *(_DWORD *)(v35 + 20) = v36 & 0xFFFFFFEF;
              *(_OWORD *)v39 = *(_OWORD *)v35;
              *(_OWORD *)(v39 + 16) = *(_OWORD *)(v35 + 16);
              *(_OWORD *)(v39 + 32) = *(_OWORD *)(v35 + 32);
              *(_OWORD *)(v39 + 48) = *(_OWORD *)(v35 + 48);
              *(_OWORD *)(v39 + 64) = *(_OWORD *)(v35 + 64);
              *(_OWORD *)(v39 + 80) = *(_OWORD *)(v35 + 80);
              *(_QWORD *)(v39 + 96) = *(_QWORD *)(v35 + 96);
              *(_BYTE *)(v39 + 10) = v38;
              StorPortExtendedFunction(1LL, a1, v35);
              *v34 = 0LL;
            }
          }
        }
LABEL_79:
        ++v32;
        ++v34;
      }
      while ( v32 < v33 );
      v31 = *(_DWORD *)(a2 + 4);
    }
    *(_DWORD *)(a1 + 180) = v31;
    if ( v42 || v41 )
    {
      StorPortNotification(7LL, a1, 0LL);
      *(_DWORD *)(a1 + 20) &= ~0x100u;
      StorPortResume(a1);
    }
    StorPortExtendedFunction(1LL, a1, a2);
    *(_DWORD *)(a1 + 3732) &= ~2u;
  }
}
