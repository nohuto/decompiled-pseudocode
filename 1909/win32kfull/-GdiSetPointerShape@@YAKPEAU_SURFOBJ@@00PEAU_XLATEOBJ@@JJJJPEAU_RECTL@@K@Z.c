/*
 * XREFs of ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027B8A8
 * Callers:
 *     EngSetPointerShape @ 0x1C0106420 (EngSetPointerShape.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00816B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0081A34 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C008282C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B290 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027DE68 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GdiSetPointerShape(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct _RECTL *a9,
        unsigned int a10)
{
  unsigned int v13; // edi
  unsigned int v15; // ebp
  unsigned int v16; // esi
  HDEV hdev; // rbx
  __int64 v18; // r8
  struct _RECTL *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdi
  struct _RECTL *v29; // rsi
  int v30; // ecx
  __int64 *v32[31]; // [rsp+30h] [rbp-F8h] BYREF
  HDEV v33; // [rsp+130h] [rbp+8h] BYREF
  __int64 v34; // [rsp+138h] [rbp+10h] BYREF

  v13 = ((a10 >> 8) & 0xF) + 1;
  v15 = 2;
  if ( (unsigned __int8)(a10 >> 12) )
    v16 = 0x3E8u / (unsigned __int8)(a10 >> 12);
  else
    v16 = 0;
  hdev = a1->hdev;
  v33 = hdev;
  v34 = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  if ( psoSrc || a3 )
  {
    while ( *((_DWORD *)hdev + 293) < v13 )
    {
      Sprite = pSpCreateSprite(hdev, 0LL, 0LL, 0LL);
      if ( !Sprite )
        break;
      if ( !*((_QWORD *)hdev + 150) )
        *((_QWORD *)hdev + 150) = Sprite;
      ++*((_DWORD *)hdev + 293);
      *((_QWORD *)hdev + 151) = Sprite;
    }
    while ( *((_DWORD *)hdev + 293) > v13 )
    {
      v23 = *((_QWORD *)hdev + 151);
      *((_QWORD *)hdev + 151) = *(_QWORD *)(v23 + 24);
      vSpDeleteSprite((struct SPRITE *)v23);
      --*((_DWORD *)hdev + 293);
    }
    v24 = *((_QWORD *)hdev + 150) == 0LL;
    *((_DWORD *)hdev + 295) = v16;
    if ( !v24 )
    {
      v25 = *((_QWORD *)hdev + 151);
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v32, (struct PDEVOBJ *)&v33, v18);
      while ( v25 )
      {
        bSpUpdatePosition((struct SPRITE *)v25, 0LL, 0, 0);
        vSpRedrawSprite((struct SPRITE *)v25);
        v25 = *(_QWORD *)(v25 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v32, v26, v27);
      v28 = *((_QWORD *)hdev + 151);
      v29 = a9;
      while ( v28 )
      {
        if ( !(unsigned int)bSpUpdateCursor((struct SPRITE *)v28, psoSrc, a3, a4, v29) )
        {
          v15 = 0;
          break;
        }
        v28 = *(_QWORD *)(v28 + 24);
      }
      v30 = a6;
      *((_DWORD *)hdev + 290) = a5 - v29->left;
      *((_DWORD *)hdev + 291) = v30 - v29->top;
    }
    GdiMovePointer(a1, a7, a8, v19, 1);
  }
  else
  {
    v20 = *((_QWORD *)hdev + 151);
    *((_QWORD *)hdev + 151) = 0LL;
    *((_QWORD *)hdev + 150) = 0LL;
    *((_DWORD *)hdev + 293) = 0;
    if ( v20 )
    {
      do
      {
        v21 = *(_QWORD *)(v20 + 24);
        vSpDeleteSprite((struct SPRITE *)v20);
        v20 = v21;
      }
      while ( v21 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  return v15;
}
