/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0065580
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C0065550 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00A0014 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  DC *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  HDC *v22; // rcx
  char v23; // bl
  __int64 v24; // rdx
  __int64 CompatibleBitmapInternal; // rsi
  DCVISRGNSHARELOCK *v26; // rcx
  __int64 v27; // rbx
  SURFACE *v28; // rax
  __int64 v29; // rdx
  DCVISRGNSHARELOCK *v30; // rcx
  __int64 v31; // rdx
  SURFACE *v32; // rax
  __int64 v33; // rdx
  SURFACE *v34; // rcx
  DC *v35; // r8
  _BYTE v37[8]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v38[32]; // [rsp+38h] [rbp-80h] BYREF
  struct SURFACE *v39; // [rsp+58h] [rbp-60h]
  _BYTE v40[32]; // [rsp+60h] [rbp-58h] BYREF
  SURFACE *v41; // [rsp+80h] [rbp-38h]
  char v42; // [rsp+C8h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
  {
    if ( !gbDisableTrappedAcRendering )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 330) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v42);
        v13 = *((_QWORD *)*a1 + 62);
        if ( !v13
          || (v14 = *(_QWORD *)(v13 + 640), v14 == PsGetCurrentProcess(v10, v9, v11, v12)) && *(int *)(v13 + 112) >= 0
          || (v18 = *a1, *((_QWORD *)*a1 + 59))
          && *((_DWORD *)v18 + 122)
          && !*((_DWORD *)v18 + 123)
          && (v19 = *((_QWORD *)v18 + 60), PsGetCurrentProcess(v10, v15, v16, v17) == v19) )
        {
          LOBYTE(v27) = 1;
LABEL_36:
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
          return v27;
        }
        SURFREF::SURFREF((SURFREF *)v40);
        SURFREF::SURFREF((SURFREF *)v38);
        v22 = (HDC *)*a1;
        if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
        {
          v23 = 0;
          if ( !(unsigned int)GreGetLockCount(v22, v20, v21)
            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
          {
            GreAcquireSemaphore(ghsemGreLock);
            v23 = 1;
          }
          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v37);
          DC::vSetRendering(*a1);
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
          if ( !CompatibleBitmapInternal )
          {
            DC::vClearRendering(*a1);
            if ( v23 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v26);
            LOBYTE(v27) = 0;
            goto LABEL_30;
          }
          LOBYTE(v24) = 5;
          v28 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v24);
          LOBYTE(v29) = 5;
          v41 = v28;
          v39 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v29);
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v30);
          if ( v23 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
        }
        else
        {
          v27 = GreCreateCompatibleBitmapInternal(*v22, 0LL, 0LL);
          if ( !v27 )
          {
LABEL_30:
            if ( v39 )
              DEC_SHARE_REF_CNT(v39);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v38);
            if ( v41 )
              DEC_SHARE_REF_CNT(v41);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
            goto LABEL_36;
          }
          LOBYTE(v31) = 5;
          v32 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v31);
          LOBYTE(v33) = 5;
          v41 = v32;
          v39 = (struct SURFACE *)HmgShareLock(v27, v33);
        }
        v34 = v41;
        *a2 = *(HSURF *)v41;
        *a3 = *(HSURF *)v39;
        INC_SHARE_REF_CNT(v34);
        v35 = *a1;
        if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v41) )
        {
          ++*((_DWORD *)v39 + 81);
          v35 = *a1;
        }
        *((_QWORD *)v35 + 63) = *a2;
        DC::pSurface(*a1, v39);
        INC_SHARE_REF_CNT(v39);
        if ( a4 )
        {
          *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
          *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
        }
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        LOBYTE(v27) = 1;
        goto LABEL_30;
      }
    }
  }
  return 1;
}
