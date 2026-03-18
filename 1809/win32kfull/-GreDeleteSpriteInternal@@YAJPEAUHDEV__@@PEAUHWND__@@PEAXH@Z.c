/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000DCCC
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A25C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C000AEC4 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     GreDeleteSprite @ 0x1C000DC58 (GreDeleteSprite.c)
 * Callees:
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C000AF54 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C000DF28 (DwmAsyncDestroySprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C000E15C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C000E268 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0074DA8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  struct DWMSPRITE *v8; // rsi
  __int64 v9; // rdi
  void *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // rcx
  W32PIDLOCK *v16; // rdi
  __int64 v17; // rax
  struct DWMSPRITE *v18; // r8
  _BYTE v20[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v21[32]; // [rsp+28h] [rbp-50h] BYREF
  struct DWMSPRITE *v22; // [rsp+48h] [rbp-30h]

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v20, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v21, (HWND)a2, a3);
    v8 = v22;
    if ( v22 )
    {
      v9 = *((_QWORD *)v22 + 21);
      v10 = (void *)UserReferenceDwmApiPort();
      v11 = DwmAsyncDestroySprite(v10);
      v12 = *(_QWORD *)(v9 + 184);
      v13 = v11;
      if ( !v12 )
        goto LABEL_10;
      v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v14) )
        goto LABEL_10;
      v16 = (W32PIDLOCK *)(v15 + 272);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v15 + 272));
      if ( *(_DWORD *)(v14 + 324) && (*(_DWORD *)(v14 + 116) & 2) == 0 )
      {
        *((_DWORD *)v8 + 41) |= 0x10u;
        vspRemoveStateReferencesForSprite(v8);
        *(_QWORD *)(v14 + 504) = 0LL;
        *(_QWORD *)(v14 + 496) = a1;
        v17 = *(_QWORD *)v8;
        *(_DWORD *)(v14 + 116) |= 2u;
        *(_DWORD *)(v14 + 520) = 1;
        v4 = 0;
        *(_QWORD *)(v14 + 512) = v17;
      }
      W32PIDLOCK::vUnlockSingleThread(v16);
      if ( v4 )
      {
LABEL_10:
        *((_DWORD *)v8 + 16) = *((_DWORD *)v8 + 14);
        *((_DWORD *)v8 + 17) = *((_DWORD *)v8 + 15);
        v18 = v22;
        if ( v22 )
          _InterlockedDecrement((volatile signed __int32 *)v22 + 3);
        v22 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v18);
      }
      v8 = v22;
    }
    else
    {
      v13 = -2143354870;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
    v22 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v21);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v20);
  }
  else
  {
    return (unsigned int)GdiDeleteSprite(a1, (HWND)a2, a3);
  }
  return v13;
}
