/*
 * XREFs of ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D500
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C004D384 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
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
  int v13; // edx
  _DWORD *v14; // rcx
  char *v15; // r13
  __int64 v16; // rdx
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD v35[4]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v36[272]; // [rsp+48h] [rbp-C0h] BYREF

  v2 = 0;
  memset(v35, 0, sizeof(v35));
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD))qword_1C01CDE20)(v35, 0LL) == -1073741789 )
  {
    v35[3] = ExAllocatePoolWithTag(PagedPool, 1076LL * LODWORD(v35[2]), 0x7774656Cu);
    if ( v35[3] )
    {
      HIDWORD(v35[2]) = v35[2];
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD))qword_1C01CDE20)(v35, 0LL) == -1073741789
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
  PathsModality = GetPathsModality(v3, a1, 16777280LL, v2);
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
          v13 = 0;
          if ( *((_WORD *)v8 + 10) )
          {
            v14 = (_DWORD *)((char *)v8 + 68);
            while ( *(v14 - 1) != *v12 || *v14 != v12[1] || v14[2] != v12[2] )
            {
              ++v13;
              v14 += 68;
              if ( v13 >= *((unsigned __int16 *)v8 + 10) )
                goto LABEL_23;
            }
          }
          else
          {
LABEL_23:
            v15 = (char *)v8 + 272 * i;
            memset(v36, 0, sizeof(v36));
            v16 = 2LL;
            v17 = v15 + 48;
            v18 = v36;
            do
            {
              v19 = v18[1];
              *v17 = *v18;
              v20 = v18[2];
              v17[1] = v19;
              v21 = v18[3];
              v17[2] = v20;
              v22 = v18[4];
              v17[3] = v21;
              v23 = v18[5];
              v17[4] = v22;
              v24 = v18[6];
              v17[5] = v23;
              v25 = v18[7];
              v18 += 8;
              v17[6] = v24;
              v17 += 8;
              *(v17 - 1) = v25;
              --v16;
            }
            while ( v16 );
            *v17 = *v18;
            *((_DWORD *)v15 + 19) = v12[2];
            *((_QWORD *)v15 + 8) = *(_QWORD *)v12;
            v26 = 0x1000000000000000LL;
            v15[177] = v12[268] & 2 | ((v12[268] & 4) != 0);
            v27 = v12[264];
            if ( v27 != 5 )
              v26 = 0LL;
            v28 = v26 | ((unsigned __int64)(v12[268] & 0x10) << 53);
            v29 = 0x1000000000000000LL;
            if ( v27 != 3 )
              v29 = 0LL;
            v30 = v29 | v28;
            v31 = 0x800000000000000LL;
            if ( v27 != 4 )
              v31 = 0LL;
            v32 = v31 | v30;
            v33 = 0x508700000000000LL;
            if ( v27 != 2 )
              v33 = 0x108700000000000LL;
            *((_QWORD *)v15 + 6) |= v33 | v32;
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
