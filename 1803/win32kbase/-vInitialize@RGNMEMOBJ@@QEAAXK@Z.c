/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784
 * Callers:
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C00208F0 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0020920 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0021AF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0023EB0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0023F60 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0044630 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0071C18 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00722B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00C4C6C (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00C8050 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  int v2; // r14d
  BOOL v4; // ebp
  unsigned int v5; // edi
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  _QWORD *v8; // rax

  v2 = 216;
  if ( a2 >= 0xD8 )
    v2 = a2;
  v4 = gulGdiHmgrTraceObjectType == 4;
  v5 = v2 + 160;
  if ( gulGdiHmgrTraceObjectType != 4 )
    v5 = v2;
  if ( dword_1C01A2650 >= v5
    && ((v6 = qword_1C01A26E0, (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0)
      ? (v7 = 0LL)
      : (v7 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v6)),
        v7) )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
    if ( v4 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v7 + v5 - 160), 0LL);
    *((_WORD *)v7 + 7) = 0x8000;
  }
  else
  {
    v7 = PALLOCMEM2(v5, 0x34306847u, 0);
    if ( v7 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v7[2] = 0LL;
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v7 + v5 - 160), 0LL);
    }
    else
    {
      EngSetLastError(8u);
      v7 = 0LL;
    }
  }
  *(_QWORD *)this = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 22) = 0;
    *((_DWORD *)v7 + 23) = 0;
    *((_DWORD *)v7 + 24) = 0;
    *((_DWORD *)v7 + 25) = 0;
    *((_DWORD *)v7 + 20) = 120;
    *((_DWORD *)v7 + 21) = 1;
    *((_DWORD *)v7 + 26) = 0;
    *((_DWORD *)v7 + 27) = 0x80000000;
    *((_DWORD *)v7 + 28) = 0x7FFFFFFF;
    *((_DWORD *)v7 + 29) = 0;
    v7[5] = (char *)v7 + (unsigned int)(4 * *((_DWORD *)v7 + 26) + 16) + 104;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v8 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v8[1] = v8;
    *v8 = v8;
  }
}
