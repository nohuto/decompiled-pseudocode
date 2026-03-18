/*
 * XREFs of GreSetBitmapBits @ 0x1C0076A30
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C00F6820 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0076738 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall GreSetBitmapBits(__int64 a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  HDEV v12; // rdx
  __int64 v13; // r13
  LONG v14; // ecx
  LONG v15; // esi
  LONG v16; // eax
  __int64 v17; // rdi
  bool v18; // sf
  __int64 v19; // rsi
  struct _SURFOBJ *v20; // r12
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  int v23; // eax
  char v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  LONG v25; // [rsp+64h] [rbp-9Ch]
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  char v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+7Ch] [rbp-84h]
  HDEV v30; // [rsp+80h] [rbp-80h] BYREF
  LONG *v31; // [rsp+88h] [rbp-78h]
  char v32[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v34[5]; // [rsp+A8h] [rbp-58h] BYREF
  _SURFOBJ v35; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v31 = a4;
  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v27 = 0LL;
  v11 = v10;
  v28 = 0;
  v29 = 0;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
  {
    v12 = *(HDEV *)(v10 + 48);
    v13 = v10;
    v14 = *(_DWORD *)(v10 + 56);
    v15 = *a4;
    v35.dhpdev = *(DHPDEV *)(v10 + 40);
    v16 = *(_DWORD *)(v10 + 60);
    v35.hdev = v12;
    v35.sizlBitmap.cx = v14;
    prclDest.right = v14;
    v30 = v12;
    v35.sizlBitmap.cy = v16;
    prclDest.bottom = v16;
    v25 = v15;
    *(_OWORD *)&v35.dhsurf = 0LL;
    v35.cjBits = a2;
    v35.pvBits = a3;
    v35.pvScan0 = 0LL;
    v35.lDelta = v15;
    v35.iUniq = 0;
    *(_DWORD *)&v35.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct PDEVOBJ *)&v30);
    v17 = 0LL;
    if ( v11 != -24
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x200) == 0 )
    {
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24);
      GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
    v33[0] = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v33, (struct _SURFOBJ *)(v11 + 24)) )
      goto LABEL_12;
    if ( *(_WORD *)(v11 + 100) == 3 )
    {
      memset(v34, 0, 0x20uLL);
      LODWORD(v34[0]) = *(_DWORD *)(v11 + 96);
      HIDWORD(v34[0]) = *(_DWORD *)(v11 + 56);
      LODWORD(v34[1]) = *(_DWORD *)(v11 + 60);
      LODWORD(v34[3]) = *(_DWORD *)(v11 + 112) & 0x40000;
      v34[2] = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v27, (struct _DEVBITMAPINFO *)v34, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_12:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v33);
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v32);
        goto LABEL_15;
      }
      v13 = v27;
      v18 = v15 < 0;
      if ( !v15 )
      {
LABEL_10:
        if ( !v18 )
        {
          ++*(_DWORD *)(v11 + 92);
          v19 = *(_QWORD *)(v11 + 48);
          v20 = (struct _SURFOBJ *)((v13 + 24) & -(__int64)(v13 != 0));
          bDoGetSetBitmapBits(v20, &v35, 0);
          cjBits = v35.cjBits;
          *v31 = v35.cjBits + v25;
          if ( *(_WORD *)(v11 + 100) == 3 )
          {
            if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
              v23 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))(v19 + 2832))(
                      v11 + 24,
                      v20,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            else
              v23 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                      v11 + 24,
                      v20,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            cjBits &= -(v23 != 0);
          }
        }
        goto LABEL_12;
      }
      EngCopyBits((SURFOBJ *)((v27 + 24) & -(__int64)(v27 != 0)), (SURFOBJ *)(v11 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
    }
    v18 = v15 < 0;
    goto LABEL_10;
  }
  EngSetLastError(6u);
LABEL_15:
  SURFMEM::~SURFMEM((SURFMEM *)&v27);
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
  return cjBits;
}
