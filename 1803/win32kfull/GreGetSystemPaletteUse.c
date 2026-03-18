/*
 * XREFs of GreGetSystemPaletteUse @ 0x1C010C184
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtGdiGetSystemPaletteUse @ 0x1C010C170 (NtGdiGetSystemPaletteUse.c)
 *     CreateScreenPalette @ 0x1C01FFA00 (CreateScreenPalette.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetSystemPaletteUse(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v2 = *(_QWORD *)(v5[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
    if ( (*(_DWORD *)(v2 + 2164) & 0x100) != 0 )
    {
      v3 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*(_QWORD *)(v2 + 1800) + 24LL);
      if ( ((unsigned __int16)v3 & 0x1000) != 0 )
      {
        v1 = 2;
      }
      else
      {
        v3 = (DYNAMICMODECHANGESHARELOCK *)(((unsigned int)v3 & 0x10000 | 0x8000) >> 15);
        v1 = (unsigned int)v3;
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v1;
}
