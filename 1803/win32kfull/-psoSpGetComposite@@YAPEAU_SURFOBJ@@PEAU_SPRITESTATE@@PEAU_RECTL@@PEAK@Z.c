/*
 * XREFs of ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0250EEC
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00FE72C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010505C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 */

struct _SURFOBJ *__fastcall psoSpGetComposite(struct _SPRITESTATE *a1, struct _RECTL *a2, unsigned int *a3)
{
  SURFOBJ *v6; // rbx
  signed int ClearBits; // eax
  ULONG v8; // edi
  int v9; // r15d
  __int64 v10; // rbp
  __int64 v11; // r10
  signed int v12; // r8d
  signed int v13; // r9d
  int v14; // edx
  signed int v15; // eax
  int v16; // ecx
  signed int v17; // eax
  int v18; // ecx
  struct _SURFOBJ *Surface; // rax
  char v21; // [rsp+60h] [rbp+8h] BYREF

  *a3 = -1;
  v6 = 0LL;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v21, (struct _SPRITESTATE *)((char *)a1 + 688));
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
LABEL_22:
    if ( v8 != -1 )
    {
      *a3 = v8;
      RtlSetBits((PRTL_BITMAP)((char *)a1 + 664), v8, 1u);
    }
    goto LABEL_24;
  }
  vSpDeleteSurface(v6);
  if ( v8 != -1 )
    *((_QWORD *)a1 + v10 + 19) = 0LL;
  v11 = *((_QWORD *)a1 + 1);
  v12 = -1;
  v13 = -1;
  while ( v11 )
  {
    v14 = *(_DWORD *)(v11 + 88) - *(_DWORD *)(v11 + 80);
    v15 = v14;
    if ( v14 <= v12 )
      v15 = v12;
    v16 = *(_DWORD *)(v11 + 92) - *(_DWORD *)(v11 + 84);
    v11 = *(_QWORD *)(v11 + 24);
    v12 = v15;
    v17 = v16;
    if ( v16 <= v13 )
      v17 = v13;
    v18 = v14 * v16;
    v13 = v17;
    if ( v18 <= v9 )
      v18 = v9;
    v9 = v18;
  }
  Surface = psoSpCreateSurface(a1, 0, v12, v13);
  v6 = Surface;
  if ( Surface )
  {
    if ( v8 != -1 )
      *((_QWORD *)a1 + v10 + 19) = Surface;
    Surface->fjBitmap |= 4u;
    goto LABEL_22;
  }
LABEL_24:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v21);
  return v6;
}
