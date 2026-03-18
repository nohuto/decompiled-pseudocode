/*
 * XREFs of NtGdiSetPixel @ 0x1C0147670
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A4618 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D2560 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00E4D80 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C01256C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C01288CC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0148D00 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C0165E50 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiSetPixel(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // esi
  DC *v8; // rcx
  DC *v9; // rbx
  __int64 v10; // r13
  struct REGION *v11; // rax
  struct ECLIPOBJ *v12; // rdx
  ULONG v13; // ecx
  DC *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  int IsCMYKColor; // r15d
  int v18; // ecx
  int v19; // eax
  int (*v20)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v21; // edx
  __int64 v22; // r8
  DC *v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v25[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int16 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  unsigned int NearestIndexFromColorref; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+E0h] [rbp-20h]
  unsigned int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int128 v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+148h] [rbp+48h]
  _BYTE v45[16]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v46; // [rsp+170h] [rbp+70h] BYREF

  v24[1] = 0LL;
  v7 = -1;
  XDCOBJ::vLock((XDCOBJ *)v24, a1);
  if ( !v24[0] || (*((_DWORD *)v24[0] + 9) & 0x10000) != 0 )
  {
    XFERDCOBJ::ThreadCleanup(v24);
    return v7;
  }
  v25[0] = (struct _POINTL)__PAIR64__(a3, a2);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v24, 516);
  EXFORMOBJ::bXform((EXFORMOBJ *)v45, v25, 1LL);
  *(struct _POINTL *)&v46 = v25[0];
  DWORD2(v46) = v25[0].x + 1;
  v8 = v24[0];
  HIDWORD(v46) = v25[0].y + 1;
  if ( (*((_DWORD *)v24[0] + 9) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate((XDCOBJ *)v24, (struct ERECTL *)&v46);
    v8 = v24[0];
  }
  if ( *((_QWORD *)v8 + 62) )
  {
    v29 = 0LL;
    v26 = 0LL;
    v30 = 0LL;
    v31 = 256;
    v27 = 0LL;
    v28 = 0;
    DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v26, 0LL);
    v34 = 0LL;
    v33 = 0LL;
    v32 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v26, (struct XDCOBJ *)v24, 0) )
    {
      v9 = v24[0];
      v10 = *((_QWORD *)v24[0] + 62);
      if ( !(unsigned int)ERECTL::bOffsetAdd(
                            (ERECTL *)&v46,
                            (const struct _POINTL *)v24[0] + (*((_DWORD *)v24[0] + 10) & 1) + 127,
                            1)
        || (unsigned int)(v46 + 134217726) > 0xFFFFFFC
        || (unsigned int)(DWORD2(v46) + 134217726) > 0xFFFFFFC
        || (unsigned int)(DWORD1(v46) + 134217726) > 0xFFFFFFC
        || (unsigned int)(HIDWORD(v46) + 134217726) > 0xFFFFFFC )
      {
        v13 = 87;
        goto LABEL_40;
      }
      if ( (int)v46 >= *((_DWORD *)v9 + 250)
        && SDWORD2(v46) <= *((_DWORD *)v9 + 252)
        && SDWORD1(v46) >= *((_DWORD *)v9 + 251)
        && SHIDWORD(v46) <= *((_DWORD *)v9 + 253)
        || (v11 = XDCOBJ::prgnEffRao(v24),
            XCLIPOBJ::vSetup((DC *)((char *)v9 + 1752), v11, (struct ERECTL *)&v46, 2),
            !ERECTL::bEmpty((DC *)((char *)v9 + 1756))) )
      {
        if ( !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v10) )
        {
          v13 = 5;
LABEL_40:
          EngSetLastError(v13);
          XDCOBJ::vUnlockFast((XDCOBJ *)v24);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v26);
          return v7;
        }
        v14 = v24[0];
        if ( (*((_DWORD *)v24[0] + 9) & 0xE0) != 0 )
        {
          *(_OWORD *)&v25[0].x = v46;
          XDCOBJ::vAccumulateTight((XDCOBJ *)v24, v12, (__m128i *)v25);
          v14 = v24[0];
        }
        v15 = *((_QWORD *)v14 + 11);
        v16 = *(_QWORD *)(v10 + 128);
        v43 = 0LL;
        v42 = 0LL;
        v36 = 0LL;
        v37 = 0;
        v39 = -1;
        v40 = 0LL;
        v41 = 0LL;
        v44 = 0;
        IsCMYKColor = DC::bIsCMYKColor(v14);
        if ( IsCMYKColor )
        {
          NearestIndexFromColorref = a4;
          v37 = 6;
          if ( gbMultiMonMismatchColor )
          {
            v38 = a4;
            v39 = a4;
          }
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v16, v15, a4, 1LL);
          v18 = *((_DWORD *)v24[0] + 30);
          if ( (v18 & 4) != 0 || (v18 & 1) != 0 )
          {
            v37 = 2;
          }
          else
          {
            v19 = v37;
            if ( (v18 & 2) != 0 )
              v19 = 1;
            v37 = v19;
          }
          if ( gbMultiMonMismatchColor )
          {
            v38 = a4;
            v39 = rgbFromColorref(v16, v15);
          }
        }
        ++*(_DWORD *)(v10 + 92);
        v20 = SURFACE::pfnBitBlt((SURFACE *)v10);
        if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, __int64, int))v20)(
               v10 + 24,
               0LL,
               0LL,
               0LL,
               0LL,
               &v46,
               0LL,
               0LL,
               &NearestIndexFromColorref,
               v22,
               v21) )
        {
          if ( IsCMYKColor )
            v7 = NearestIndexFromColorref;
          else
            v7 = ulIndexToRGB(v16, v15, NearestIndexFromColorref);
        }
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v26);
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)v24);
  return v7;
}
