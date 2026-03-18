/*
 * XREFs of ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x180216C60
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1801C7FC8 (-SetRenderTransform@CCachedVisualImage@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessSetTransformMatrix(
        CCachedVisualImage **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX *a3)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v3 = CCachedVisualImage::SetRenderTransform(this[9], (const struct _D3DMATRIX *)((char *)a3 + 8));
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xC1u, 0LL);
  return v5;
}
