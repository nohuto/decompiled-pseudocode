/*
 * XREFs of ?SetEmissiveInput@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x1801A0670
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnEmissiveInputChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7A70 (-OnEmissiveInputChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetEmissiveInput(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  signed int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[14] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x54Fu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
      this[14] = a2;
      CScenePbrMaterial::OnEmissiveInputChanged((CScenePbrMaterial *)this);
    }
  }
  return v2;
}
