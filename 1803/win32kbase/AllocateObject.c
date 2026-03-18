/*
 * XREFs of AllocateObject @ 0x1C0023D70
 * Callers:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C001FA74 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0020210 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0020710 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0020950 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     HmgAlloc @ 0x1C00248F0 (HmgAlloc.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004442C (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C00447D0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00D6B94 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

_WORD *__fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v5; // r14d
  int v6; // edi
  void * near *v7; // rbx
  _QWORD *v8; // rax
  _WORD *v9; // rbx
  unsigned int v11; // edx

  v5 = Size;
  if ( gulGdiHmgrTraceObjectType && a2 == gulGdiHmgrTraceObjectType )
  {
    v6 = 1;
    v5 = Size + 160;
  }
  else
  {
    v6 = 0;
  }
  if ( *((_DWORD *)&laSize + a2) >= v5 )
  {
    v7 = (&pHmgLookAsideList)[a2];
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v8 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v7);
      v9 = v8;
      if ( v8 )
      {
        if ( a3 )
        {
          memset(v8, 0, v5);
        }
        else
        {
          *v8 = 0LL;
          v8[1] = 0LL;
          v8[2] = 0LL;
        }
        if ( v6 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v9 + v5 - 160), 0LL);
        v9[7] = 0x8000;
        return v9;
      }
    }
  }
  v11 = (a2 << 24) + 808478791;
  if ( a3 )
  {
    v9 = PALLOCMEM2(v5, v11, 1);
  }
  else
  {
    v9 = PALLOCMEM2(v5, v11, 0);
    if ( !v9 )
      goto LABEL_22;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 + 2) = 0LL;
  }
  if ( v9 )
  {
    if ( v6 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v9 + v5 - 160), 0LL);
    return v9;
  }
LABEL_22:
  EngSetLastError(8u);
  return 0LL;
}
