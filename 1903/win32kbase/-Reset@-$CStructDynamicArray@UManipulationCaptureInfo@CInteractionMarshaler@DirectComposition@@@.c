/*
 * XREFs of ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C007E0F4
 * Callers:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C007D4BC (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007D520 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C007E128 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Reset(
        __int64 a1)
{
  __int64 i; // rbx
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    if ( v4 )
      Win32FreePool(v4);
  }
  return CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(a1);
}
