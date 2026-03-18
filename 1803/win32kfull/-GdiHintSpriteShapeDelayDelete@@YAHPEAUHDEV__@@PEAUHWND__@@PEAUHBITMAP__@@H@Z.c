/*
 * XREFs of ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C024A5E0
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025057C (-pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02505E4 (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0250618 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall GdiHintSpriteShapeDelayDelete(HDEV a1, HWND a2, HBITMAP a3, int a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  HDEV v8; // r13
  int v9; // r14d
  const struct _SPRITESTATE *v10; // rcx
  struct _METASPRITE *v11; // rbp
  int v12; // r9d
  __int64 v13; // rdi
  struct SPRITE *v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  struct SPRITE *v17; // rdi
  int v18; // ebx
  _BYTE v20[72]; // [rsp+20h] [rbp-48h] BYREF
  HDEV v21; // [rsp+70h] [rbp+8h] BYREF
  HBITMAP hsurf; // [rsp+80h] [rbp+18h]
  int v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  hsurf = a3;
  v21 = a1;
  v5 = 0;
  v6 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v20, (struct PDEVOBJ *)&v21);
  v8 = v21;
  v9 = 0;
  v10 = (const struct _SPRITESTATE *)(v21 + 20);
  if ( *((_DWORD *)v21 + 35) )
  {
    v11 = pSpGetMetaSpriteDelayDelete(v10, a2, 0LL);
    if ( v11 )
    {
      LODWORD(v13) = 0;
      if ( v12 )
      {
        do
        {
          v14 = (struct SPRITE *)*((_QWORD *)v11 + (unsigned int)v13 + 3);
          v23 = *(_DWORD *)v14 & 0x200;
          v6 = pSpHintSpriteShape(v14, hsurf, 0);
          if ( !v6 )
          {
            while ( (_DWORD)v13 )
            {
              v13 = (unsigned int)(v13 - 1);
              pSpHintSpriteShape(*((struct SPRITE **)v11 + v13 + 3), 0LL, 0);
            }
            goto LABEL_22;
          }
          if ( !v23 && (**((_DWORD **)v11 + (unsigned int)v13 + 3) & 0x200) != 0 )
            v9 = 1;
          LODWORD(v13) = v13 + 1;
        }
        while ( (unsigned int)v13 < *((_DWORD *)v8 + 35) );
        v15 = *((_DWORD *)v11 + 4);
        if ( hsurf )
          v16 = v15 | 0x40;
        else
          v16 = v15 & 0xFFFFFFBF;
        *((_DWORD *)v11 + 4) = v16;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v17 = pSpGetSpriteDelayDelete(v10, a2, 0LL);
    v18 = *(_DWORD *)v17;
    v6 = pSpHintSpriteShape(v17, a3, 0);
    if ( (v18 & 0x200) == 0 && (*(_DWORD *)v17 & 0x200) != 0 )
    {
      v9 = 1;
LABEL_19:
      if ( v9 == 1 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
    }
  }
  v5 = v6;
LABEL_22:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v20);
  return v5;
}
