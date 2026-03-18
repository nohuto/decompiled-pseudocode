/*
 * XREFs of NtGdiGetPixel @ 0x1C0080060
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0075C14 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007F3A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00803AC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  char *v6; // rdx
  struct REGION *v7; // rax
  int IsCMYKColor; // edi
  bool v9; // zf
  BOOL (__stdcall *v10)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v11; // rcx
  unsigned int v13; // [rsp+60h] [rbp-A0h] BYREF
  DC *v14[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  char v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+84h] [rbp-7Ch]
  _DWORD v18[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  _QWORD v25[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  _BYTE v30[16]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v31; // [rsp+110h] [rbp+10h] BYREF
  __int64 v32; // [rsp+118h] [rbp+18h]
  struct _POINTL v33; // [rsp+120h] [rbp+20h] BYREF
  int v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+12Ch] [rbp+2Ch]
  _BYTE v36[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v37[76]; // [rsp+134h] [rbp+34h] BYREF
  __int64 v38; // [rsp+180h] [rbp+80h]
  int v39; // [rsp+188h] [rbp+88h]
  int v40; // [rsp+1B0h] [rbp+B0h]
  __int64 v41; // [rsp+1C0h] [rbp+C0h]

  v13 = -1;
  v14[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( v14[0] )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v14, a2, a3, 1, 1);
    v25[1] = 0LL;
    v22 = 0LL;
    v26 = 256;
    v23 = 0LL;
    v24 = 0;
    v25[0] = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v22, (struct XDCOBJ *)v14, 0) )
    {
      v5 = *((_QWORD *)v14[0] + 62);
      if ( v5 )
      {
        if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v14[0] + 62)) )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v30, (struct XDCOBJ *)v14, 0x204u);
          v31 = (struct _POINTL)__PAIR64__(a3, a2);
          EXFORMOBJ::bXform((EXFORMOBJ *)v30, &v31, 1LL);
          v33 = v31;
          v6 = (char *)v14[0] + 1024;
          v34 = v31.x + 1;
          v35 = v31.y + 1;
          if ( (*((_DWORD *)v14[0] + 10) & 1) == 0 )
            v6 = (char *)v14[0] + 1016;
          v33.x = v31.x + *(_DWORD *)v6;
          v34 = v31.x + 1 + *(_DWORD *)v6;
          v33.y = v31.y + *((_DWORD *)v6 + 1);
          v35 = v31.y + 1 + *((_DWORD *)v6 + 1);
          v7 = XDCOBJ::prgnEffRao(v14);
          v38 = 0LL;
          v39 = 0;
          v40 = 1;
          v41 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v36, v7, (struct ERECTL *)&v33, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v37) )
          {
            IsCMYKColor = DC::bIsCMYKColor(v14[0]);
            v13 = 0;
            v18[0] = *(_DWORD *)(v5 + 96);
            v19 = 1LL;
            v21 = 1LL;
            v18[1] = 1;
            v20 = 0LL;
            v31 = 0LL;
            v32 = 0LL;
            if ( v18[0] == 1 )
            {
              v31.x = 7;
              LODWORD(v32) = 8;
            }
            else if ( v18[0] == 2 )
            {
              v31.x = 1;
              LODWORD(v32) = 2;
            }
            else
            {
              LODWORD(v32) = 1;
            }
            v15 = 0LL;
            v16 = 0;
            v17 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v15, (struct _DEVBITMAPINFO *)v18, &v13, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v9 = (*(_DWORD *)(v5 + 112) & 0x400) == 0;
              v31.y = 0;
              HIDWORD(v32) = 1;
              if ( v9 )
                v10 = EngCopyBits;
              else
                v10 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v5 + 48) + 2840LL);
              v11 = 0LL;
              if ( v15 )
                v11 = v15 + 24;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _POINTL *, struct _POINTL *))v10)(
                     v11,
                     v5 + 24,
                     0LL,
                     xloIdent,
                     &v31,
                     &v33)
                && !IsCMYKColor )
              {
                v13 = ulIndexToRGB(*(_QWORD *)(v5 + 128), *((_QWORD *)v14[0] + 11), v13);
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v15);
          }
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
    if ( v25[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v25);
  }
  return v13;
}
