/*
 * XREFs of GreGetMiterLimit @ 0x1C027DAAC
 * Callers:
 *     NtGdiGetMiterLimit @ 0x1C027F540 (NtGdiGetMiterLimit.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetMiterLimit(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    *a2 = *(_DWORD *)(v5[0] + 232LL);
    v3 = 1;
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v3;
}
