/*
 * XREFs of ?ClearGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B650C
 * Callers:
 *     ?ReleaseAllReferences@CGlyphRunVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B6630 (-ReleaseAllReferences@CGlyphRunVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CGlyphRunVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B6670 (-SetReferenceArrayProperty@CGlyphRunVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGlyphRunVisualMarshaler::ClearGlyphRuns(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44) + 8 * i));
  v5 = *((_QWORD *)this + 44);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 44) = 0LL;
    *((_DWORD *)this + 90) = 0;
  }
}
