/*
 * XREFs of ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x1801A2CFC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x1801C6F10 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::SetRoot(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // edi
  signed int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[70] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xFC5u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[70]);
      this[70] = a2;
      CSceneVisual::OnRootChanged((CSceneVisual *)this);
    }
  }
  return v2;
}
