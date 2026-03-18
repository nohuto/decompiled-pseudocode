/*
 * XREFs of ?ProcessSetMesh@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH@@@Z @ 0x1801F752C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x1801F7398 (-ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::ProcessSetMesh(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH *a3)
{
  struct CResource *Resource; // rsi
  unsigned int v5; // edx
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x9Au);
    if ( !Resource )
    {
      v7 = -2003303421;
      v8 = 142LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  if ( Resource != this[10] )
  {
    v10 = CResource::RegisterNotifier((CResource *)this, Resource);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_10;
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    this[10] = Resource;
    CSceneMeshRendererComponent::ApplyMeshToSpectreResources((CSceneMeshRendererComponent *)this);
  }
  v7 = 0;
LABEL_10:
  if ( v7 < 0 )
  {
    v8 = 146LL;
    goto LABEL_4;
  }
  return 0LL;
}
