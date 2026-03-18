/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C008D7B0
 * Callers:
 *     GreCreateSprite @ 0x1C008D6E8 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010658C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002FB14 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0030A78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0030AC0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C0031080 (DwmAsyncZorderSprite.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00819A0 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008C744 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C008DB4C (DwmAsyncCreateSprite.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C008DCA8 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008DE10 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8954 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0113DF8 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

struct SPRITE *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct _RECTL *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned __int16 *v11; // r15
  unsigned __int64 v16; // rdx
  HSPRITE DwmSpriteObj; // rax
  DWMSPRITE *v18; // rdi
  __int64 *v19; // rbx
  unsigned __int16 *v20; // rdx
  HSPRITE NeighborSprite; // r13
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // rax
  unsigned __int16 *v25; // rbx
  void *v27; // rax
  struct DWMSPRITE *v28; // r8
  int v29; // [rsp+20h] [rbp-E0h]
  unsigned __int16 *v30; // [rsp+48h] [rbp-B8h] BYREF
  struct PDEVOBJ *v31; // [rsp+50h] [rbp-B0h]
  DWMSPRITE *v32; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-A0h] BYREF
  HDEV v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[144]; // [rsp+80h] [rbp-80h] BYREF

  v11 = 0LL;
  v31 = a2;
  v34 = a1;
  v30 = a11;
  if ( !a6 || !g_pDwmState )
    return GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v33, a2, 0LL, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v37, 0, 0x88uLL);
  if ( a4 )
    v16 = *((_QWORD *)a4 + 6);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = hspCreateDwmSpriteObj((HWND)a2, v16, a1, a8);
  v32 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v32, DwmSpriteObj);
  v18 = v32;
  if ( v32 )
  {
    v19 = (__int64 *)*((_QWORD *)v32 + 21);
    *((_DWORD *)v32 + 29) = 0;
    if ( a3 )
      *(struct _RECTL *)((char *)v18 + 56) = *a3;
    v20 = v30;
    *((_DWORD *)v18 + 41) = (2 * (a8 & 1)) | *((_DWORD *)v18 + 41) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v19 + 63) = (*((_DWORD *)v19 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v19 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v18 + 41) ^= (*((_DWORD *)v18 + 41) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v30 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v30, 0, 1);
    if ( !v31 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v37, (char *)v18 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v37;
    }
    if ( (*((_DWORD *)v19 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
      v22 = *v19;
      v19[10] = v35;
      EtwTraceLifetimeAccum(v22, 1LL);
      if ( v36 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
    }
    v23 = *((_DWORD *)v18 + 41) & 1 | *((_DWORD *)v19 + 63) & 0xC | (2
                                                                   * (*((_DWORD *)v19 + 63) & 1 | (4
                                                                                                 * (*((_DWORD *)v18 + 41) & 0xE))));
    v24 = (void *)UserReferenceDwmApiPort();
    v29 = v23;
    v25 = v30;
    if ( (int)DwmAsyncCreateSprite(v24, v29, (__int64)a4, a5) < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
      v28 = v18;
      v18 = 0LL;
      v32 = 0LL;
      vspDestroyDwmSpriteObjInternal(v34, 0LL, v28);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_QWORD *)g_pDwmState + 18) )
        {
          v30 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v30, NeighborSprite);
          v27 = (void *)UserReferenceDwmApiPort();
          DwmAsyncZorderSprite(v27, (__int64)v25, (__int64)NeighborSprite);
          if ( v30 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v30 + 3);
            v18 = v32;
          }
        }
      }
      v11 = v25;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v33);
  return (struct SPRITE *)v11;
}
