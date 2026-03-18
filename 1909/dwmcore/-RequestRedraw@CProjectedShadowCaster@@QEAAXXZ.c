/*
 * XREFs of ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180004BB0
 * Callers:
 *     ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z @ 0x1800040D8 (-ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRO.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180004130 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18000424C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020300 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800219C0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x1801F1084 (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWC.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005214 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::RequestRedraw(CProjectedShadowCaster *this)
{
  __int64 v1; // rbx
  CProjectedShadowScene **v2; // rdi
  unsigned __int64 v3; // rsi

  v1 = 0LL;
  if ( !CCommonRegistryData::m_fDisableProjectedShadows )
  {
    v2 = (CProjectedShadowScene **)*((_QWORD *)this + 11);
    v3 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v2 + 7LL) >> 3;
    if ( (unsigned __int64)v2 > *((_QWORD *)this + 12) )
      v3 = 0LL;
    if ( v3 )
    {
      do
      {
        CProjectedShadowScene::RequestRedrawAll(*v2);
        ++v1;
        ++v2;
      }
      while ( v1 != v3 );
    }
  }
}
