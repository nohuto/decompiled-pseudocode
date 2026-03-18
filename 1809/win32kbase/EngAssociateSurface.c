/*
 * XREFs of EngAssociateSurface @ 0x1C0086A40
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00869E0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0020520 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00ABD90 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned int v8; // ecx
  _BYTE v10[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  v6 = (unsigned int)hsurf;
  if ( hdev )
  {
    SURFREF::SURFREF((SURFREF *)v10);
    v7 = HmgShareLockCheckIgnoreStockBit(v6, 5);
    v11 = v7;
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 112);
      if ( (v8 & 0x200000) != 0 )
      {
        *(_QWORD *)(v7 + 136) = 0LL;
        v3 = 1;
        *(_QWORD *)(v11 + 48) = hdev;
        *(_QWORD *)(v11 + 40) = *((_QWORD *)hdev + 225);
        *(_DWORD *)(v11 + 112) |= v4;
      }
      else
      {
        TraceLoggingWriteUnsupportedGdiUsage(3LL, v8, 0LL);
      }
    }
    SURFREF::~SURFREF((SURFREF *)v10);
  }
  return v3;
}
