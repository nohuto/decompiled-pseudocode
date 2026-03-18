/*
 * XREFs of ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0161CE8
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0280DB4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C02810D0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C003CC10 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C003D63C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

struct _SURFOBJ *__fastcall psoSpGetComposite(struct _SPRITESTATE *a1, struct _RECTL *a2, unsigned int *a3)
{
  SURFOBJ *v6; // rbx
  signed int ClearBits; // eax
  ULONG v8; // edi
  int v9; // r15d
  __int64 v10; // rbp
  __int64 v12; // r10
  signed int v13; // r8d
  signed int v14; // r9d
  int v15; // edx
  signed int v16; // eax
  int v17; // ecx
  signed int v18; // eax
  int v19; // ecx
  struct _SURFOBJ *Surface; // rax
  char v21; // [rsp+60h] [rbp+8h] BYREF

  *a3 = -1;
  v6 = 0LL;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v21, (struct _SPRITESTATE *)((char *)a1 + 688));
  ClearBits = RtlFindClearBits((PRTL_BITMAP)((char *)a1 + 664), 1u, 0);
  v8 = ClearBits;
  v9 = -1;
  if ( ClearBits == -1 )
  {
    v10 = -1LL;
  }
  else
  {
    v6 = (SURFOBJ *)*((_QWORD *)a1 + ClearBits + 19);
    v10 = ClearBits;
  }
  if ( v6 && v6->sizlBitmap.cx >= a2->right - a2->left && v6->sizlBitmap.cy >= a2->bottom - a2->top )
  {
LABEL_6:
    if ( v8 != -1 )
    {
      *a3 = v8;
      RtlSetBits((PRTL_BITMAP)((char *)a1 + 664), v8, 1u);
    }
    goto LABEL_8;
  }
  vSpDeleteSurface(v6);
  if ( v8 != -1 )
    *((_QWORD *)a1 + v10 + 19) = 0LL;
  v12 = *((_QWORD *)a1 + 1);
  v13 = -1;
  v14 = -1;
  while ( v12 )
  {
    v15 = *(_DWORD *)(v12 + 88) - *(_DWORD *)(v12 + 80);
    v16 = v15;
    if ( v15 <= v13 )
      v16 = v13;
    v17 = *(_DWORD *)(v12 + 92) - *(_DWORD *)(v12 + 84);
    v12 = *(_QWORD *)(v12 + 24);
    v13 = v16;
    v18 = v17;
    if ( v17 <= v14 )
      v18 = v14;
    v19 = v15 * v17;
    v14 = v18;
    if ( v19 <= v9 )
      v19 = v9;
    v9 = v19;
  }
  Surface = psoSpCreateSurface(a1, 0, v13, v14);
  v6 = Surface;
  if ( Surface )
  {
    if ( v8 != -1 )
      *((_QWORD *)a1 + v10 + 19) = Surface;
    Surface->fjBitmap |= 4u;
    goto LABEL_6;
  }
LABEL_8:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v21);
  return v6;
}
