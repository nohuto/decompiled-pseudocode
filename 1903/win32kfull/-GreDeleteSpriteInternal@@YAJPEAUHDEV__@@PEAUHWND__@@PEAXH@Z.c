/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00451A8
 * Callers:
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C012B5BC (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C01603B8 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0029668 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002A608 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C002A650 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C003D24C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0043E6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncDestroySprite @ 0x1C00453B4 (DwmAsyncDestroySprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0047D74 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C0047E80 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  struct DWMSPRITE *v8; // rbx
  __int64 v9; // rsi
  void *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  struct DWMSPRITE *v14; // r8
  __int64 v16; // rdi
  __int64 v17; // rcx
  W32PIDLOCK *v18; // rsi
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v21; // [rsp+28h] [rbp-30h] BYREF

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v20, a2, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v21, (HWND)a2, a3);
    v8 = v21;
    if ( v21 )
    {
      v9 = *((_QWORD *)v21 + 21);
      v10 = (void *)UserReferenceDwmApiPort();
      v11 = DwmAsyncDestroySprite(v10);
      v12 = *(_QWORD *)(v9 + 184);
      v13 = v11;
      if ( !v12 )
        goto LABEL_5;
      v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v16) )
        goto LABEL_5;
      v18 = (W32PIDLOCK *)(v17 + 272);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v17 + 272));
      if ( *(_DWORD *)(v16 + 324) && (*(_DWORD *)(v16 + 116) & 2) == 0 )
      {
        *((_DWORD *)v8 + 41) |= 0x10u;
        vspRemoveStateReferencesForSprite(v8);
        *(_QWORD *)(v16 + 504) = 0LL;
        *(_QWORD *)(v16 + 496) = a1;
        v19 = *(_QWORD *)v8;
        *(_DWORD *)(v16 + 116) |= 2u;
        *(_DWORD *)(v16 + 520) = 1;
        v4 = 0;
        *(_QWORD *)(v16 + 512) = v19;
      }
      W32PIDLOCK::vUnlockSingleThread(v18);
      if ( v4 )
      {
LABEL_5:
        v14 = v8;
        *((_DWORD *)v8 + 16) = *((_DWORD *)v8 + 14);
        *((_DWORD *)v8 + 17) = *((_DWORD *)v8 + 15);
        _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
        v8 = 0LL;
        v21 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0, v14);
      }
    }
    else
    {
      v13 = -2143354870;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
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
