/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C00189D4 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0018B60 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     GreExtCreateRegion @ 0x1C001A670 (GreExtCreateRegion.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C001E4E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C001E5B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C001F9D0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C002539C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C00253D0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0029190 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00707AC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0070AF0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007D424 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C007E590 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C009F120 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C009FE24 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00FA8E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00FACBC (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C00255D0 (AllocateObject.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 Object; // rax
  _QWORD *v5; // rax

  v2 = 216;
  if ( a2 >= 0xD8 )
    v2 = a2;
  Object = AllocateObject(v2);
  *(_QWORD *)this = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(Object + 40) = Object + 120;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v5 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v5[1] = v5;
    *v5 = v5;
  }
}
