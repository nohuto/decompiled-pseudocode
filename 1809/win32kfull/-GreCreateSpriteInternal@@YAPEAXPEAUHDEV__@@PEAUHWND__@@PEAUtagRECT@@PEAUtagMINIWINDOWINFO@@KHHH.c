/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C007C300
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A25C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     GreCreateSprite @ 0x1C007C238 (GreCreateSprite.c)
 * Callees:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C000E15C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0074E04 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C00767A4 (DwmAsyncZorderSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C007C744 (DwmAsyncCreateSprite.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C007C8A0 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA08 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0095E04 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0114EA4 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012D1A4 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  unsigned __int16 *v11; // r15
  unsigned __int64 v16; // rdx
  HSPRITE DwmSpriteObj; // rbx
  DWMSPRITE *v18; // rdi
  __int64 *v19; // r14
  unsigned __int16 *v20; // rdx
  HSPRITE NeighborSprite; // r13
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  void *v25; // rax
  unsigned __int16 *v26; // rbx
  __int64 v27; // rcx
  void *v28; // rax
  struct DWMSPRITE *v29; // r8
  int v31; // [rsp+20h] [rbp-E0h]
  _BYTE v32[4]; // [rsp+44h] [rbp-BCh] BYREF
  struct PDEVOBJ *v33; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v34; // [rsp+50h] [rbp-B0h]
  HDEV v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  _BYTE v38[32]; // [rsp+70h] [rbp-90h] BYREF
  DWMSPRITE *v39; // [rsp+90h] [rbp-70h]
  _BYTE v40[32]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  _BYTE v42[144]; // [rsp+C0h] [rbp-40h] BYREF

  v11 = 0LL;
  v33 = a2;
  v35 = a1;
  v34 = a11;
  if ( !a6 || !g_pDwmState )
    return (unsigned __int16 *)GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v32, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v42, 0, 0x88uLL);
  if ( a4 )
    v16 = *((_QWORD *)a4 + 6);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = hspCreateDwmSpriteObj((HWND)a2, v16, a1, a8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v38);
  v39 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v38, DwmSpriteObj);
  v18 = v39;
  if ( v39 )
  {
    *((_DWORD *)v39 + 29) = 0;
    v19 = (__int64 *)*((_QWORD *)v18 + 21);
    if ( a3 )
      *(struct tagRECT *)((char *)v18 + 56) = *a3;
    v20 = v34;
    *((_DWORD *)v18 + 41) = (2 * (a8 & 1)) | *((_DWORD *)v18 + 41) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v19 + 63) = (*((_DWORD *)v19 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v19 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v18 + 41) ^= (*((_DWORD *)v18 + 41) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v34 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v34, 0, 1);
    if ( !v33 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v42, (char *)v18 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v42;
    }
    if ( (*((_DWORD *)v19 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
      v22 = *v19;
      v19[10] = v36;
      EtwTraceLifetimeAccum(v22, 1LL);
      if ( v37 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
    }
    v23 = *((_DWORD *)v18 + 41) & 1;
    v24 = v23 | *((_DWORD *)v19 + 63) & 0xC | (2 * (*((_DWORD *)v19 + 63) & 1 | (4 * (*((_DWORD *)v18 + 41) & 0xE))));
    v25 = (void *)UserReferenceDwmApiPort(v23);
    v31 = v24;
    v26 = v34;
    if ( (int)DwmAsyncCreateSprite(v25, v31, (__int64)a4, a5) < 0 )
    {
      v29 = v39;
      if ( v39 )
        _InterlockedDecrement((volatile signed __int32 *)v39 + 3);
      v39 = 0LL;
      vspDestroyDwmSpriteObjInternal(v35, 0LL, v29);
    }
    else
    {
      if ( NeighborSprite && *((_QWORD *)g_pDwmState + 18) )
      {
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
        v41 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v40, NeighborSprite);
        v28 = (void *)UserReferenceDwmApiPort(v27);
        DwmAsyncZorderSprite(v28, (__int64)v26, (__int64)NeighborSprite);
        if ( v41 )
          _InterlockedDecrement((volatile signed __int32 *)(v41 + 12));
        v41 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
      }
      v11 = v26;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v39 )
      _InterlockedDecrement((volatile signed __int32 *)v39 + 3);
  }
  v39 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v38);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v32);
  return v11;
}
