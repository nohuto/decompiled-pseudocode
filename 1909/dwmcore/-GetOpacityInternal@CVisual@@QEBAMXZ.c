/*
 * XREFs of ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800A2A3C
 * Callers:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x180004B6C (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A29A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800C0DB0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C1400 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1802532EC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1802536D4 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetOpacityInternal(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v1 + 4) & 0x8000000) == 0 )
    return *(float *)&FLOAT_1_0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x5000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
