/*
 * XREFs of NtGdiPatBlt @ 0x1C009DAD0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000CCE4 (xxxPaintMenuBar.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     EraseBitmap @ 0x1C00BCC8C (EraseBitmap.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 *     DrawThumb2 @ 0x1C012F804 (DrawThumb2.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C01FFE00 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0207BCC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0207DFC (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C02086EC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C020881C (xxxMNDrawFullNC.c)
 *     DxgkEngColorFillViaGDI @ 0x1C0243310 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F01C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F1EC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C009E760 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // esi
  unsigned int v8; // r14d
  unsigned int v10; // ebx
  int v11; // edi
  char *v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  int v16; // r10d
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  struct SURFACE *v20; // rdi
  __int64 v21; // rdx
  unsigned int locked; // eax
  DC *v23; // rax
  __int64 v24; // rbx
  DC *v25; // rcx
  __int64 v26; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  HSURF *v35; // rdi
  __int64 v36; // rax
  DC *v37; // r15
  __int64 v38; // rbx
  HSURF v39; // rsi
  DC *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  char v44; // bl
  __int64 v45; // rax
  DCVISRGNSHARELOCK *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  int v50; // [rsp+20h] [rbp-E0h]
  DC *v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  char v53[4]; // [rsp+80h] [rbp-80h] BYREF
  int v54[3]; // [rsp+84h] [rbp-7Ch] BYREF
  __int128 v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-60h]
  int v57; // [rsp+A8h] [rbp-58h]
  int v58; // [rsp+ACh] [rbp-54h]
  DC *v59; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  HDC v63; // [rsp+D0h] [rbp-30h]
  HDC v64; // [rsp+E0h] [rbp-20h] BYREF
  char *v65; // [rsp+E8h] [rbp-18h] BYREF
  int v66; // [rsp+F0h] [rbp-10h]
  int v67; // [rsp+F4h] [rbp-Ch]
  DC *v68[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v69; // [rsp+108h] [rbp+8h] BYREF
  int v70; // [rsp+10Ch] [rbp+Ch]
  int v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+114h] [rbp+14h]

  v64 = a1;
  v7 = a2;
  v8 = 0;
  v52 = 0LL;
  LOBYTE(a2) = 1;
  v51 = (DC *)HmgLockEx(a1, a2);
  if ( v51 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v51) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v51 + 3);
      return v8;
    }
    if ( (*((_DWORD *)v51 + 132) & 4) != 0 )
      DC::vMarkTransformDirty(v51);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v51 )
    return v8;
  v10 = (BYTE2(a6) << 8) | BYTE2(a6);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    v66 = *(_DWORD *)(*((_QWORD *)v51 + 10) + 68LL);
    v11 = *(_DWORD *)(*((_QWORD *)v51 + 10) + 312LL) & 1;
    v67 = v11;
    if ( (*(_DWORD *)(*((_QWORD *)v51 + 10) + 352LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v65, (struct XDCOBJ *)&v51, 0x204u, 0);
      v12 = v65;
      v11 = v67;
    }
    else
    {
      v12 = (char *)v51 + 328;
      v65 = (char *)v51 + 328;
    }
    v13 = *((_DWORD *)v12 + 8);
    v14 = v7;
    if ( (v13 & 1) != 0 )
    {
      v69 = v7;
      v70 = a3;
      v15 = a4 + v7;
      v71 = a4 + v7;
      v16 = a3 + a5;
      v72 = a3 + a5;
      v17 = a3;
      if ( (v13 & 0x43) != 0x43 )
      {
        bCvtPts1(v12, &v69, 2LL);
        v16 = v72;
        v15 = v71;
        v17 = v70;
        v14 = v69;
      }
      if ( v11 )
      {
        ++v14;
        ++v15;
        v69 = v14;
        v71 = v15;
      }
      if ( v14 > v15 )
      {
        v18 = v14;
        v14 = v15;
        v69 = v15;
        v15 = v18;
        v71 = v18;
      }
      if ( v17 > v16 )
      {
        v19 = v17;
        v70 = v16;
        v17 = v16;
        v72 = v19;
        v16 = v19;
      }
      if ( v14 != v15 && v17 != v16 )
      {
        if ( (*((_DWORD *)v51 + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v51, (struct ERECTL *)&v69);
        if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
          bSpDwmValidateSurface((struct XDCOBJ *)&v51, v7, a3, a4, a5);
        v60 = 0LL;
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0;
        v59 = 0LL;
        v63 = 0LL;
        v62 = 0LL;
        v61 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v55, (struct XDCOBJ *)&v51, 0) )
        {
          v20 = (struct SURFACE *)*((_QWORD *)v51 + 63);
          if ( !v20 )
          {
            v8 = 1;
LABEL_37:
            v23 = v59;
            if ( v59 )
            {
              v24 = *((_QWORD *)v59 + 6);
              if ( (v57 & 0x1000) != 0 )
              {
                DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v55);
                if ( (v57 & 0x10) != 0 )
                {
                  *((_DWORD *)v59 + 9) &= ~0x4000u;
                  v25 = v59;
                  *((_QWORD *)v59 + 63) = *(_QWORD *)(v24 + 2544);
                  DC::vInheritSurfaceDpiScale(v25);
                }
                DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v55);
                v23 = v59;
              }
              if ( v23 )
              {
                XDCOBJ::RestoreAttributes((XDCOBJ *)&v59);
                v54[0] = 0;
                v26 = *(_QWORD *)v59;
                HmgDecrementExclusiveReferenceCountEx(v59, HIDWORD(v60), v54);
                if ( v54[0] )
                  bDeleteDCInternalEx(v26, 0LL);
              }
              v59 = 0LL;
            }
            if ( (v57 & 0x1000) != 0 )
            {
              GreDecLockCount();
              v57 &= ~0x1000u;
              CurrentThread = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28) )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                {
                  v31 = *ThreadWin32Thread;
                  if ( v31 )
                  {
                    *(_QWORD *)(v31 + 320) = 0LL;
                    *(_QWORD *)(v31 + 312) = 0LL;
                  }
                }
              }
            }
            else if ( (v57 & 0x800000) != 0 )
            {
              GreDecLockCount();
              v57 &= ~0x800000u;
            }
            if ( (_QWORD)v55 )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v55);
              GreReleaseSemaphoreInternal(v55);
            }
            if ( (v57 & 8) != 0 )
              v57 &= ~8u;
            if ( *((_QWORD *)&v55 + 1) )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v55 + 1));
              GreReleaseSemaphoreInternal(*((_QWORD *)&v55 + 1));
            }
            if ( v62 )
            {
              v68[1] = 0LL;
              XDCOBJ::vLock((XDCOBJ *)v68, v63);
              LOBYTE(v32) = 5;
              v33 = HmgShareLock(v61, v32);
              LOBYTE(v34) = 5;
              v35 = (HSURF *)v33;
              v36 = HmgShareLock(v62, v34);
              v37 = v68[0];
              v38 = v36;
              v39 = *v35;
              v40 = v68[0];
              *((_QWORD *)v68[0] + 63) = v36;
              DC::vInheritSurfaceDpiScale(v40);
              DEC_SHARE_REF_CNT(v35);
              DEC_SHARE_REF_CNT(v38);
              GreDereferenceObject(v39);
              v63 = 0LL;
              v61 = 0LL;
              *((_DWORD *)v37 + 9) |= v58;
              if ( (*((_DWORD *)v37 + 9) & 0x200) != 0 )
              {
                v44 = 0;
                if ( !(unsigned int)GreGetLockCount(v42, v41, v43)
                  && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                {
                  GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                  v44 = 1;
                }
                DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v53);
                LOBYTE(v50) = 5;
                v45 = HmgShareUnlockRemoveObject(v62, 0LL, 0LL, 0LL, v50);
                if ( v45 )
                  SURFACE::bDeleteSurface(v45, 0LL, 1LL);
                *((_QWORD *)v37 + 64) = 0LL;
                DC::vClearRendering(v37);
                v62 = 0LL;
                DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v46);
                if ( v44 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                  GreReleaseSemaphoreInternal(ghsemGreLock);
                }
              }
              else
              {
                LOBYTE(v50) = 5;
                v47 = HmgShareUnlockRemoveObject(v62, 0LL, 0LL, 0LL, v50);
                if ( v47 )
                  SURFACE::bDeleteSurface(v47, 0LL, 1LL);
                *((_QWORD *)v37 + 64) = 0LL;
                v62 = 0LL;
              }
              XDCOBJ::vUnlockFast((XDCOBJ *)v68);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            }
            goto LABEL_74;
          }
          v21 = *((_QWORD *)v51 + 10);
          if ( (*(_DWORD *)(v21 + 8) & 0x1000) != 0 )
            GreDCSelectBrush(v51, *(_QWORD *)(v21 + 16));
          locked = GrePatBltLockedDC(
                     (struct XDCOBJ *)&v51,
                     (struct EXFORMOBJ *)*(unsigned int *)(*((_QWORD *)v51 + 10) + 44LL),
                     (struct ERECTL *)&v69,
                     v10,
                     v20,
                     *(_DWORD *)(*((_QWORD *)v51 + 10) + 40LL),
                     *(_DWORD *)(*((_QWORD *)v51 + 10) + 32LL),
                     *(_DWORD *)(*((_QWORD *)v51 + 10) + 44LL),
                     *(_DWORD *)(*((_QWORD *)v51 + 10) + 36LL));
        }
        else
        {
          locked = XDCOBJ::bFullScreen((XDCOBJ *)&v51);
        }
        v8 = locked;
        goto LABEL_37;
      }
      v8 = 1;
    }
    else
    {
      v8 = GreMaskBlt(v64, a5, 0LL, 0, 0, 0LL, 0, 0, v10 << 16, 0);
    }
  }
LABEL_74:
  if ( v51 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v51);
    LODWORD(v64) = 0;
    v48 = *(_QWORD *)v51;
    HmgDecrementExclusiveReferenceCountEx(v51, HIDWORD(v52), &v64);
    if ( (_DWORD)v64 )
      bDeleteDCInternalEx(v48, 0LL);
  }
  return v8;
}
