/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C029953C
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02A6FD0 (NtGdiCreateBitmapFromDxSurface.c)
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C02A7000 (NtGdiCreateBitmapFromDxSurface2.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00BE910 (hsurfCreateCompatibleSurface.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
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
  __int64 CompatibleSurface; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  HPALETTE v14; // r8
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  _BYTE v17[8]; // [rsp+80h] [rbp-51h] BYREF
  _QWORD v18[3]; // [rsp+88h] [rbp-49h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-21h]
  int v21; // [rsp+B8h] [rbp-19h]
  _QWORD v22[2]; // [rsp+C0h] [rbp-11h] BYREF
  __int16 v23; // [rsp+D0h] [rbp-1h]
  __int64 v24; // [rsp+D8h] [rbp+7h]
  __int64 v25; // [rsp+E0h] [rbp+Fh]
  char v26; // [rsp+128h] [rbp+57h] BYREF

  CompatibleSurface = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    v11 = v18[0];
    if ( v18[0] )
    {
      if ( *(_DWORD *)(v18[0] + 32LL) != 1 )
      {
        v12 = *(_QWORD *)(v18[0] + 48LL);
        if ( (*(_DWORD *)(v12 + 40) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v26);
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v17, (struct XDCOBJ *)v18);
          GreAcquireSemaphoreSharedInternal(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
          v13 = *(_DWORD *)(v12 + 40);
          v19 = 0LL;
          v22[1] = 0LL;
          v23 = 256;
          v25 = 0LL;
          v24 = 0LL;
          v22[0] = 0LL;
          v21 = 1;
          if ( (v13 & 1) != 0 )
          {
            *(_QWORD *)&v19 = *(_QWORD *)(v12 + 48);
            v20 = v12;
            GreAcquireSemaphore(v19);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v19, 11LL);
          }
          if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
          {
            v14 = 0LL;
            if ( (*(_DWORD *)(v12 + 2172) & 0x100) == 0 )
              v14 = **(HPALETTE **)(v12 + 1808);
            CompatibleSurface = hsurfCreateCompatibleSurface(
                                  *(_QWORD *)(v18[0] + 48LL),
                                  *(_DWORD *)(v12 + 2108),
                                  v14,
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
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v19);
          if ( v22[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v22);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v17);
          if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
          {
            bDeleteSurface(CompatibleSurface);
            CompatibleSurface = 0LL;
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
          v11 = v18[0];
        }
      }
      if ( v11 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v18);
    }
    return CompatibleSurface;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
