/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C007D4E8
 * Callers:
 *     GreCreateSprite @ 0x1C00C4680 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0136AF0 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0079CE8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C007B65C (DwmAsyncZorderSprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C6438 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C7514 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z @ 0x1C00C77CC (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00F7708 (DwmAsyncCreateSprite.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8F9C (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0138130 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0249D28 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

unsigned __int16 *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned __int16 *v11; // r14
  unsigned __int64 v16; // rdx
  HSPRITE DwmSpriteObj; // rax
  DWMSPRITE *v18; // rdi
  __int64 *v19; // rbx
  unsigned __int16 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  HSPRITE NeighborSprite; // r12
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  void *v28; // rax
  unsigned __int16 *v29; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  void *v35; // rax
  struct DWMSPRITE *v36; // r8
  struct tagMINIWINDOWINFO *v37; // [rsp+28h] [rbp-D8h]
  struct PDEVOBJ *v38; // [rsp+48h] [rbp-B8h] BYREF
  DWMSPRITE *v39; // [rsp+50h] [rbp-B0h] BYREF
  char v40[8]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[144]; // [rsp+80h] [rbp-80h] BYREF

  v11 = 0LL;
  v38 = a2;
  v41 = a11;
  if ( !a6 || !g_pDwmState )
    return (unsigned __int16 *)GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v40, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v44, 0, 0x88uLL);
  if ( a4 )
    v16 = *((_QWORD *)a4 + 6);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = hspCreateDwmSpriteObj((HWND)a2, v16, a1, a8);
  v39 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v39, DwmSpriteObj);
  v18 = v39;
  if ( v39 )
  {
    v19 = (__int64 *)*((_QWORD *)v39 + 21);
    if ( a3 )
      *(struct tagRECT *)((char *)v39 + 56) = *a3;
    v20 = v41;
    *((_DWORD *)v18 + 41) = (2 * (a8 & 1)) | *((_DWORD *)v18 + 41) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v19 + 63) = (*((_DWORD *)v19 + 63) ^ (4 * a9)) & 4 ^ ((16 * (a8 & 1)) | *((_DWORD *)v19 + 63) & 0xFFFFFFEF);
    *((_DWORD *)v18 + 41) ^= (*((_DWORD *)v18 + 41) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v41 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v41, 0, 1);
    if ( !v38 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v44, (char *)v18 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v44;
    }
    if ( (*((_DWORD *)v19 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v42);
      v24 = *v19;
      v19[10] = v42;
      EtwTraceLifetimeAccum(v24, 1LL);
      if ( v43 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
    }
    v25 = *((_DWORD *)v19 + 63) & 1;
    v26 = *((_DWORD *)v18 + 41) & 1;
    v27 = v26 | *((_DWORD *)v19 + 63) & 0xC | (2 * (v25 | (4 * (*((_DWORD *)v18 + 41) & 0xE))));
    v28 = (void *)UserReferenceDwmApiPort(v26, v25, v21, v22);
    v37 = a4;
    v29 = v41;
    if ( (int)DwmAsyncCreateSprite(v28, v27, (__int64)v37, a5) < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
      v36 = v18;
      v18 = 0LL;
      v39 = 0LL;
      vspDestroyDwmSpriteObjInternal(a1, 0, v36);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_QWORD *)g_pDwmState + 18) )
        {
          v38 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v38, NeighborSprite);
          v35 = (void *)UserReferenceDwmApiPort(v32, v31, v33, v34);
          DwmAsyncZorderSprite(v35, (__int64)v29, (__int64)NeighborSprite);
          if ( v38 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
            v18 = v39;
          }
        }
      }
      v11 = v29;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v40);
  return v11;
}
