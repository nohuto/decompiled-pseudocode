/*
 * XREFs of GreSetBitmapBits @ 0x1C0076E50
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C0076D30 (NtGdiSetBitmapBits.c)
 * Callees:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00771DC (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall GreSetBitmapBits(HSURF a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // r14d
  unsigned __int64 v10; // rdi
  LONG v11; // r15d
  struct _SURFOBJ *v12; // rdx
  unsigned __int64 v13; // rsi
  SURFOBJ *v14; // rdx
  __int64 v15; // rbx
  struct _SURFOBJ *v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // eax
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  _BYTE v20[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v28[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v29[32]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp-38h]
  _QWORD v31[4]; // [rsp+D0h] [rbp-30h] BYREF
  struct _SURFOBJ v32; // [rsp+F0h] [rbp-10h] BYREF
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF

  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
  SURFREF::SURFREF((SURFREF *)v29, a1);
  v10 = v30;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( v30 && (*(_DWORD *)(v30 + 112) & 0x4000000) != 0 )
  {
    v11 = *a4;
    *(_OWORD *)&v32.dhsurf = 0LL;
    v32.dhpdev = *(DHPDEV *)(v30 + 40);
    v32.hdev = *(HDEV *)(v30 + 48);
    v32.sizlBitmap = *(SIZEL *)(v30 + 56);
    v32.cjBits = a2;
    v32.pvBits = a3;
    v32.pvScan0 = 0LL;
    v32.lDelta = v11;
    v32.iUniq = 0;
    *(_DWORD *)&v32.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = *(_DWORD *)(v30 + 56);
    prclDest.bottom = *(_DWORD *)(v30 + 60);
    v25 = *(_QWORD *)(v30 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v27, (struct PDEVOBJ *)&v25);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v26, (struct _SURFOBJ *)((v10 + 24) & ((unsigned __int128)-(__int128)v10 >> 64)));
    v28[0] = 0LL;
    if ( v30 )
      v12 = (struct _SURFOBJ *)(v30 + 24);
    else
      v12 = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v28, v12) )
    {
      v13 = v30;
      if ( *(_WORD *)(v30 + 100) != 3 )
      {
LABEL_16:
        if ( v11 >= 0 )
        {
          v15 = *(_QWORD *)(v13 + 48);
          ++*(_DWORD *)(v13 + 92);
          v16 = (struct _SURFOBJ *)((v10 + 24) & -(__int64)(v10 != 0));
          bDoGetSetBitmapBits(v16, &v32, 0);
          cjBits = v32.cjBits;
          v17 = v30;
          *a4 = v11 + v32.cjBits;
          if ( *(_WORD *)(v17 + 100) == 3 )
          {
            if ( (*(_DWORD *)(v17 + 112) & 0x400) != 0 )
              v18 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))(v15 + 2840))(
                      v17 + 24,
                      v16,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            else
              v18 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                      v17 + 24,
                      v16,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            cjBits &= -(v18 != 0);
          }
        }
        goto LABEL_22;
      }
      memset(v31, 0, sizeof(v31));
      LODWORD(v31[0]) = *(_DWORD *)(v30 + 96);
      HIDWORD(v31[0]) = *(_DWORD *)(v30 + 56);
      LODWORD(v31[1]) = *(_DWORD *)(v30 + 60);
      v31[2] = 0LL;
      LODWORD(v31[3]) = *(_DWORD *)(v30 + 112) & 0x40000;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v22, (struct _DEVBITMAPINFO *)v31, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v10 = v22;
        if ( v11 )
        {
          v14 = 0LL;
          if ( v30 )
            v14 = (SURFOBJ *)(v30 + 24);
          EngCopyBits((SURFOBJ *)((v22 + 24) & -(__int64)(v22 != 0)), v14, 0LL, 0LL, &prclDest, &pptlSrc);
        }
        v13 = v30;
        goto LABEL_16;
      }
    }
LABEL_22:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v28);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v28);
    if ( v26 )
      GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v27);
    goto LABEL_26;
  }
  EngSetLastError(6u);
LABEL_26:
  SURFMEM::~SURFMEM((SURFMEM *)&v22);
  if ( v30 )
    DEC_SHARE_REF_CNT(v30);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v29);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  return cjBits;
}
