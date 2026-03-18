/*
 * XREFs of GreProtectSpriteContent @ 0x1C026CEA8
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C02443DC (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0030998 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0030A78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0030AC0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E2090 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00E2234 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, int a4)
{
  int v4; // esi
  unsigned int v7; // r13d
  __int64 v8; // rdi
  SFMLOGICALSURFACE *v9; // r15
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  int v22; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v23[4]; // [rsp+64h] [rbp-44h] BYREF
  _QWORD v24[8]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+18h] BYREF

  v25 = a1;
  v4 = 0;
  v7 = 0;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v23, a2, 0LL, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v24, (HWND)a2);
    v8 = v24[0];
    if ( v24[0] )
    {
      v7 = 1;
      v9 = *(SFMLOGICALSURFACE **)(v24[0] + 168LL);
      if ( ((*(_DWORD *)(v24[0] + 164LL) >> 3) & 1) != a4 )
      {
        *(_DWORD *)(v24[0] + 164LL) ^= ((unsigned __int8)*(_DWORD *)(v24[0] + 164LL) ^ (unsigned __int8)(8 * a4)) & 8;
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v9,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v22,
          (unsigned int *)&v25,
          &v26,
          0LL,
          0LL);
        v10 = *((_DWORD *)v9 + 63);
        v11 = *(_DWORD *)(v8 + 164);
        v12 = *(_QWORD *)(v8 + 104);
        v13 = *(_QWORD *)v8;
        v14 = v10 & 1;
        *(_QWORD *)(v8 + 104) = 0LL;
        v15 = *(_QWORD *)v9;
        v16 = v10 & 0xC;
        v17 = v16 | v11 & 1 | (2 * (v14 | (4 * (v11 & 0xE))));
        LOBYTE(v4) = *(_DWORD *)(v8 + 116) >= 1;
        v20 = (void *)UserReferenceDwmApiPort(v16, v14, v18, v19);
        DwmAsyncUpdateSprite(v20, v13, v15, v17, v8 + 72, 0LL, v22, v25, v26, v4, v12);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v23);
  }
  return v7;
}
