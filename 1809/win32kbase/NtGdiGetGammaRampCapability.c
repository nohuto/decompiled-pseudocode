/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C0105E30
 * Callers:
 *     <none>
 * Callees:
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C0002900 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002AB38 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0063140 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiGetGammaRampCapability(HDC a1)
{
  BOOL v1; // ebx
  _QWORD v3[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v4[120]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v5; // [rsp+D8h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] && !*(_DWORD *)(v3[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v4);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v4, (struct XDCOBJ *)v3);
    v5 = *(_QWORD *)(v3[0] + 48LL);
    if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v5) )
      v1 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v5) != 0;
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v4);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
