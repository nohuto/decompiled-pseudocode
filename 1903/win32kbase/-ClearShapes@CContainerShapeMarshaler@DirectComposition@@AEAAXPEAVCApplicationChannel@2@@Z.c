/*
 * XREFs of ?ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B394C
 * Callers:
 *     ?ReleaseAllReferences@CContainerShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B3A40 (-ReleaseAllReferences@CContainerShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B3A80 (-SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CContainerShapeMarshaler::ClearShapes(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 6) + 8 * i));
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
  }
}
