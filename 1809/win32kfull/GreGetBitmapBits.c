/*
 * XREFs of GreGetBitmapBits @ 0x1C0076A08
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C00768E0 (NtGdiGetBitmapBits.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0151568 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00771DC (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall GreGetBitmapBits(HSURF a1, ULONG a2, void *a3, unsigned int *a4)
{
  ULONG cjBits; // edi
  unsigned __int64 v9; // rbx
  LONG v10; // ecx
  LONG v11; // edx
  HDEV v12; // rax
  struct _SURFOBJ *v13; // rdx
  SURFOBJ *v14; // rdx
  unsigned int v15; // esi
  DYNAMICMODECHANGESHARELOCK *v16; // rcx
  _BYTE v18[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  char v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v26[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v27[5]; // [rsp+A8h] [rbp-58h] BYREF
  _SURFOBJ v28; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v29[32]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v30; // [rsp+140h] [rbp+40h]
  RECTL prclDest; // [rsp+148h] [rbp+48h] BYREF

  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
  SURFREF::SURFREF((SURFREF *)v29, a1);
  v9 = v30;
  if ( v30 && (*(_DWORD *)(v30 + 112) & 0x4000000) != 0 )
  {
    v20 = 0LL;
    v21 = 0;
    v22 = 0;
    v10 = *(_DWORD *)(v30 + 56);
    v11 = *(_DWORD *)(v30 + 60);
    cjBits = v11
           * (((unsigned int)(v10 * *((_DWORD *)&galBitsPerPixel + *(unsigned int *)(v30 + 96)) + 15) >> 3) & 0x1FFFFFFE);
    if ( !a3 )
    {
LABEL_24:
      SURFMEM::~SURFMEM((SURFMEM *)&v20);
      goto LABEL_26;
    }
    *(_OWORD *)&v28.dhsurf = 0LL;
    v28.dhpdev = *(DHPDEV *)(v30 + 40);
    v12 = *(HDEV *)(v30 + 48);
    v28.sizlBitmap.cx = v10;
    v28.sizlBitmap.cy = v11;
    prclDest.right = v10;
    prclDest.bottom = v11;
    v28.hdev = v12;
    v28.cjBits = 0;
    memset(&v28.pvBits, 0, 24);
    *(_DWORD *)&v28.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v23 = *(_QWORD *)(v30 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v25, (struct PDEVOBJ *)&v23);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v24, (struct _SURFOBJ *)((v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64)));
    v26[0] = 0LL;
    if ( v30 )
      v13 = (struct _SURFOBJ *)(v30 + 24);
    else
      v13 = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v26, v13) )
    {
      if ( *(_WORD *)(v30 + 100) == 3 )
      {
        memset(v27, 0, 0x20uLL);
        LODWORD(v27[0]) = *(_DWORD *)(v30 + 96);
        HIDWORD(v27[0]) = *(_DWORD *)(v30 + 56);
        LODWORD(v27[1]) = *(_DWORD *)(v30 + 60);
        v27[2] = 0LL;
        LODWORD(v27[3]) = *(_DWORD *)(v30 + 112) & 0x40000;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v20, (struct _DEVBITMAPINFO *)v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_20;
        v14 = 0LL;
        v9 = v20;
        if ( v30 )
          v14 = (SURFOBJ *)(v30 + 24);
        EngCopyBits((SURFOBJ *)((v20 + 24) & -(__int64)(v20 != 0)), v14, 0LL, 0LL, &prclDest, &pptlSrc);
      }
      if ( cjBits )
      {
        v15 = *a4;
        if ( (*a4 & 0x80000000) == 0 && v15 < cjBits )
        {
          if ( a2 + v15 > cjBits )
            a2 = cjBits - v15;
          if ( a2 )
          {
            v28.cjBits = a2;
            v28.lDelta = v15;
            v28.pvBits = a3;
            bDoGetSetBitmapBits(&v28, (struct _SURFOBJ *)((v9 + 24) & -(__int64)(v9 != 0)), 1);
            cjBits = v28.cjBits;
            *a4 = v15 + v28.cjBits;
            goto LABEL_21;
          }
        }
LABEL_20:
        cjBits = 0;
      }
    }
LABEL_21:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v26);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v26);
    if ( v24 )
      GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v25);
    goto LABEL_24;
  }
  EngSetLastError(6u);
LABEL_26:
  if ( v30 )
    DEC_SHARE_REF_CNT(v30);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v29);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v16);
  return cjBits;
}
