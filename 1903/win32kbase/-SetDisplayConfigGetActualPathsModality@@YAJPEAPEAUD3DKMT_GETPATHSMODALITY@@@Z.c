/*
 * XREFs of ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00502FC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C0051164 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall SetDisplayConfigGetActualPathsModality(struct D3DKMT_GETPATHSMODALITY **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  int *v5; // rdx
  int v6; // eax
  int PathsModality; // r15d
  struct D3DKMT_GETPATHSMODALITY *v8; // rdi
  unsigned int v9; // r8d
  unsigned int v10; // esi
  unsigned int i; // r14d
  _DWORD *v12; // rbx
  int v14; // edx
  _DWORD *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  int v28; // ecx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD v35[4]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v36[272]; // [rsp+48h] [rbp-C0h] BYREF

  v2 = 0;
  memset(v35, 0, sizeof(v35));
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD))qword_1C02152E0)(v35, 0LL) == -1073741789 )
  {
    v35[3] = ExAllocatePoolWithTag(PagedPool, 1076LL * LODWORD(v35[2]), 0x7774656Cu);
    if ( v35[3] )
    {
      HIDWORD(v35[2]) = v35[2];
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD))qword_1C02152E0)(v35, 0LL) == -1073741789
        && (v3 = LODWORD(v35[2]), LODWORD(v35[2]) <= HIDWORD(v35[2])) )
      {
        if ( LODWORD(v35[2]) )
        {
          v4 = LODWORD(v35[2]);
          v5 = (int *)(v35[3] + 1072LL);
          do
          {
            v6 = *v5;
            v3 = v2++;
            v5 += 269;
            if ( (v6 & 1) == 0 )
              v2 = v3;
            --v4;
          }
          while ( v4 );
        }
      }
      else
      {
        v35[2] = 0LL;
      }
    }
  }
  PathsModality = GetPathsModality(v3, a1, 16777280LL, (unsigned __int16)v2);
  if ( PathsModality >= 0 )
  {
    v8 = *a1;
    if ( v2 )
    {
      v9 = v35[2];
      v10 = 0;
      for ( i = *((unsigned __int16 *)v8 + 10); v10 < v9; ++v10 )
      {
        if ( i >= *((unsigned __int16 *)v8 + 11) )
          break;
        v12 = (_DWORD *)(v35[3] + 1076LL * v10);
        if ( (v12[268] & 1) != 0 )
        {
          v14 = 0;
          if ( *((_WORD *)v8 + 10) )
          {
            v15 = (_DWORD *)((char *)v8 + 68);
            while ( *(v15 - 1) != *v12 || *v15 != v12[1] || v15[2] != v12[2] )
            {
              ++v14;
              v15 += 68;
              if ( v14 >= *((unsigned __int16 *)v8 + 10) )
                goto LABEL_28;
            }
          }
          else
          {
LABEL_28:
            v16 = (__int64)v8 + 272 * i;
            memset(v36, 0, sizeof(v36));
            v17 = 2LL;
            v18 = (_OWORD *)(v16 + 48);
            v19 = v36;
            do
            {
              v20 = v19[1];
              *v18 = *v19;
              v21 = v19[2];
              v18[1] = v20;
              v22 = v19[3];
              v18[2] = v21;
              v23 = v19[4];
              v18[3] = v22;
              v24 = v19[5];
              v18[4] = v23;
              v25 = v19[6];
              v18[5] = v24;
              v26 = v19[7];
              v19 += 8;
              v18[6] = v25;
              v18 += 8;
              *(v18 - 1) = v26;
              --v17;
            }
            while ( v17 );
            *v18 = *v19;
            *(_DWORD *)(v16 + 76) = v12[2];
            *(_QWORD *)(v16 + 64) = *(_QWORD *)v12;
            v27 = 0x1000000000000000LL;
            *(_BYTE *)(v16 + 177) = v12[268] & 2 | ((v12[268] & 4) != 0);
            v28 = v12[264];
            if ( v28 != 5 )
              v27 = 0LL;
            v29 = v27 | ((unsigned __int64)(v12[268] & 0x10) << 53);
            v30 = 0x1000000000000000LL;
            if ( v28 != 3 )
              v30 = 0LL;
            v31 = v30 | v29;
            v32 = 0x800000000000000LL;
            if ( v28 != 4 )
              v32 = 0LL;
            v33 = v32 | v31;
            v34 = 0x508700000000000LL;
            if ( v28 != 2 )
              v34 = 0x108700000000000LL;
            *(_QWORD *)(v16 + 48) |= v34 | v33;
            v9 = v35[2];
            ++i;
          }
        }
      }
      *((_WORD *)v8 + 10) = i;
    }
  }
  if ( v35[3] )
    ExFreePoolWithTag((PVOID)v35[3], 0x7774656Cu);
  return (unsigned int)PathsModality;
}
