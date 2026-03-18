/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C010A74C
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C01E3D30 (xxxFlushPalette.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreSetSystemPaletteUse @ 0x1C0287B94 (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rcx
  signed __int32 v10; // ecx
  __int64 v11; // rax
  signed __int32 v12; // ecx
  __int64 v13; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v16[96]; // [rsp+40h] [rbp-9h] BYREF
  int v17; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+7Fh] BYREF

  v17 = a2;
  MDCOBJ::MDCOBJ((MDCOBJ *)v15, a1);
  if ( v15[0] )
  {
    v18 = *(_QWORD *)(v15[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v14, (struct PDEVOBJ *)&v18);
    v13 = *(_QWORD *)(v18 + 56);
    GreAcquireSemaphore(v13);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v18);
    if ( (*(_DWORD *)(v18 + 2164) & 0x100) != 0 )
    {
      v5 = *(_QWORD *)(v18 + 1800);
      v19 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v5 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v6 = *(_DWORD *)(v5 + 60) >> 1;
      v7 = *(_DWORD *)(v5 + 28) - v6;
      if ( v6 < v7 )
      {
        v8 = 4LL * v6;
        v9 = v7 - v6;
        do
        {
          v8 += 4LL;
          *(_BYTE *)(v8 + *(_QWORD *)(v5 + 112) - 1) &= ~0x20u;
          --v9;
        }
        while ( v9 );
      }
      hForePalette = 0LL;
      v10 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v11 = *(_QWORD *)(v5 + 120);
      v12 = v10 + 1;
      *(_DWORD *)(v5 + 32) = v12;
      if ( v11 != v5 )
        *(_DWORD *)(v11 + 32) = v12;
      *(_DWORD *)(*(_QWORD *)(v15[0] + 80LL) + 8LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v14);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  }
  return 0LL;
}
