/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C40E8
 * Callers:
 *     GreDeleteSprite @ 0x1C00C4078 (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0136AF0 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0137284 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0079D14 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncDestroySprite @ 0x1C00C42A8 (DwmAsyncDestroySprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C6438 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C00C6534 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0249E74 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DWMSPRITE *v12; // rbx
  __int64 v13; // rsi
  void *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebp
  struct DWMSPRITE *v18; // r8
  __int64 v20; // rdi
  __int64 v21; // rcx
  W32PIDLOCK *v22; // rsi
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v25; // [rsp+28h] [rbp-30h] BYREF

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v24, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v25, (HWND)a2, a3);
    v12 = v25;
    if ( v25 )
    {
      v13 = *((_QWORD *)v25 + 21);
      v14 = (void *)UserReferenceDwmApiPort(v9, v8, v10, v11);
      v15 = DwmAsyncDestroySprite(v14);
      v16 = *(_QWORD *)(v13 + 184);
      v17 = v15;
      if ( !v16 )
        goto LABEL_5;
      v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v20) )
        goto LABEL_5;
      v22 = (W32PIDLOCK *)(v21 + 272);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v21 + 272));
      if ( *(_DWORD *)(v20 + 324) && (*(_DWORD *)(v20 + 116) & 2) == 0 )
      {
        *((_DWORD *)v12 + 41) |= 0x10u;
        vspRemoveStateReferencesForSprite(v12);
        *(_QWORD *)(v20 + 504) = 0LL;
        *(_QWORD *)(v20 + 496) = a1;
        v23 = *(_QWORD *)v12;
        *(_DWORD *)(v20 + 116) |= 2u;
        *(_DWORD *)(v20 + 520) = 1;
        v4 = 0;
        *(_QWORD *)(v20 + 512) = v23;
      }
      W32PIDLOCK::vUnlockSingleThread(v22);
      if ( v4 )
      {
LABEL_5:
        v18 = v12;
        *((_DWORD *)v12 + 16) = *((_DWORD *)v12 + 14);
        *((_DWORD *)v12 + 17) = *((_DWORD *)v12 + 15);
        _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
        v12 = 0LL;
        v25 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v18);
      }
    }
    else
    {
      v17 = -2143354870;
    }
    if ( v12 )
      _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v24);
  }
  else
  {
    return (unsigned int)GdiDeleteSprite(a1, (HWND)a2, a3);
  }
  return v17;
}
