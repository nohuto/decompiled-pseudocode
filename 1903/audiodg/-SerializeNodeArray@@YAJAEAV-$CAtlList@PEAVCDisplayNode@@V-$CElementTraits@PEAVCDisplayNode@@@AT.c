/*
 * XREFs of ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14003C054
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14003BEF8 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     memcpy_s @ 0x1400290B8 (memcpy_s.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140035774 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14003BCBC (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 */

__int64 __fastcall SerializeNodeArray(__int64 a1, __int64 *a2, unsigned int *a3)
{
  __int64 v3; // r14
  int v7; // edi
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rbp
  CDisplayNode **Next; // rax
  bool v14; // zf
  _QWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v7 = 0;
  *a3 = v3 + 4;
  v8 = *(_DWORD *)(a1 + 16);
  v9 = (void *)(*a2 + (unsigned int)(v3 + 4));
  LODWORD(v16) = v8;
  if ( memcpy_s(v9, (unsigned int)(4096 - (v3 + 4)), &v16, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a3 += 4;
    v11 = *a3;
    v16 = *(_QWORD **)a1;
    if ( v16 )
    {
      while ( 1 )
      {
        v12 = *a3;
        *a3 = v12 + 4;
        Next = (CDisplayNode **)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v10, &v16);
        v7 = CDisplayNode::Serialize(*Next, a1, a2, a3);
        if ( v7 < 0 )
          break;
        v10 = *a2;
        v14 = v16 == 0LL;
        *(_DWORD *)(v12 + *a2) = *a3 - v12;
        if ( v14 )
        {
          v11 = *a3;
          goto LABEL_7;
        }
      }
    }
    else
    {
LABEL_7:
      *(_DWORD *)(v3 + *a2) = v11 - v3;
    }
  }
  return (unsigned int)v7;
}
