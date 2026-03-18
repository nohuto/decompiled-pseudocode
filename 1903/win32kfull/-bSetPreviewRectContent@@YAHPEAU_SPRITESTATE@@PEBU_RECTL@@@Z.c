/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027D108
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C0282D48 (bMoveDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C002AEB8 (GreUpdateSprite.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027B1E4 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(void **a1, const struct _RECTL *a2)
{
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  __int64 v7; // r8
  HDEV HDEV; // rax
  int v10; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v11; // [rsp+88h] [rbp-78h] BYREF
  __int64 v12; // [rsp+90h] [rbp-70h] BYREF
  char v13; // [rsp+98h] [rbp-68h]
  int v14; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v15; // [rsp+A0h] [rbp-60h] BYREF
  int v16; // [rsp+A8h] [rbp-58h]
  _QWORD v17[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagPOINT v18[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-10h] BYREF
  char v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+FCh] [rbp-4h]
  struct PALETTE *v23; // [rsp+100h] [rbp+0h] BYREF
  int v24; // [rsp+108h] [rbp+8h]
  struct _RECTL si128; // [rsp+110h] [rbp+10h] BYREF
  struct _RECTL v26; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v27[2]; // [rsp+130h] [rbp+30h] BYREF
  int v28; // [rsp+140h] [rbp+40h]
  unsigned __int64 v29; // [rsp+144h] [rbp+44h]
  unsigned __int64 v30; // [rsp+14Ch] [rbp+4Ch]

  updated = 0;
  memset(v17, 0, sizeof(v17));
  v11.cx = a2->right - a2->left;
  v11.cy = a2->bottom - a2->top;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v6 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
    v19[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v19, v6);
    if ( v19[0] )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)v19);
      v24 = 0;
      v23 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v16 = 0;
        v15 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v15, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)v17 + 4) = v11;
          v16 = 1;
          LODWORD(v17[0]) = 6;
          v17[2] = *(_QWORD *)v15;
          LODWORD(v17[3]) = 1;
          v12 = 0LL;
          v13 = 0;
          v14 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v12, (struct _DEVBITMAPINFO *)v17, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v12 )
          {
            LOBYTE(v7) = 5;
            HmgSetOwner(*(_QWORD *)(v12 + 32), 0LL, v7);
            v27[0] = 0x8C0038708C003870uLL;
            v27[1] = 0x8C0038708C003870uLL;
            v29 = 0x8C0038708C003870uLL;
            v30 = 0x8C0038708C003870uLL;
            v17[1] = 0x2400000003LL;
            v28 = 1174412344;
            v17[0] = 0x300000006LL;
            v17[2] = *(_QWORD *)v15;
            LODWORD(v17[3]) = 1;
            v20 = 0LL;
            v21 = 0;
            v22 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v20, (struct _DEVBITMAPINFO *)v17, v27, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              if ( v20 )
              {
                *(struct tagSIZE *)&v26.right = v11;
                v18[0] = (struct tagPOINT)0x100000001LL;
                v18[1] = (struct tagPOINT)0x100000001LL;
                *(_QWORD *)&v26.left = 0LL;
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v19,
                            v15,
                            v23,
                            (struct _SURFOBJ *)(v12 + 24),
                            (struct _SURFOBJ *)(v20 + 24),
                            &v26,
                            &si128,
                            (struct _MARGINS *)v18);
                if ( updated )
                {
                  *(_DWORD *)(v12 + 112) |= 0x4000000u;
                  GreSelectBitmap(v6);
                  *(_DWORD *)(v12 + 112) &= ~0x4000000u;
                  v26.left = a2->left;
                  v26.top = a2->top;
                  v10 = 33488896;
                  v18[0] = 0LL;
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[145],
                              0LL,
                              (struct tagPOINT *)&v26,
                              &v11,
                              v6,
                              v18,
                              0,
                              (struct _BLENDFUNCTION *)&v10,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v12 + 112) |= 0x4000000u;
                  GreSelectBitmap(v6);
                  *(_DWORD *)(v12 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v20);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v15);
          SURFMEM::~SURFMEM((SURFMEM *)&v12);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v15);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v23);
    }
    GreSetDCOwnerEx(v6, 2147483650LL, 0LL, 0LL);
    GreDeleteDC(v6);
  }
  return updated;
}
