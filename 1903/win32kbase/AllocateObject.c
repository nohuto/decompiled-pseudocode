/*
 * XREFs of AllocateObject @ 0x1C0029BF0
 * Callers:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C000FF08 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0010850 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0028890 (-bCompute@DC@@QEAAHXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0029B40 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002BBB0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00836F8 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

_QWORD *__fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v4; // ebp
  int v5; // edi
  void * near *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v10; // edx

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
    v10 = (a2 << 24) + 808478791;
    if ( a3 )
    {
      v8 = PALLOCMEM2(v4, v10, 1);
    }
    else
    {
      v8 = PALLOCMEM2(v4, v10, 0);
      if ( !v8 )
        goto LABEL_22;
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
    }
    if ( v8 )
    {
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v8 + v4 - 160), 0LL);
      return v8;
    }
  }
  else
  {
    v6 = (&pHmgLookAsideList)[a2];
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v7 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v6);
      v8 = v7;
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
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v8 + v4 - 160), 0LL);
        *((_WORD *)v8 + 7) = 0x8000;
        return v8;
      }
    }
  }
LABEL_22:
  EngSetLastError(8u);
  return 0LL;
}
