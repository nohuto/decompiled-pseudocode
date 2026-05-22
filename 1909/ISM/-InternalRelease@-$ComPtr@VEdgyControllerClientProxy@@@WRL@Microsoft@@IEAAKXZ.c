/*
 * XREFs of ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC
 * Callers:
 *     ?CreateMagnifierClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18005BD54 (-CreateMagnifierClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISM.c)
 *     ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x1800671B0 (--_EInputObserverClientProxy@@UEAAPEAXI@Z.c)
 *     ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x1800672E0 (-OnDisconnected@InputObserverClientProxy@@UEAAJXZ.c)
 *     ??_GEdgyControllerClientProxy@@UEAAPEAXI@Z @ 0x18006E760 (--_GEdgyControllerClientProxy@@UEAAPEAXI@Z.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18006E7E8 (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18006EB30 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ??1?$ComPtr@VMagnifierServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18006F6F8 (--1-$ComPtr@VMagnifierServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_EMagnifierClientProxy@@UEAAPEAXI@Z @ 0x18006F710 (--_EMagnifierClientProxy@@UEAAPEAXI@Z.c)
 *     ?OnDisconnected@MagnifierClientProxy@@MEAAJXZ @ 0x18006F780 (-OnDisconnected@MagnifierClientProxy@@MEAAJXZ.c)
 *     ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x1800C2B30 (--_EMagnifierProcessor@@UEAAPEAXI@Z.c)
 *     ??1Edge@@QEAA@XZ @ 0x1800FFD68 (--1Edge@@QEAA@XZ.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1800FFD90 (--1EdgyConnection@@UEAA@XZ.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1800FFFF8 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x1801005B4 (-_Destroy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z.c)
 *     ?_Tidy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXXZ @ 0x1801005FC (-_Tidy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Move_unchecked1@PEAVEdge@@PEAV1@@std@@YAPEAVEdge@@PEAV1@00U_General_ptr_iterator_tag@0@@Z @ 0x1801012BC (--$_Move_unchecked1@PEAVEdge@@PEAV1@@std@@YAPEAVEdge@@PEAV1@00U_General_ptr_iterator_tag@0@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801016E8 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801017CC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801022D4 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180102458 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x180102644 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801027C4 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ?RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ @ 0x180105718 (-RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (**(__int64 (__fastcall ***)(__int64))(v1 + 16))(v1 + 16);
  }
  return result;
}
