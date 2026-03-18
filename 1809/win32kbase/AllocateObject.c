/*
 * XREFs of AllocateObject @ 0x1C00255D0
 * Callers:
 *     HmgAlloc @ 0x1C0001010 (HmgAlloc.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0004E38 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0016E48 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0017730 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025400 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025520 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0029190 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v4; // ebp
  int v5; // edi
  void * near *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx

  v4 = Size;
  if ( gulGdiHmgrTraceObjectType && a2 == gulGdiHmgrTraceObjectType )
  {
    v5 = 1;
    v4 = Size + 160;
  }
  else
  {
    v5 = 0;
  }
  if ( *((_DWORD *)&laSize + a2) < v4 )
  {
    if ( a3 )
    {
      v8 = PALLOCMEM2(v4);
    }
    else
    {
      v8 = PALLOCMEM2(v4);
      if ( !v8 )
        goto LABEL_22;
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
    }
    if ( v8 )
    {
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v4 - 160LL), 0LL);
      return v8;
    }
  }
  else
  {
    v6 = (&pHmgLookAsideList)[a2];
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v7 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v6);
      v8 = (__int64)v7;
      if ( v7 )
      {
        if ( a3 )
        {
          memset(v7, 0, v4);
        }
        else
        {
          *v7 = 0LL;
          v7[1] = 0LL;
          v7[2] = 0LL;
        }
        if ( v5 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v4 + v8 - 160), 0LL);
        *(_WORD *)(v8 + 14) = 0x8000;
        return v8;
      }
    }
  }
LABEL_22:
  EngSetLastError(8u);
  return 0LL;
}
