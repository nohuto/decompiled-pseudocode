/*
 * XREFs of GreGetColorAdjustment @ 0x1C0299120
 * Callers:
 *     NtGdiGetColorAdjustment @ 0x1C02A7D70 (NtGdiGetColorAdjustment.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v6[0] + 176LL);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v3 + 192);
    *(_WORD *)(a2 + 2) &= 3u;
    v4 = 1;
  }
  else
  {
    EngSetLastError(6u);
    v3 = v6[0];
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v4;
}
