/*
 * XREFs of GreGetSystemPaletteUse @ 0x1C0138644
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtGdiGetSystemPaletteUse @ 0x1C0138630 (NtGdiGetSystemPaletteUse.c)
 *     CreateScreenPalette @ 0x1C024077C (CreateScreenPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetSystemPaletteUse(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  int v5; // edi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v2 = *(_QWORD *)(v6[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    if ( (*(_DWORD *)(v2 + 2172) & 0x100) != 0 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(v2 + 1808) + 24LL);
      if ( (v5 & 0x1000) != 0 )
        v1 = 2;
      else
        v1 = (v5 & 0x10000 | 0x8000u) >> 15;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
    if ( v6[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v1;
}
