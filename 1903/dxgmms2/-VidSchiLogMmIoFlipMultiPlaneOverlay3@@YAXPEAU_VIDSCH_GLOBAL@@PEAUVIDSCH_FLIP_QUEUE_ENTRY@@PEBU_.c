/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C002ABC4
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002A6D4 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqqXR2qqddddddddtqt @ 0x1C002C898 (McTemplateK0pqqXR2qqddddddddtqt.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq @ 0x1C002D020 (McTemplateK0pqqxpxqqqddddddddddddqqtqq.c)
 *     McTemplateK0tqDR1DR1DR1DR1 @ 0x1C002DC04 (McTemplateK0tqDR1DR1DR1DR1.c)
 */

void __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  int *v11; // r14
  unsigned int **v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // r12
  int *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r15
  unsigned int v23; // r14d
  __int64 v24; // r9
  unsigned int v25; // edi
  unsigned int v26; // edx
  unsigned int v27; // r10d
  unsigned int v28; // r9d
  __int64 v29; // rcx
  char v30; // [rsp+48h] [rbp-128h]
  int v31; // [rsp+F0h] [rbp-80h]
  int v33; // [rsp+F8h] [rbp-78h]
  __int128 v34; // [rsp+100h] [rbp-70h]
  __int128 v36; // [rsp+118h] [rbp-58h]
  _QWORD v37[10]; // [rsp+130h] [rbp-40h] BYREF
  _BYTE v38[64]; // [rsp+180h] [rbp+10h] BYREF
  _BYTE v39[64]; // [rsp+1C0h] [rbp+50h] BYREF
  _BYTE v40[64]; // [rsp+200h] [rbp+90h] BYREF
  _BYTE v41[64]; // [rsp+240h] [rbp+D0h] BYREF

  if ( bTracingEnabled )
  {
    v6 = *(_QWORD *)(a3 + 32);
    LOBYTE(v7) = 0;
    LOBYTE(v8) = 0;
    v34 = 0uLL;
    LOBYTE(v9) = 0;
    v36 = 0uLL;
    LOBYTE(v10) = 0;
    if ( v6 )
    {
      v34 = *(_OWORD *)(v6 + 4);
      v9 = *(_QWORD *)(v6 + 12);
      v7 = *(_QWORD *)(v6 + 4);
      v36 = *(_OWORD *)(v6 + 20);
      v10 = *(_QWORD *)(v6 + 28);
      v8 = *(_QWORD *)(v6 + 20);
    }
    v31 = 0;
    v11 = *(int **)(a3 + 48);
    if ( v11 )
      v31 = *v11;
    memset(v37, 0, sizeof(v37));
    v15 = *(_DWORD *)(a3 + 20);
    if ( v15 )
    {
      v12 = *(unsigned int ***)(a3 + 24);
      v14 = v15;
      do
      {
        v16 = *v12++;
        v13 = *v16;
        v37[v13] = *((_QWORD *)v16 + 1);
        --v14;
      }
      while ( v14 );
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v30 = v7;
      v17 = a1;
      McTemplateK0pqqXR2qqddddddddtqt(
        v31,
        (_DWORD)v12,
        v14,
        *(_QWORD *)(a1 + 16),
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a1 + 140),
        (__int64)v37,
        *(_DWORD *)(a3 + 12),
        *(_DWORD *)(a3 + 16),
        v30,
        v9,
        SBYTE4(v34),
        SBYTE12(v34),
        v8,
        v10,
        SBYTE4(v36),
        SBYTE12(v36),
        v11 != 0LL,
        v31,
        (a2[284] & 0x800) != 0);
    }
    else
    {
      v17 = a1;
    }
    v18 = 0LL;
    if ( *(_DWORD *)(a3 + 20) )
    {
      v19 = a4;
      while ( 1 )
      {
        v20 = *(int **)(*(_QWORD *)(a3 + 24) + 8 * v18);
        LODWORD(v21) = *v20;
        v33 = *v20;
        if ( (v20[4] & 1) != 0 )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq(
            (unsigned __int128)0LL >> 96,
            0,
            v21,
            *(_QWORD *)(v17 + 16),
            *(_DWORD *)(a3 + 8),
            v21,
            v33,
            0,
            0,
            0,
            a2[264],
            a2[270],
            0,
            0,
            0,
            (unsigned __int128)0LL >> 96,
            0,
            0,
            0,
            (unsigned __int128)0LL >> 96,
            0,
            0,
            0,
            (unsigned __int128)0LL >> 96,
            0,
            v19,
            0,
            0,
            0);
LABEL_29:
        v17 = a1;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *(_DWORD *)(a3 + 20) )
          return;
      }
      if ( !v20[7] )
        goto LABEL_29;
      v22 = *((_QWORD *)v20 + 17);
      v23 = v20[32];
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v24 = **((_QWORD **)v20 + 4);
        McTemplateK0pqqxpxqqqddddddddddddqqtqq(
          *(unsigned __int16 *)(v24 + 16),
          (_DWORD)v20,
          v21,
          *(_QWORD *)(v17 + 16),
          *(_DWORD *)(a3 + 8),
          v21,
          v33,
          *(_QWORD *)(v24 + 8),
          *(_QWORD *)(v24 + 24),
          *(_WORD *)(v24 + 16),
          a2[264],
          a2[270],
          v20[15],
          v20[17],
          v20[16],
          v20[18],
          v20[19],
          v20[21],
          v20[20],
          v20[22],
          v20[23],
          v20[25],
          v20[24],
          v20[26],
          v20[29],
          v19,
          1,
          v20[31],
          v20[32]);
      }
      v25 = 0;
      if ( !v23 )
        goto LABEL_29;
      while ( 1 )
      {
        v26 = v23 - v25;
        if ( v23 - v25 > 0x10 )
          break;
        v27 = v23 - v25;
        if ( v26 )
          goto LABEL_24;
LABEL_26:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0tqDR1DR1DR1DR1(
            v13,
            v26,
            v21,
            v26 <= 0x10,
            v27,
            (__int64)v41,
            (__int64)v40,
            (__int64)v39,
            (__int64)v38);
        v25 += 16;
        if ( v25 >= v23 )
          goto LABEL_29;
      }
      v27 = 16;
LABEL_24:
      v21 = 0LL;
      v28 = 0;
      do
      {
        v29 = v28 + v25;
        ++v28;
        v13 = 2 * v29;
        v21 += 4LL;
        *(_DWORD *)&v40[v21 + 60] = *(_DWORD *)(v22 + 8 * v13);
        *(_DWORD *)&v39[v21 + 60] = *(_DWORD *)(v22 + 8 * v13 + 8);
        *(_DWORD *)&v38[v21 + 60] = *(_DWORD *)(v22 + 8 * v13 + 4);
        *(_DWORD *)((char *)&v37[9] + v21 + 4) = *(_DWORD *)(v22 + 8 * v13 + 12);
      }
      while ( v28 < v27 );
      goto LABEL_26;
    }
  }
}
