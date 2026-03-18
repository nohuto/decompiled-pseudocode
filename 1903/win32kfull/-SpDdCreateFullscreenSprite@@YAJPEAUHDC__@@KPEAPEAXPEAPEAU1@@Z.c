/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B588
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0275370 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029094 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0029668 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002A608 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C002A650 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreUpdateSprite @ 0x1C002AEB8 (GreUpdateSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002BCD8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003EF2C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C0048C28 (GreCreateSprite.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00832CC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C012BB90 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0164930 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // rbx
  int v6; // r14d
  HSPRITE v7; // rdi
  __int64 v9; // rsi
  HDEV HDEV; // r15
  struct PDEVOBJ *v11; // rdx
  int v12; // eax
  HSPRITE v13; // rax
  volatile signed __int32 *v14; // rbx
  struct SFMLOGICALSURFACE *v15; // r13
  struct _SURFOBJ *v16; // rdx
  BOOL (__stdcall *v17)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v18; // esi
  __int64 DisplayDC; // rdi
  __int64 v20; // rax
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  char v22[8]; // [rsp+80h] [rbp-158h] BYREF
  HSPRITE v23; // [rsp+88h] [rbp-150h]
  char v24[8]; // [rsp+90h] [rbp-148h] BYREF
  struct tagSIZE v25; // [rsp+98h] [rbp-140h] BYREF
  HDC *v26; // [rsp+A0h] [rbp-138h]
  HDC v27; // [rsp+A8h] [rbp-130h]
  unsigned int v28; // [rsp+B0h] [rbp-128h]
  HDEV v29; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-110h] BYREF
  _QWORD v32[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-F8h] BYREF
  struct DWMSPRITE *v34; // [rsp+E8h] [rbp-F0h] BYREF
  struct SFMLOGICALSURFACE *v35; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v36[2]; // [rsp+F8h] [rbp-E0h] BYREF
  _QWORD v37[2]; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+118h] [rbp-C0h]
  _BYTE v39[80]; // [rsp+120h] [rbp-B8h] BYREF
  struct tagRECT v40; // [rsp+170h] [rbp-68h] BYREF
  _QWORD v41[2]; // [rsp+180h] [rbp-58h] BYREF

  v4 = a4;
  v26 = a4;
  v28 = a2;
  v6 = -1073741811;
  v32[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v32, a1);
  v7 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  if ( !v32[0] )
    return (unsigned int)v6;
  v9 = *(_QWORD *)(v32[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v22);
  v31 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v29 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v24, v11, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v39, (struct PDEVOBJ *)&v29);
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
        v23 = 0LL;
      }
      if ( v27 )
      {
        GreDeleteDC(v27);
        v27 = 0LL;
      }
      goto LABEL_30;
    }
    *(_QWORD *)&v40.left = 0LL;
    *(_QWORD *)&v40.right = 0LL;
    v33 = v9;
    if ( v9 )
    {
      v12 = *(_DWORD *)(v9 + 40);
      if ( (v12 & 0x400) == 0 && (v12 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33) )
        {
          *(_QWORD *)&v40.left = *(_QWORD *)(v9 + 2584);
          v40.right = v40.left + *(_DWORD *)(*(_QWORD *)(v9 + 2592) + 172LL);
          v40.bottom = v40.top + *(_DWORD *)(*(_QWORD *)(v9 + 2592) + 176LL);
          v13 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v40, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v13;
          v23 = v13;
          if ( v13 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v34, 0LL, v13);
            v14 = (volatile signed __int32 *)v34;
            if ( !v34 )
            {
LABEL_24:
              v4 = v26;
              goto LABEL_25;
            }
            v35 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v34 + 21);
            v15 = v35;
            vSpDwmUpdateSpriteVisibility(v34, 0);
            v25 = *(struct tagSIZE *)(*(_QWORD *)(v9 + 2592) + 172LL);
            if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v14, v15, &v25, &v35) )
            {
              v16 = (struct _SURFOBJ *)*((_QWORD *)v15 + 23);
              v36[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v36, v16);
              v41[0] = 0LL;
              v41[1] = v25;
              v30 = 0LL;
              v37[0] = 0LL;
              v37[1] = 0LL;
              v38 = 0LL;
              if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v29) )
              {
                v17 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
              }
              else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v15 + 23)) + 112) & 1) != 0 )
              {
                v17 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 354);
              }
              else
              {
                v17 = EngBitBlt;
              }
              v18 = v28;
              LODWORD(v37[0]) = v28 & 0xFFFFFF;
              LODWORD(v38) = 0;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, _QWORD *, _QWORD, int))v17)(
                *((_QWORD *)v15 + 23),
                0LL,
                0LL,
                0LL,
                0LL,
                v41,
                &v30,
                0LL,
                v37,
                0LL,
                61680);
              GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v18, 0LL, 0x20400001u, &v40, 0LL, 1, 0);
              DisplayDC = GreCreateDisplayDC(HDEV, 1LL, 0LL);
              v27 = (HDC)DisplayDC;
              if ( DisplayDC )
              {
                v20 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v15 + 23));
                *(_DWORD *)(v20 + 112) |= 0x4000000u;
                GreSelectBitmap(DisplayDC);
                v6 = 0;
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
                _InterlockedDecrement(v14 + 3);
                goto LABEL_23;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
            }
            _InterlockedDecrement(v14 + 3);
LABEL_23:
            v7 = v23;
            goto LABEL_24;
          }
        }
      }
    }
  }
LABEL_25:
  if ( v6 < 0 )
    goto LABEL_26;
LABEL_30:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void **)MmUserProbeAddress;
  *a3 = v23;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = v27;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v24);
  SEMOBJ::vUnlock((SEMOBJ *)&v31);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
  return (unsigned int)v6;
}
