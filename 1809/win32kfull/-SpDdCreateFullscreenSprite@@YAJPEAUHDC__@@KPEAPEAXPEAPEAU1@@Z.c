/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0251D18
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C025BCA0 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AC94 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     GreDeleteSprite @ 0x1C000DC58 (GreDeleteSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00743A0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0074DA8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreUpdateSprite @ 0x1C0076350 (GreUpdateSprite.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateSprite @ 0x1C007C238 (GreCreateSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007D1FC (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0094ACC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C01378D4 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r13
  void **v5; // r14
  int v6; // ebx
  HSPRITE v7; // rsi
  __int64 DisplayDC; // r12
  __int64 v10; // rdi
  HDEV HDEV; // r15
  struct PDEVOBJ *v12; // rdx
  int v13; // eax
  HSPRITE v14; // rax
  struct DWMSPRITE *v15; // r13
  struct SFMLOGICALSURFACE *v16; // r14
  struct _SURFOBJ *v17; // rdx
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v19; // edi
  __int64 v20; // rax
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  _BYTE v22[4]; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v23[4]; // [rsp+84h] [rbp-1B4h] BYREF
  struct tagSIZE v24; // [rsp+88h] [rbp-1B0h] BYREF
  HDC *v25; // [rsp+90h] [rbp-1A8h]
  __int64 v26; // [rsp+98h] [rbp-1A0h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp-198h]
  void **v28; // [rsp+A8h] [rbp-190h]
  HSPRITE v29; // [rsp+B0h] [rbp-188h]
  HDC v30; // [rsp+B8h] [rbp-180h]
  HDEV v31; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-170h] BYREF
  struct SFMLOGICALSURFACE *v33; // [rsp+D0h] [rbp-168h] BYREF
  _QWORD v34[2]; // [rsp+D8h] [rbp-160h] BYREF
  _QWORD v35[2]; // [rsp+E8h] [rbp-150h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-140h]
  _BYTE v37[32]; // [rsp+100h] [rbp-138h] BYREF
  struct DWMSPRITE *v38; // [rsp+120h] [rbp-118h]
  _QWORD v39[7]; // [rsp+128h] [rbp-110h] BYREF
  _BYTE v40[112]; // [rsp+160h] [rbp-D8h] BYREF
  struct tagRECT v41; // [rsp+1D0h] [rbp-68h] BYREF
  _QWORD v42[2]; // [rsp+1E0h] [rbp-58h] BYREF

  v4 = a4;
  v25 = a4;
  v5 = a3;
  v28 = a3;
  v27 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  v7 = 0LL;
  v29 = 0LL;
  DisplayDC = 0LL;
  v30 = 0LL;
  if ( !v39[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v39[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v22);
  v32 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v31 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v23, v12, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40, (struct PDEVOBJ *)&v31);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_26:
      if ( v7 )
      {
        GreDeleteSprite(HDEV, 0LL, v7, 1);
        v29 = 0LL;
      }
      if ( DisplayDC )
      {
        GreDeleteDC(DisplayDC);
        v30 = 0LL;
      }
      goto LABEL_30;
    }
    v26 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 40);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v26) )
        {
          v41.left = *(_DWORD *)(v10 + 2584);
          v41.top = *(_DWORD *)(v10 + 2588);
          v41.right = v41.left + *(_DWORD *)(*(_QWORD *)(v10 + 2592) + 172LL);
          v41.bottom = v41.top + *(_DWORD *)(*(_QWORD *)(v10 + 2592) + 176LL);
          v14 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v41, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v14;
          v29 = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v37, 0LL, v14);
            v15 = v38;
            if ( v38 )
            {
              v33 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v38 + 21);
              v16 = v33;
              vSpDwmUpdateSpriteVisibility(v38, 0);
              v24 = *(struct tagSIZE *)(*(_QWORD *)(v10 + 2592) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, v15, v16, &v24, &v33) )
              {
                v17 = (struct _SURFOBJ *)*((_QWORD *)v16 + 23);
                v34[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v34, v17);
                v42[0] = 0LL;
                v42[1] = v24;
                v26 = 0LL;
                v35[0] = 0LL;
                v35[1] = 0LL;
                v36 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v31) )
                {
                  v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 23)) + 112) & 1) != 0 )
                {
                  v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 354);
                }
                else
                {
                  v18 = EngBitBlt;
                }
                v19 = v27;
                LODWORD(v35[0]) = v27 & 0xFFFFFF;
                LODWORD(v36) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, _QWORD *, _QWORD, int))v18)(
                  *((_QWORD *)v16 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v42,
                  &v26,
                  0LL,
                  v35,
                  0LL,
                  61680);
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v19, 0LL, 0x20400001u, &v41, 0LL, 1, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                v30 = (HDC)DisplayDC;
                if ( DisplayDC )
                {
                  v20 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 23));
                  *(_DWORD *)(v20 + 112) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
              }
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v37);
              v5 = v28;
            }
            else
            {
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v37);
            }
            v4 = v25;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_26;
LABEL_30:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *v5 = v29;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = v30;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v32);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v39);
  return (unsigned int)v6;
}
