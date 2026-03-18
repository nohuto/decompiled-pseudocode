/*
 * XREFs of GreSetBitmapBits @ 0x1C0032170
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C01120C0 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0031E60 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetBitmapBits(__int64 a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // esi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  HDEV v12; // rdx
  LONG v13; // ecx
  LONG v14; // r15d
  __int64 v15; // r14
  DHPDEV v16; // rax
  bool v17; // sf
  __int64 v18; // rdi
  struct _SURFOBJ *v19; // r14
  DYNAMICMODECHANGESHARELOCK *v20; // rcx
  int v22; // eax
  char v23[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  char v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  HDEV v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  char v30[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v31[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v32[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  _SURFOBJ v36; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v25 = 0LL;
  v11 = v10;
  v26 = 0;
  v27 = 0;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
  {
    v12 = *(HDEV *)(v10 + 48);
    v13 = *(_DWORD *)(v10 + 56);
    v14 = *a4;
    *(&v36.cjBits + 1) = 0;
    *(_QWORD *)&v36.iUniq = 0LL;
    v15 = v10;
    v16 = *(DHPDEV *)(v10 + 40);
    v36.cjBits = a2;
    v36.dhpdev = v16;
    LODWORD(v16) = *(_DWORD *)(v11 + 60);
    v36.hdev = v12;
    v36.sizlBitmap.cx = v13;
    prclDest.right = v13;
    v28 = v12;
    v36.sizlBitmap.cy = (int)v16;
    prclDest.bottom = (int)v16;
    *(_OWORD *)&v36.dhsurf = 0LL;
    v36.pvBits = a3;
    v36.pvScan0 = 0LL;
    v36.lDelta = v14;
    *(_DWORD *)&v36.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v30, (struct PDEVOBJ *)&v28);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v29, (struct _SURFOBJ *)(v11 + 24));
    v31[0] = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v31, (struct _SURFOBJ *)(v11 + 24)) )
    {
      if ( *(_WORD *)(v11 + 100) != 3 )
        goto LABEL_6;
      v32[0] = *(_DWORD *)(v11 + 96);
      v32[1] = *(_DWORD *)(v11 + 56);
      v32[2] = *(_DWORD *)(v11 + 60);
      v34 = *(_DWORD *)(v11 + 112) & 0x40000;
      v32[3] = 0;
      v35 = 0;
      v33 = 0LL;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v25, (struct _DEVBITMAPINFO *)v32, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v15 = v25;
        v17 = v14 < 0;
        if ( !v14 )
          goto LABEL_7;
        EngCopyBits(
          (SURFOBJ *)((v25 + 24) & -(__int64)(v25 != 0)),
          (SURFOBJ *)(v11 + 24),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
LABEL_6:
        v17 = v14 < 0;
LABEL_7:
        if ( !v17 )
        {
          ++*(_DWORD *)(v11 + 92);
          v18 = *(_QWORD *)(v11 + 48);
          v19 = (struct _SURFOBJ *)((v15 + 24) & -(__int64)(v15 != 0));
          bDoGetSetBitmapBits(v19, &v36, 0);
          cjBits = v36.cjBits;
          *a4 = v14 + v36.cjBits;
          if ( *(_WORD *)(v11 + 100) == 3 )
          {
            if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
              v22 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))(v18 + 2840))(
                      v11 + 24,
                      v19,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            else
              v22 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                      v11 + 24,
                      v19,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            cjBits &= -(v22 != 0);
          }
        }
      }
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
    if ( v29 )
      GreUnlockDisplayDevice(*(_QWORD *)(v29 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v30);
    goto LABEL_12;
  }
  EngSetLastError(6u);
LABEL_12:
  SURFMEM::~SURFMEM((SURFMEM *)&v25);
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
  return cjBits;
}
