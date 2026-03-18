/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1800672B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800672F8 (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x180067348 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  unsigned int v3; // ebx
  float v4; // xmm2_4
  CNineGridBrush *v5; // rcx
  __int64 v6; // r8

  v3 = 0;
  v4 = *((float *)a3 + 3);
  if ( CNineGridBrush::TryGetInsetFieldPointer(this, *((_DWORD *)a3 + 2)) && v4 >= 0.0 )
  {
    CNineGridBrush::SetInsetProperty(v5, *(_DWORD *)(v6 + 8), v4);
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, -2003303421, 0x137u);
  }
  return v3;
}
