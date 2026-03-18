/*
 * XREFs of ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C022EEB0
 * Callers:
 *     DXGDEVICE_IsDisplayingOnVidPnSource @ 0x1C003E270 (DXGDEVICE_IsDisplayingOnVidPnSource.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003AD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00C6B70 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayingOnVidPnSource(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  ADAPTER_DISPLAY *v5; // rcx
  bool result; // al

  result = 1;
  if ( !DXGDEVICE::IsVidPnSourcePrimaryValid(this, a2) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
    if ( !v4 )
      return 0;
    v5 = *(ADAPTER_DISPLAY **)(v4 + 2552);
    if ( !v5 || !ADAPTER_DISPLAY::IsVidPnSourceVisible(v5, v3) )
      return 0;
  }
  return result;
}
