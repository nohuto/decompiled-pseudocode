/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C024CC4C
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C0256B74 (bMoveDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C007B280 (GreUpdateSprite.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C02499C4 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(void **a1, const struct _RECTL *a2)
{
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  HDEV HDEV; // rax
  int v12; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v13; // [rsp+88h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-70h] BYREF
  char v15; // [rsp+98h] [rbp-68h]
  int v16; // [rsp+9Ch] [rbp-64h]
  struct tagPOINT v17[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct PALETTE *v18; // [rsp+B0h] [rbp-50h] BYREF
  int v19; // [rsp+B8h] [rbp-48h]
  _QWORD v20[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-20h] BYREF
  char v22; // [rsp+E8h] [rbp-18h]
  int v23; // [rsp+ECh] [rbp-14h]
  struct PALETTE *v24; // [rsp+F0h] [rbp-10h] BYREF
  int v25; // [rsp+F8h] [rbp-8h]
  _QWORD v26[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL si128; // [rsp+110h] [rbp+10h] BYREF
  struct _RECTL v28; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v29[2]; // [rsp+130h] [rbp+30h] BYREF
  int v30; // [rsp+140h] [rbp+40h]
  unsigned __int64 v31; // [rsp+144h] [rbp+44h]
  unsigned __int64 v32; // [rsp+14Ch] [rbp+4Ch]

  updated = 0;
  memset(v20, 0, sizeof(v20));
  v13.cx = a2->right - a2->left;
  v13.cy = a2->bottom - a2->top;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v6 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 1LL);
    v17[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v17, v6);
    if ( v17[0] )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)v17);
      v25 = 0;
      v24 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v24, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v19 = 0;
        v18 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)v20 + 4) = v13;
          v19 = 1;
          LODWORD(v20[0]) = 6;
          v20[2] = *(_QWORD *)v18;
          LODWORD(v20[3]) = 1;
          v14 = 0LL;
          v15 = 0;
          v16 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v20, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v14 )
          {
            LOBYTE(v7) = 5;
            HmgSetOwner(*(_QWORD *)(v14 + 32), 0LL, v7);
            v29[0] = 0x8C0038708C003870uLL;
            v29[1] = 0x8C0038708C003870uLL;
            v31 = 0x8C0038708C003870uLL;
            v32 = 0x8C0038708C003870uLL;
            v20[1] = 0x2400000003LL;
            v30 = 1174412344;
            v20[0] = 0x300000006LL;
            v20[2] = *(_QWORD *)v18;
            LODWORD(v20[3]) = 1;
            v21 = 0LL;
            v22 = 0;
            v23 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v21, (struct _DEVBITMAPINFO *)v20, v29, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              if ( v21 )
              {
                *(struct tagSIZE *)&v28.right = v13;
                v26[0] = 0x100000001LL;
                v26[1] = 0x100000001LL;
                *(_QWORD *)&v28.left = 0LL;
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v17,
                            v18,
                            v24,
                            (struct _SURFOBJ *)(v14 + 24),
                            (struct _SURFOBJ *)(v21 + 24),
                            &v28,
                            &si128,
                            (struct _MARGINS *)v26);
                if ( updated )
                {
                  v8 = *(_QWORD *)(v14 + 32);
                  *(_DWORD *)(v14 + 112) |= 0x4000000u;
                  v9 = GreSelectBitmap(v6, v8);
                  *(_DWORD *)(v14 + 112) &= ~0x4000000u;
                  v17[0] = *(struct tagPOINT *)&a2->left;
                  v12 = 33488896;
                  *(_QWORD *)&v28.left = 0LL;
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[145],
                              0LL,
                              v17,
                              &v13,
                              v6,
                              (struct tagPOINT *)&v28,
                              0,
                              (struct _BLENDFUNCTION *)&v12,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v14 + 112) |= 0x4000000u;
                  GreSelectBitmap(v6, v9);
                  *(_DWORD *)(v14 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v21);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v18);
          SURFMEM::~SURFMEM((SURFMEM *)&v14);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v24);
    }
    GreSetDCOwnerEx(v6, 2147483650LL, 0LL, 1LL);
    GreDeleteDC(v6);
  }
  return updated;
}
