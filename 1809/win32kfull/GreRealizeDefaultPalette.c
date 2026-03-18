/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C0095C74
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C0209C00 (xxxFlushPalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     GreSetSystemPaletteUse @ 0x1C029B814 (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  __int64 v3; // rbx
  unsigned int v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rcx
  signed __int32 v8; // ecx
  __int64 v9; // rax
  signed __int32 v10; // ecx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v18[96]; // [rsp+80h] [rbp-9h] BYREF
  int v19; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+100h] [rbp+77h] BYREF
  __int64 v21; // [rsp+108h] [rbp+7Fh] BYREF

  v19 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] )
  {
    v20 = *(_QWORD *)(v15[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v14, (struct PDEVOBJ *)&v20);
    v13 = *(_QWORD *)(v20 + 64);
    GreAcquireSemaphore(v13);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17, (struct PDEVOBJ *)&v20);
    if ( (*(_DWORD *)(v20 + 2172) & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(v20 + 1808);
      v21 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v3 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v4 = *(_DWORD *)(v3 + 60) >> 1;
      v5 = *(_DWORD *)(v3 + 28) - v4;
      if ( v4 < v5 )
      {
        v6 = 4LL * v4;
        v7 = v5 - v4;
        do
        {
          v6 += 4LL;
          *(_BYTE *)(v6 + *(_QWORD *)(v3 + 112) - 1) &= ~0x20u;
          --v7;
        }
        while ( v7 );
      }
      hForePalette = 0LL;
      v8 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v9 = *(_QWORD *)(v3 + 120);
      v10 = v8 + 1;
      *(_DWORD *)(v3 + 32) = v10;
      if ( v9 != v3 )
        *(_DWORD *)(v9 + 32) = v10;
      *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 152LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v21);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
    DCOBJ::~DCOBJ((DCOBJ *)v18);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v14);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v16);
  return 0LL;
}
