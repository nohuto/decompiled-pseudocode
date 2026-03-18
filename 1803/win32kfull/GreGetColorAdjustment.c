/*
 * XREFs of GreGetColorAdjustment @ 0x1C026E434
 * Callers:
 *     NtGdiGetColorAdjustment @ 0x1C027F0D0 (NtGdiGetColorAdjustment.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    v4 = 1;
    *(_OWORD *)a2 = *(_OWORD *)(v6[0] + 184LL);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v3 + 200);
    *(_WORD *)(a2 + 2) &= 3u;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v4;
}
