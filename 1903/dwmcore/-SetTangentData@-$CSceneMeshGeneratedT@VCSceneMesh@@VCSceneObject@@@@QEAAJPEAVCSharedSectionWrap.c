/*
 * XREFs of ?SetTangentData@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x1801A2DA8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::SetTangentData(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  struct CResource *v7; // rcx

  v2 = 0;
  if ( a2 != this[17] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x300u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
      v7 = *this;
      this[17] = a2;
      (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v7 + 8))(this, 0LL, 0LL);
    }
  }
  return v2;
}
