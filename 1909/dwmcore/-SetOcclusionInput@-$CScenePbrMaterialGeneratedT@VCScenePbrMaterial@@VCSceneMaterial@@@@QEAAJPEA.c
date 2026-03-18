/*
 * XREFs of ?SetOcclusionInput@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x1801A09B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnOcclusionInputChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7C84 (-OnOcclusionInputChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetOcclusionInput(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  signed int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[16] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5FFu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
      this[16] = a2;
      CScenePbrMaterial::OnOcclusionInputChanged((CScenePbrMaterial *)this);
    }
  }
  return v2;
}
