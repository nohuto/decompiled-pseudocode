/*
 * XREFs of ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C007F9F8
 * Callers:
 *     ?SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0004CD0 (-SetReferenceArrayProperty@CTransformGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C007F990 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01BC240 (-SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CTransform3DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01BC2D0 (-SetReferenceArrayProperty@CTransform3DGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007FAB8 (-Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshalerArray::Set(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rbx
  int v6; // esi
  unsigned int v7; // ebp
  __int64 v12; // rcx

  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v7 >= a4 )
      break;
    v12 = *(_QWORD *)(a3 + 8LL * v7);
    if ( !v12 || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 120LL))(v12, a5) )
      v6 = -1073741811;
    ++v7;
  }
  while ( v6 >= 0 );
  if ( v6 >= 0 )
  {
    DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CResourceMarshalerArray *)a1, a2);
    *(_QWORD *)a1 = a3;
    *(_QWORD *)(a1 + 8) = a4;
    *(_DWORD *)(a1 + 16) = a5;
    if ( a4 )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*(_QWORD *)a1
                                                                                                + 8 * v5++));
      while ( v5 < *(_QWORD *)(a1 + 8) );
    }
  }
  return (unsigned int)v6;
}
