/*
 * XREFs of IsDCCurrentPalette @ 0x1C029BB9C
 * Callers:
 *     xxxRealizePalette @ 0x1C0098390 (xxxRealizePalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  HPALETTE v2; // r8
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v2 = *(HPALETTE *)(v5[0] + 80LL);
    if ( v2 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v5[0] + 976LL) + 208LL) == 1
      && (v3 = (unsigned __int16)v2 | ((unsigned int)v2 >> 8) & 0xFF0000,
          (_DWORD)v3 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v3) )
    {
      v1 = 1;
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v6);
  return v1;
}
