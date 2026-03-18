/*
 * XREFs of ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C016B814
 * Callers:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0010680 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C016B878 (-Set@CResourceMarshalerArray@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceM.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CResourceMarshalerArray::Clear(
        DirectComposition::CResourceMarshalerArray *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 i; // rdi

  for ( i = 0LL; i < *((_QWORD *)this + 1); ++i )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*(_QWORD *)this + 8 * i));
  if ( *(_QWORD *)this )
  {
    Win32FreePool(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
}
