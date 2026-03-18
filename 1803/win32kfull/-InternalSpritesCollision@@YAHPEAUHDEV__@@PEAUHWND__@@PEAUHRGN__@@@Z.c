/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C02422E8
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0243480 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0035E6C (GreDeleteSpriteOverlapPresent.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0079BB4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FE490 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C024A344 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C024B5CC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
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
  HRGN hrgn; // [rsp+30h] [rbp-49h]
  unsigned int v17; // [rsp+38h] [rbp-41h]
  unsigned int v18; // [rsp+3Ch] [rbp-3Dh]
  _QWORD v20[3]; // [rsp+48h] [rbp-31h] BYREF
  HANDLE hrgnSrc2; // [rsp+60h] [rbp-19h]
  _QWORD v22[3]; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT prcl; // [rsp+80h] [rbp+7h] BYREF

  hrgnSrc2 = a3;
  v4 = 0;
  v18 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 0);
  if ( !v20[0]
    || (v5 = *((_DWORD *)a1 + 644),
        prcl.left = v5 + *((_DWORD *)a1 + 30),
        v6 = v5 + *((_DWORD *)a1 + 32),
        v7 = *((_DWORD *)a1 + 645),
        prcl.right = v6,
        prcl.top = v7 + *((_DWORD *)a1 + 31),
        prcl.bottom = v7 + *((_DWORD *)a1 + 33),
        RGNOBJ::bInside((RGNOBJ *)v20, (struct _RECTL *)&prcl) == 2) )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
    if ( *((_DWORD *)a1 + 34) )
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
                     *((_DWORD *)a1 + 30),
                     *((_DWORD *)a1 + 31),
                     *((_DWORD *)a1 + 32),
                     *((_DWORD *)a1 + 33)) )
              {
                SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
                if ( *((_QWORD *)a1 + 140) )
                  vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 20), 0);
                SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 50));
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, RectRgn, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, hrgn, 1);
                *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 97);
                if ( v22[0] && v20[0] )
                  v17 = RGNOBJAPI::iCombine((RGNOBJAPI *)v22, (struct RGNOBJ *)v20, (struct RGNOBJ *)&prcl, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
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
                  if ( (unsigned int)EngOffsetRgn(RectRgn, *((_DWORD *)a1 + 644), *((_DWORD *)a1 + 645)) > 1 )
                  {
                    if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, hrgnSrc2, 1) <= 1 )
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
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
  }
  return v4;
}
