/*
 * XREFs of ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801A0AFC
 * Callers:
 *     ?AppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@@Z @ 0x18019E5C8 (-AppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV-$sp.c)
 *     ?SetChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@@Z @ 0x1801A04C8 (-SetChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV-$span@.c)
 *     ?ProcessLegacyTransform3DGroupUpdateCommand@@YAJPEAVCTransform3DGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180210138 (-ProcessLegacyTransform3DGroupUpdateCommand@@YAJPEAVCTransform3DGroup@@PEAVCChannelContext@@PEBU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007B54C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019ABE0 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$_Insert_range@PEAPEAVCSceneNode@@@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCSceneNode@@@std@@@std@@@1@PEAPEAVCSceneNode@@1Uforward_iterator_tag@1@@Z @ 0x18019ADB0 (--$_Insert_range@PEAPEAVCSceneNode@@@-$vector@PEAVCSceneNode@@V-$allocator@PEAVCSceneNode@@@std@.c)
 */

__int64 __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::SetOrAppendChildren(
        char **this,
        __int64 a2,
        char a3)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  v6 = CResource::RegisterNNotifiersInternal((CResource *)this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xDBBu, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, (__int64)(this + 19));
    std::vector<CSceneNode *>::_Insert_range<CSceneNode * *>(
      (__int64)(this + 19),
      this[20],
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 8) + 8LL * *(_QWORD *)a2);
    (*((void (__fastcall **)(char **, _QWORD, _QWORD))*this + 8))(this, 0LL, 0LL);
  }
  return v8;
}
