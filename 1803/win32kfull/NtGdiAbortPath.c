/*
 * XREFs of NtGdiAbortPath @ 0x1C027DB10
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v5, a1);
  v1 = (DC *)v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *(_QWORD *)(v5[0] + 208LL) )
    {
      v3 = *(_DWORD *)(v5[0] + 256LL);
      if ( (v3 & 2) != 0 )
      {
        v3 &= ~2u;
        *(_DWORD *)(v5[0] + 256LL) = v3;
      }
      *((_DWORD *)v1 + 64) = v3 & 0xFFFFFFFE;
      DC::hpath(v1, 0LL);
    }
    v2 = 1;
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v2;
}
