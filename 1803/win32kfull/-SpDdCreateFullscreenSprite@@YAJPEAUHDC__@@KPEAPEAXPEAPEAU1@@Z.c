/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C023AC68
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0243BA0 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0079D14 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C007B280 (GreUpdateSprite.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C007C97C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007D4C0 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F364 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C00C4078 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C00C4680 (GreCreateSprite.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00CF058 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0137060 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // rbx
  int v6; // r14d
  unsigned __int16 *v7; // rdi
  __int64 v9; // rsi
  HDEV HDEV; // r15
  struct PDEVOBJ *v11; // rdx
  int v12; // eax
  unsigned __int16 *v13; // rax
  __int64 v14; // r8
  volatile signed __int32 *v15; // rbx
  struct SFMLOGICALSURFACE *v16; // r13
  struct _SURFOBJ *v17; // rdx
  unsigned int v18; // esi
  __int64 DisplayDC; // rdi
  __int64 v20; // rax
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  char v22[8]; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int16 *v23; // [rsp+88h] [rbp-150h]
  char v24[8]; // [rsp+90h] [rbp-148h] BYREF
  struct tagSIZE v25; // [rsp+98h] [rbp-140h] BYREF
  HDC *v26; // [rsp+A0h] [rbp-138h]
  HDC v27; // [rsp+A8h] [rbp-130h]
  unsigned int v28; // [rsp+B0h] [rbp-128h]
  _QWORD v29[2]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-110h] BYREF
  _QWORD v31[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-F8h] BYREF
  struct DWMSPRITE *v33; // [rsp+E8h] [rbp-F0h] BYREF
  struct SFMLOGICALSURFACE *v34; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v35[2]; // [rsp+F8h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+108h] [rbp-D0h]
  __int64 v37; // [rsp+110h] [rbp-C8h]
  __int64 v38; // [rsp+118h] [rbp-C0h]
  _BYTE v39[80]; // [rsp+120h] [rbp-B8h] BYREF
  struct tagRECT v40; // [rsp+170h] [rbp-68h] BYREF
  __int64 v41; // [rsp+180h] [rbp-58h]
  struct tagSIZE v42; // [rsp+188h] [rbp-50h]

  v4 = a4;
  v26 = a4;
  v28 = a2;
  v6 = -1073741811;
  v31[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v31, a1);
  v7 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  if ( !v31[0] )
    return (unsigned int)v6;
  v9 = *(_QWORD *)(v31[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v22);
  v30 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v29[0] = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v24, v11, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v39, (struct PDEVOBJ *)v29);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_23:
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
      goto LABEL_27;
    }
    v32 = v9;
    if ( v9 )
    {
      v12 = *(_DWORD *)(v9 + 40);
      if ( (v12 & 0x400) == 0 && (v12 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v32) )
        {
          v40.left = *(_DWORD *)(v9 + 2576);
          v40.top = *(_DWORD *)(v9 + 2580);
          v40.right = v40.left + *(_DWORD *)(*(_QWORD *)(v9 + 2584) + 172LL);
          v40.bottom = v40.top + *(_DWORD *)(*(_QWORD *)(v9 + 2584) + 176LL);
          v13 = GreCreateSprite(HDEV, 0LL, &v40, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v13;
          v23 = v13;
          if ( v13 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v33, 0LL, (HSPRITE)v13);
            v15 = (volatile signed __int32 *)v33;
            if ( !v33 )
            {
LABEL_21:
              v4 = v26;
              goto LABEL_22;
            }
            v34 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v33 + 21);
            v16 = v34;
            vSpDwmUpdateSpriteVisibility(v33, 0LL, v14);
            v25 = *(struct tagSIZE *)(*(_QWORD *)(v9 + 2584) + 172LL);
            if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v15, v16, &v25, &v34) )
            {
              v17 = (struct _SURFOBJ *)*((_QWORD *)v16 + 23);
              v35[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v35, v17);
              v41 = 0LL;
              v42 = v25;
              v29[1] = 0LL;
              v36 = 0LL;
              v37 = 0LL;
              v38 = 0LL;
              if ( !(unsigned int)bNeedRenderHint((struct PDEVOBJ *)v29) )
                SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 23));
              v18 = v28;
              LODWORD(v36) = v28 & 0xFFFFFF;
              LODWORD(v38) = 0;
              _guard_dispatch_icall_fptr();
              GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v18, 0LL, 0x20400001u, &v40, 0LL, 1, 0);
              DisplayDC = GreCreateDisplayDC(HDEV, 1LL, 0LL);
              v27 = (HDC)DisplayDC;
              if ( DisplayDC )
              {
                v20 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 23));
                *(_DWORD *)(v20 + 112) |= 0x4000000u;
                GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 23) + 8LL));
                v6 = 0;
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
                _InterlockedDecrement(v15 + 3);
                goto LABEL_20;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
            }
            _InterlockedDecrement(v15 + 3);
LABEL_20:
            v7 = v23;
            goto LABEL_21;
          }
        }
      }
    }
  }
LABEL_22:
  if ( v6 < 0 )
    goto LABEL_23;
LABEL_27:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  XDCOBJ::vUnlockFast((XDCOBJ *)v31);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void **)MmUserProbeAddress;
  *a3 = v23;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = v27;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v24);
  SEMOBJ::vUnlock((SEMOBJ *)&v30);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
  return (unsigned int)v6;
}
