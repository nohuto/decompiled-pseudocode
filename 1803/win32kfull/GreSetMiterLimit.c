/*
 * XREFs of GreSetMiterLimit @ 0x1C007C894
 * Callers:
 *     NtGdiSetMiterLimit @ 0x1C007C920 (NtGdiSetMiterLimit.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetMiterLimit(HDC a1, float a2, _DWORD *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] && a2 >= 1.0 )
  {
    if ( a3 )
      *a3 = *(_DWORD *)(v7[0] + 232LL);
    *(float *)(v4 + 232) = a2;
    v5 = 1;
  }
  else
  {
    EngSetLastError(0x57u);
    v5 = 0;
  }
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v5;
}
