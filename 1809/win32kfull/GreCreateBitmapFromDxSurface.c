/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C0003F84
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C0003F50 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C0291920 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009A870 (hsurfCreateCompatibleSurface.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateBitmapFromDxSurface(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rdi
  __int64 CompatibleSurface; // rsi
  __int64 v12; // rbx
  __int64 v13; // r8
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v16; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v17[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v19[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v20[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[80]; // [rsp+E0h] [rbp-20h] BYREF
  char v22; // [rsp+168h] [rbp+68h] BYREF

  v7 = 0LL;
  CompatibleSurface = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    if ( v18[0] )
    {
      if ( *(_DWORD *)(v18[0] + 32LL) != 1 )
      {
        v12 = *(_QWORD *)(v18[0] + 48LL);
        v16 = v12;
        if ( (*(_DWORD *)(v12 + 40) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v22);
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v17, (struct XDCOBJ *)v18);
          GreAcquireSemaphoreSharedInternal(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v16);
          if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
          {
            LODWORD(v13) = 0;
            if ( (*(_DWORD *)(v12 + 2172) & 0x100) == 0 )
              v13 = **(_QWORD **)(v12 + 1808);
            CompatibleSurface = hsurfCreateCompatibleSurface(
                                  *(_QWORD *)(v18[0] + 48LL),
                                  *(_DWORD *)(v12 + 2108),
                                  v13,
                                  a2,
                                  a3,
                                  1,
                                  0,
                                  0,
                                  0,
                                  1,
                                  a6,
                                  0,
                                  a4,
                                  a5,
                                  a7);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
          DCOBJ::~DCOBJ((DCOBJ *)v21);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v17);
          if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
          {
            bDeleteSurface(CompatibleSurface);
            CompatibleSurface = 0LL;
          }
          v7 = CompatibleSurface;
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
        }
      }
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v19);
    return v7;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
