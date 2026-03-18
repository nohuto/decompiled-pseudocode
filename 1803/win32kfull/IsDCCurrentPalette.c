/*
 * XREFs of IsDCCurrentPalette @ 0x1C0287E68
 * Callers:
 *     xxxRealizePalette @ 0x1C00FD560 (xxxRealizePalette.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  HPALETTE v2; // r8
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v2 = *(HPALETTE *)(v5[0] + 88LL);
    if ( v2 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v5[0] + 80LL) + 68LL) == 1
      && (v3 = (unsigned __int16)v2 | ((unsigned int)v2 >> 8) & 0xFF0000,
          (_DWORD)v3 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v3) )
    {
      v1 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v1;
}
