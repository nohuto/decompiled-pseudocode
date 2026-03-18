/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x1C0115B60
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // ebx
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v4[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v5, (struct XDCOBJ *)v4, 516);
    v2 = *(_DWORD *)(v5[0] + 32LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    return v2 & 1;
  }
  return v1;
}
