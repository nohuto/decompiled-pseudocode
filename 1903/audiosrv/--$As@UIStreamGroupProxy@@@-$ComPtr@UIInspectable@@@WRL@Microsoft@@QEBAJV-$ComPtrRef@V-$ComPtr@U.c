/*
 * XREFs of ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D5448
 * Callers:
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18002F410 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800423A0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800D568C (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef__.c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800F2548 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F2A70 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F2E50 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     _lambda_1acdd002dad53352191f56bc6ea1100f_::operator() @ 0x1800F583C (_lambda_1acdd002dad53352191f56bc6ea1100f_--operator().c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800F9AF4 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_1ca5414f_db68_41cf_b04d_27cfcf56d352,
           a2);
}
