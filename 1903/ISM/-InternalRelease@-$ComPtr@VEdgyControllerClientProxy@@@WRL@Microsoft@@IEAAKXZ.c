/*
 * XREFs of ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800674EC
 * Callers:
 *     ?CreateMagnifierClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18005BFB4 (-CreateMagnifierClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISM.c)
 *     ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x1800673F0 (--_EInputObserverClientProxy@@UEAAPEAXI@Z.c)
 *     ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x180067520 (-OnDisconnected@InputObserverClientProxy@@UEAAJXZ.c)
 *     ??_GEdgyControllerClientProxy@@UEAAPEAXI@Z @ 0x18006E9A0 (--_GEdgyControllerClientProxy@@UEAAPEAXI@Z.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18006EA28 (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18006ED70 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ??1?$ComPtr@VMagnifierServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18006F938 (--1-$ComPtr@VMagnifierServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_EMagnifierClientProxy@@UEAAPEAXI@Z @ 0x18006F950 (--_EMagnifierClientProxy@@UEAAPEAXI@Z.c)
 *     ?OnDisconnected@MagnifierClientProxy@@MEAAJXZ @ 0x18006F9C0 (-OnDisconnected@MagnifierClientProxy@@MEAAJXZ.c)
 *     ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x1800C2C80 (--_EMagnifierProcessor@@UEAAPEAXI@Z.c)
 *     ??1Edge@@QEAA@XZ @ 0x1800FFF98 (--1Edge@@QEAA@XZ.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1800FFFC0 (--1EdgyConnection@@UEAA@XZ.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x180100228 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x1801007E4 (-_Destroy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z.c)
 *     ?_Tidy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXXZ @ 0x18010082C (-_Tidy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Move_unchecked1@PEAVEdge@@PEAV1@@std@@YAPEAVEdge@@PEAV1@00U_General_ptr_iterator_tag@0@@Z @ 0x1801014EC (--$_Move_unchecked1@PEAVEdge@@PEAV1@@std@@YAPEAVEdge@@PEAV1@00U_General_ptr_iterator_tag@0@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180101918 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801019FC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180102504 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180102688 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x180102874 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801029F4 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ?RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ @ 0x180105948 (-RuntimeClassInitialize@MagnifierProcessor@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
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
