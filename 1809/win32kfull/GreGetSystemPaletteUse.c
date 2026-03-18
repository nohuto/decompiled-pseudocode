/*
 * XREFs of GreGetSystemPaletteUse @ 0x1C012D764
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtGdiGetSystemPaletteUse @ 0x1C012D750 (NtGdiGetSystemPaletteUse.c)
 *     CreateScreenPalette @ 0x1C02283A8 (CreateScreenPalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSystemPaletteUse(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v2 = *(_QWORD *)(v5[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    if ( (*(_DWORD *)(v2 + 2172) & 0x100) != 0 )
    {
      v3 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*(_QWORD *)(v2 + 1808) + 24LL);
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
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v6);
  return v1;
}
