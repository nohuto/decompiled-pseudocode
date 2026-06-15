/*
 * XREFs of ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14003B500
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14003AD4C (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140035764 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14003A8F4 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x14003A92C (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDisplayNode(__int64 *a1, __int64 a2, CDisplayNode **a3)
{
  CDisplayNode **v3; // r14
  unsigned int v6; // esi
  CDisplayNode **Next; // rax
  CDisplayNode *v8; // rdx
  CDisplayNode *v9; // rax
  __int64 v10; // r8
  CDisplayNode *v11; // rdi
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v15; // [rsp+60h] [rbp+8h] BYREF
  CDisplayNode **v16; // [rsp+70h] [rbp+18h]
  CDisplayNode *v17; // [rsp+78h] [rbp+20h]

  v16 = a3;
  v3 = a3;
  v6 = 0;
  v15 = (_QWORD *)*a1;
  if ( v15 )
  {
    while ( 1 )
    {
      Next = (CDisplayNode **)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(
                                (__int64)a1,
                                &v15);
      v8 = *Next;
      if ( *(_QWORD *)*Next == a2 )
        break;
      if ( !v15 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v8 = 0LL;
  }
  *v3 = v8;
  if ( !v8 )
  {
    v9 = (CDisplayNode *)operator new(0x68uLL);
    v11 = v9;
    v15 = v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = a2;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_QWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 3) = 0LL;
      *((_QWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 5) = 0LL;
      *((_DWORD *)v9 + 12) = 10;
      *((_QWORD *)v9 + 7) = 0LL;
      *((_QWORD *)v9 + 8) = 0LL;
      *((_QWORD *)v9 + 9) = 0LL;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 11) = 0LL;
      *((_DWORD *)v9 + 24) = 10;
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v17 = v11;
      v15 = v11;
      v6 = 0;
      ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(a1, (__int64)&v15, v10);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v13 = v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v15) = *(_DWORD *)v13;
      v6 = (unsigned int)v15;
      if ( (int)v15 < 0 )
      {
        if ( v17 )
          CDisplayNode::`scalar deleting destructor'(v17);
        return v6;
      }
      v3 = v16;
      v11 = v17;
    }
    *v3 = v11;
  }
  return v6;
}
