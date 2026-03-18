/*
 * XREFs of GreGetBitmapBits @ 0x1C00DCAC4
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C00DC9E0 (NtGdiGetBitmapBits.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023EFC0 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     EngCopyBits @ 0x1C00BF3E0 (EngCopyBits.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00DCFF8 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBits(__int64 a1, ULONG a2, void *a3, unsigned int *a4)
{
  ULONG cjBits; // edi
  __int64 v9; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  LONG v12; // ecx
  LONG v13; // edx
  _DWORD *v14; // r15
  __int64 v15; // rax
  HDEV v16; // rax
  __int64 v17; // r12
  unsigned int v18; // esi
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  char v21[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v23; // [rsp+70h] [rbp-90h] BYREF
  char v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  HDEV v26; // [rsp+80h] [rbp-80h] BYREF
  void *v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  char v29[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v31[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  _SURFOBJ v35; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v27 = a3;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
  LOBYTE(v9) = 5;
  v10 = (_DWORD *)HmgShareLockCheck(a1, v9);
  v11 = v10;
  if ( v10 && (v10[28] & 0x4000000) != 0 )
  {
    v12 = v10[14];
    v13 = v10[15];
    v14 = v10;
    v15 = (unsigned int)v10[24];
    v23 = 0LL;
    v24 = 0;
    v25 = 0;
    cjBits = v13 * (((unsigned int)(v12 * *((_DWORD *)&galBitsPerPixel + v15) + 15) >> 3) & 0x1FFFFFFE);
    if ( !a3 )
    {
LABEL_16:
      SURFMEM::~SURFMEM((SURFMEM *)&v23);
      goto LABEL_17;
    }
    v35.dhpdev = (DHPDEV)*((_QWORD *)v11 + 5);
    v16 = (HDEV)*((_QWORD *)v11 + 6);
    v35.sizlBitmap.cx = v12;
    v35.sizlBitmap.cy = v13;
    prclDest.right = v12;
    prclDest.bottom = v13;
    v35.hdev = v16;
    v26 = v16;
    memset(&v35.cjBits, 0, 40);
    *(_OWORD *)&v35.dhsurf = 0LL;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v29, (struct PDEVOBJ *)&v26);
    v17 = (__int64)(v11 + 6);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v28, (struct _SURFOBJ *)(v11 + 6));
    v30[0] = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v30, (struct _SURFOBJ *)(v11 + 6)) )
    {
      if ( *((_WORD *)v11 + 50) == 3 )
      {
        v31[0] = v11[24];
        v31[1] = v11[14];
        v31[2] = v11[15];
        v33 = v11[28] & 0x40000;
        v31[3] = 0;
        v34 = 0;
        v32 = 0LL;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)v31, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_22;
        v14 = v23;
        v17 = (__int64)(v23 + 6);
        EngCopyBits(
          (SURFOBJ *)((unsigned __int64)(v23 + 6) & -(__int64)(v23 != 0LL)),
          (SURFOBJ *)(v11 + 6),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      if ( cjBits )
      {
        v18 = *a4;
        if ( (*a4 & 0x80000000) == 0 && v18 < cjBits )
        {
          if ( a2 + v18 > cjBits )
            a2 = cjBits - v18;
          if ( a2 )
          {
            v35.cjBits = a2;
            v35.lDelta = v18;
            v35.pvBits = v27;
            bDoGetSetBitmapBits(&v35, (struct _SURFOBJ *)(v17 & -(__int64)(v14 != 0LL)), 1);
            cjBits = v35.cjBits;
            *a4 = v18 + v35.cjBits;
            goto LABEL_13;
          }
        }
LABEL_22:
        cjBits = 0;
      }
    }
LABEL_13:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v30);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v30);
    if ( v28 )
      GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v29);
    goto LABEL_16;
  }
  EngSetLastError(6u);
LABEL_17:
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  return cjBits;
}
