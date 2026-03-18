/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012004 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0015DF0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0017150 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0017350 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0018F40 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C002D810 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00777D0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C008D2D0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C008D8A0 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AD050 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00ADEA4 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01248D0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  int v2; // ebp
  BOOL v4; // esi
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
  if ( dword_1C02119A0 < v5 )
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
LABEL_12:
    if ( v7 )
      goto LABEL_13;
    goto LABEL_20;
  }
  v6 = qword_1C02128D0;
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0 )
    v7 = 0LL;
  else
    v7 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v6);
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
    if ( v4 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v7 + v5 - 160), 0LL);
    *((_WORD *)v7 + 7) = 0x8000;
    goto LABEL_12;
  }
LABEL_20:
  EngSetLastError(8u);
LABEL_13:
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
