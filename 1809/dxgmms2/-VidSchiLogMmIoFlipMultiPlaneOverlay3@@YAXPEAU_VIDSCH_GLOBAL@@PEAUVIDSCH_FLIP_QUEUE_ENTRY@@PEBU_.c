/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C002A1D0
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0029C98 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0pqqqddddddddtqt @ 0x1C002C610 (McTemplateK0pqqqddddddddtqt.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq @ 0x1C002C90C (McTemplateK0pqqxpxqqqddddddddddddqqtqq.c)
 *     McTemplateK0tqDR1DR1DR1DR1 @ 0x1C002D4F0 (McTemplateK0tqDR1DR1DR1DR1.c)
 */

void __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  char v4; // r10
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // r15d
  __int64 v15; // rsi
  int *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned int v19; // r14d
  __int64 v20; // r9
  unsigned int v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  __int64 v25; // rcx
  int v27; // [rsp+F8h] [rbp-78h]
  _BYTE v29[64]; // [rsp+120h] [rbp-50h] BYREF
  _BYTE v30[64]; // [rsp+160h] [rbp-10h] BYREF
  _BYTE v31[64]; // [rsp+1A0h] [rbp+30h] BYREF
  _BYTE v32[64]; // [rsp+1E0h] [rbp+70h] BYREF

  v4 = a4;
  if ( bTracingEnabled )
  {
    v8 = *(_QWORD *)(a3 + 32);
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 12);
      v9 = *(_QWORD *)(v8 + 4);
      v12 = *(_QWORD *)(v8 + 28);
      v10 = *(_QWORD *)(v8 + 20);
    }
    v13 = *(_QWORD *)(a3 + 48);
    LOBYTE(v14) = 0;
    if ( v13 )
      v14 = *(_DWORD *)v13;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqqqddddddddtqt(
        HIDWORD(v9),
        HIDWORD(v12),
        HIDWORD(v11),
        *(_QWORD *)(a1 + 16),
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12),
        *(_DWORD *)(a3 + 16),
        v9,
        v11,
        SBYTE4(v9),
        SBYTE4(v11),
        v10,
        v12,
        SBYTE4(v10),
        SBYTE4(v12),
        v13 != 0,
        v14,
        (a2[280] & 0x800) != 0);
      v4 = a4;
    }
    v15 = 0LL;
    if ( *(_DWORD *)(a3 + 20) )
    {
      while ( 1 )
      {
        v16 = *(int **)(*(_QWORD *)(a3 + 24) + 8 * v15);
        LODWORD(v17) = *v16;
        v27 = *v16;
        if ( (v16[4] & 1) != 0 )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq(
            a2[264],
            (unsigned __int128)0LL >> 96,
            v17,
            *(_QWORD *)(a1 + 16),
            *(_DWORD *)(a3 + 8),
            v17,
            v27,
            0,
            0,
            0,
            a2[264],
            a2[267],
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
            v4,
            0,
            0,
            0);
LABEL_24:
        v4 = a4;
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= *(_DWORD *)(a3 + 20) )
          return;
      }
      if ( !v16[7] )
        goto LABEL_24;
      v18 = *((_QWORD *)v16 + 17);
      v19 = v16[32];
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v20 = **((_QWORD **)v16 + 4);
        McTemplateK0pqqxpxqqqddddddddddddqqtqq(
          *(unsigned __int16 *)(v20 + 16),
          (_DWORD)v16,
          v17,
          *(_QWORD *)(a1 + 16),
          *(_DWORD *)(a3 + 8),
          v17,
          v27,
          *(_QWORD *)(v20 + 8),
          *(_QWORD *)(v20 + 24),
          *(_WORD *)(v20 + 16),
          a2[264],
          a2[267],
          v16[15],
          v16[17],
          v16[16],
          v16[18],
          v16[19],
          v16[21],
          v16[20],
          v16[22],
          v16[23],
          v16[25],
          v16[24],
          v16[26],
          v16[29],
          v4,
          1,
          v16[31],
          v16[32]);
      }
      v21 = 0;
      if ( !v19 )
        goto LABEL_24;
      while ( 1 )
      {
        v22 = v19 - v21;
        if ( v19 - v21 > 0x10 )
          break;
        v23 = v19 - v21;
        if ( v22 )
          goto LABEL_19;
LABEL_21:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0tqDR1DR1DR1DR1(
            v13,
            v22,
            v17,
            v22 <= 0x10,
            v23,
            (__int64)v32,
            (__int64)v31,
            (__int64)v30,
            (__int64)v29);
        v21 += 16;
        if ( v21 >= v19 )
          goto LABEL_24;
      }
      v23 = 16;
LABEL_19:
      v17 = 0LL;
      v24 = 0;
      do
      {
        v25 = v24 + v21;
        ++v24;
        v13 = 2 * v25;
        v17 += 4LL;
        *(_DWORD *)&v31[v17 + 60] = *(_DWORD *)(v18 + 8 * v13);
        *(_DWORD *)&v30[v17 + 60] = *(_DWORD *)(v18 + 8 * v13 + 8);
        *(_DWORD *)&v29[v17 + 60] = *(_DWORD *)(v18 + 8 * v13 + 4);
        *(_DWORD *)&v29[v17 - 4] = *(_DWORD *)(v18 + 8 * v13 + 12);
      }
      while ( v24 < v23 );
      goto LABEL_21;
    }
  }
}
