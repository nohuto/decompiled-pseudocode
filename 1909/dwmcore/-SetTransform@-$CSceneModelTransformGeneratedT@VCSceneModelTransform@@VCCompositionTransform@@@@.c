/*
 * XREFs of ?SetTransform@?$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@QEAAJPEAVCComponentTransform3D@@@Z @ 0x1801A16D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>::SetTransform(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[7] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x19Cu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
      this[7] = a2;
      *((_BYTE *)a2 + 292) = 1;
      (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 8))(this, 0LL, 0LL);
    }
  }
  return v2;
}
