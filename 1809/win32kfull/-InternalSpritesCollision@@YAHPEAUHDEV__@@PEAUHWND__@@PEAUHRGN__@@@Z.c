/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0259F1C
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C025B390 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     GreDeleteSpriteOverlapPresent @ 0x1C001D580 (GreDeleteSpriteOverlapPresent.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001D634 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0096F48 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C02620CC (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0262B10 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall InternalSpritesCollision(HDEV a1, HWND a2, HRGN a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  LONG v6; // ecx
  int v7; // edx
  HRGN RectRgn; // rsi
  HRGN v9; // r14
  HRGN v10; // rax
  HRGN v11; // r13
  HRGN v12; // r12
  int v13; // edi
  HRGN v14; // rax
  HRGN hrgn; // [rsp+30h] [rbp-89h]
  unsigned int v17; // [rsp+38h] [rbp-81h]
  unsigned int v18; // [rsp+3Ch] [rbp-7Dh]
  _QWORD v21[7]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v22[7]; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT prcl; // [rsp+C0h] [rbp+7h] BYREF

  v4 = 0;
  v18 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a3, 0, 0);
  if ( !v21[0]
    || (v5 = *((_DWORD *)a1 + 646),
        prcl.left = v5 + *((_DWORD *)a1 + 32),
        v6 = v5 + *((_DWORD *)a1 + 34),
        v7 = *((_DWORD *)a1 + 647),
        prcl.right = v6,
        prcl.top = v7 + *((_DWORD *)a1 + 33),
        prcl.bottom = v7 + *((_DWORD *)a1 + 35),
        RGNOBJ::bInside((RGNOBJ *)v21, (struct _RECTL *)&prcl) == 2) )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
    if ( *((_DWORD *)a1 + 36) )
    {
      RectRgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      if ( RectRgn )
      {
        hrgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v9 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v10 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v11 = hrgn;
        v12 = v10;
        if ( hrgn )
        {
          if ( v9 )
          {
            if ( v10 )
            {
              v17 = 0;
              if ( EngSetRectRgn(
                     hrgn,
                     *((_DWORD *)a1 + 32),
                     *((_DWORD *)a1 + 33),
                     *((_DWORD *)a1 + 34),
                     *((_DWORD *)a1 + 35)) )
              {
                SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 52));
                if ( *((_QWORD *)a1 + 141) )
                  vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 22), 0);
                SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 52));
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, RectRgn, 0, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, hrgn, 1, 0);
                *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 98);
                if ( v22[0] && v21[0] )
                  v17 = RGNOBJAPI::iCombine((RGNOBJAPI *)v22, (struct RGNOBJ *)v21, (struct RGNOBJ *)&prcl, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v22);
                if ( v17 > 1 )
                {
                  v13 = 0;
                  EngSetRectRgn(v9, 0, 0, 0, 0);
                  if ( !g_pDwmState )
                    GdiGetSpriteClipRgns(a1, v9);
                  EngGetRgnBox(v9, &prcl);
                  if ( !ERECTL::bEmpty((ERECTL *)&prcl) && (unsigned int)EngCombineRgn(v12, RectRgn, v9, 1) > 1 )
                  {
                    v14 = RectRgn;
                    v13 = 1;
                    RectRgn = v12;
                    v12 = v14;
                  }
                  if ( (unsigned int)EngOffsetRgn(RectRgn, *((_DWORD *)a1 + 646), *((_DWORD *)a1 + 647)) > 1 )
                  {
                    if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, a3, 1) <= 1 )
                    {
                      if ( v13 )
                        GreAddSpriteOverlapPresent(a1, a2);
                    }
                    else
                    {
                      v18 = 1;
                      GreDeleteSpriteOverlapPresent(a1, a2);
                    }
                  }
                }
                v11 = hrgn;
              }
            }
          }
          EngDeleteRgn(v11);
        }
        if ( v9 )
          EngDeleteRgn(v9);
        if ( v12 )
          EngDeleteRgn(v12);
        EngDeleteRgn(RectRgn);
      }
    }
    return v18;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
  }
  return v4;
}
