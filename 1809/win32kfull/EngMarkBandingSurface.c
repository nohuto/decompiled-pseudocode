/*
 * XREFs of EngMarkBandingSurface @ 0x1C01305C0
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C01304F0 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  BOOL v4; // ebx
  unsigned int v5; // ecx
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v7);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v4 = 0;
  v8 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 112);
    if ( (v5 & 0x200000) != 0 )
    {
      v4 = 1;
      *(_DWORD *)(v3 + 112) = v5 | 0x2000000;
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(2LL, v5, 0LL);
    }
  }
  SURFREF::~SURFREF((SURFREF *)v7);
  return v4;
}
