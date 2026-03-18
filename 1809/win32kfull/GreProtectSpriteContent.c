/*
 * XREFs of GreProtectSpriteContent @ 0x1C0253F98
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C022BAEC (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C000B9F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BABC (DwmAsyncUpdateSprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, int a4)
{
  unsigned int v6; // r13d
  __int64 v7; // r14
  SFMLOGICALSURFACE *v8; // r15
  int v9; // ecx
  int v10; // eax
  char v11; // dl
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // ebx
  BOOL v17; // edi
  void *v18; // rax
  int v20; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v21[4]; // [rsp+64h] [rbp-5h] BYREF
  _BYTE v22[32]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+E0h] [rbp+77h] BYREF

  v24 = a1;
  v6 = 0;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v22, (HWND)a2);
    v7 = v23;
    if ( v23 )
    {
      v6 = 1;
      v8 = *(SFMLOGICALSURFACE **)(v23 + 168);
      if ( ((*(_DWORD *)(v23 + 164) >> 3) & 1) != a4 )
      {
        *(_DWORD *)(v23 + 164) ^= ((unsigned __int8)*(_DWORD *)(v23 + 164) ^ (unsigned __int8)(8 * a4)) & 8;
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v8,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v20,
          (unsigned int *)&v24,
          &v25,
          0LL,
          0LL);
        v9 = *((_DWORD *)v8 + 63);
        v10 = *(_DWORD *)(v7 + 164);
        v11 = v9;
        v12 = *(_QWORD *)(v7 + 104);
        *(_QWORD *)(v7 + 104) = 0LL;
        v13 = *(_QWORD *)v7;
        v14 = *(_QWORD *)v8;
        v15 = v9 & 0xC;
        v16 = v15 | v10 & 1 | (2 * (v11 & 1 | (4 * (v10 & 0xE))));
        v17 = *(_DWORD *)(v7 + 116) >= 1;
        v18 = (void *)UserReferenceDwmApiPort(v15);
        DwmAsyncUpdateSprite(v18, v13, v14, v16, v7 + 72, 0LL, v20, v24, v25, v17, v12);
        v7 = v23;
      }
      if ( v7 )
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    }
    v23 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v22);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v21);
  }
  return v6;
}
