/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0015D04
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C00112A4 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00143D8 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00158A0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0015CE0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0015EE0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0028890 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C002BE30 (GreExtCreateRegion.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C002EC40 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003D770 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0090790 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C0091720 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A2620 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00AFF80 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B0C54 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0126D80 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0127140 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     GreIntersectVisRect @ 0x1C0131B00 (GreIntersectVisRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
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
  if ( dword_1C02149A0 < v5 )
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
  v6 = qword_1C02158D0;
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
