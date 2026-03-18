/*
 * XREFs of GreSetColorAdjustment @ 0x1C0299548
 * Callers:
 *     NtGdiSetColorAdjustment @ 0x1C02A9110 (NtGdiSetColorAdjustment.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // xmm1_8
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v3 = v7[0];
  if ( v7[0] )
  {
    *(_OWORD *)(v7[0] + 176LL) = *(_OWORD *)a2;
    v5 = *(_QWORD *)(a2 + 16);
    v4 = 1;
    *(_QWORD *)(v3 + 192) = v5;
    *(_WORD *)(v7[0] + 178LL) &= 3u;
  }
  else
  {
    EngSetLastError(6u);
    v4 = 0;
  }
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v4;
}
