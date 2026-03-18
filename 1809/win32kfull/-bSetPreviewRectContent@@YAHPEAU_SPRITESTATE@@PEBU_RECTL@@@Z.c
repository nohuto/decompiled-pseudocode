/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C0263F40
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C0269B94 (bMoveDevPreviewRect.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C0076350 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C0261B6C (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(void **a1, const struct _RECTL *a2)
{
  unsigned int updated; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 CompatibleDC; // rax
  HDC v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  HDEV HDEV; // rax
  struct _BLENDFUNCTION v14; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v15; // [rsp+88h] [rbp-78h] BYREF
  __int64 v16; // [rsp+90h] [rbp-70h] BYREF
  char v17; // [rsp+98h] [rbp-68h]
  int v18; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v19; // [rsp+A0h] [rbp-60h] BYREF
  int v20; // [rsp+A8h] [rbp-58h]
  _QWORD v21[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagPOINT v22; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h] BYREF
  char v25; // [rsp+E8h] [rbp-18h]
  int v26; // [rsp+ECh] [rbp-14h]
  struct PALETTE *v27; // [rsp+F0h] [rbp-10h] BYREF
  int v28; // [rsp+F8h] [rbp-8h]
  struct _RECTL si128; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v30[6]; // [rsp+110h] [rbp+10h] BYREF
  struct _RECTL v31; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v32[2]; // [rsp+150h] [rbp+50h] BYREF
  int v33; // [rsp+160h] [rbp+60h]
  unsigned __int64 v34; // [rsp+164h] [rbp+64h]
  unsigned __int64 v35; // [rsp+16Ch] [rbp+6Ch]

  updated = 0;
  memset(v21, 0, sizeof(v21));
  v15.cx = a2->right - a2->left;
  v15.cy = a2->bottom - a2->top;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v5, v6);
  v8 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 1LL);
    DCOBJ::DCOBJ((DCOBJ *)v30, v8);
    if ( v30[0] )
    {
      v28 = 0;
      v27 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v27, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v20 = 0;
        v19 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v19, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)v21 + 4) = v15;
          v20 = 1;
          LODWORD(v21[0]) = 6;
          v21[2] = *(_QWORD *)v19;
          LODWORD(v21[3]) = 1;
          v16 = 0LL;
          v17 = 0;
          v18 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v16, (struct _DEVBITMAPINFO *)v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v16 )
          {
            LOBYTE(v9) = 5;
            HmgSetOwner(*(_QWORD *)(v16 + 32), 0LL, v9);
            v32[0] = 0x8C0038708C003870uLL;
            v32[1] = 0x8C0038708C003870uLL;
            v34 = 0x8C0038708C003870uLL;
            v35 = 0x8C0038708C003870uLL;
            v21[1] = 0x2400000003LL;
            v33 = 1174412344;
            v21[0] = 0x300000006LL;
            v21[2] = *(_QWORD *)v19;
            LODWORD(v21[3]) = 1;
            v24 = 0LL;
            v25 = 0;
            v26 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)v21, v32, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              if ( v24 )
              {
                *(struct tagSIZE *)&v31.right = v15;
                v22 = (struct tagPOINT)0x100000001LL;
                v23 = 0x100000001LL;
                *(_QWORD *)&v31.left = 0LL;
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v30,
                            v19,
                            v27,
                            (struct _SURFOBJ *)(v16 + 24),
                            (struct _SURFOBJ *)(v24 + 24),
                            &v31,
                            &si128,
                            (struct _MARGINS *)&v22);
                if ( updated )
                {
                  v10 = *(_QWORD *)(v16 + 32);
                  *(_DWORD *)(v16 + 112) |= 0x4000000u;
                  v11 = GreSelectBitmap(v8, v10);
                  *(_DWORD *)(v16 + 112) &= ~0x4000000u;
                  v31.left = a2->left;
                  v31.top = a2->top;
                  v14 = (struct _BLENDFUNCTION)33488896;
                  v22 = 0LL;
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[145],
                              0LL,
                              (struct tagPOINT *)&v31,
                              &v15,
                              v8,
                              &v22,
                              0,
                              &v14,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v16 + 112) |= 0x4000000u;
                  GreSelectBitmap(v8, v11);
                  *(_DWORD *)(v16 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v24);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v19);
          SURFMEM::~SURFMEM((SURFMEM *)&v16);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v19);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v27);
    }
    GreSetDCOwnerEx(v8, 2147483650LL, 0LL, 1LL);
    GreDeleteDC(v8);
    DCOBJ::~DCOBJ((DCOBJ *)v30);
  }
  return updated;
}
