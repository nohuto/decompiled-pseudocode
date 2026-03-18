/*
 * XREFs of ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C016B878
 * Callers:
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C016BA00 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C016849C (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C016B814 (-Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshalerArray::Set(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v6; // esi
  unsigned int v7; // ebp
  __int64 v11; // rcx

  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v7 >= a4 )
      break;
    v11 = *(_QWORD *)(a3 + 8LL * v7);
    if ( !v11 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 120LL))(v11, 32LL) )
      v6 = -1073741811;
    ++v7;
  }
  while ( v6 >= 0 );
  if ( v6 >= 0 )
  {
    DirectComposition::CResourceMarshalerArray::Clear((DirectComposition::CResourceMarshalerArray *)a1, a2);
    *(_QWORD *)a1 = a3;
    *(_QWORD *)(a1 + 8) = a4;
    *(_DWORD *)(a1 + 16) = 32;
    if ( a4 )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*(_QWORD *)a1
                                                                                                + 8 * v4++));
      while ( v4 < *(_QWORD *)(a1 + 8) );
    }
  }
  return (unsigned int)v6;
}
