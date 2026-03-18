/*
 * XREFs of ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0002B88
 * Callers:
 *     ?ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0002A60 (-ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@.c)
 *     ?SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0002AA0 (-SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CGradientBrushMarshaler::ClearStops(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 10) + 8 * i));
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
}
