/*
 * XREFs of ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180042910
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800151A0 (--$_Emplace_reallocate@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18007D988 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@.c)
 *     _lambda_2a565682f2cce7372cb732d8af640e68_::operator() @ 0x18008F560 (_lambda_2a565682f2cce7372cb732d8af640e68_--operator().c)
 *     ?GetAppBarPositionForMonitor@CBaseTrayFlyoutExperienceManager@@MEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180090020 (-GetAppBarPositionForMonitor@CBaseTrayFlyoutExperienceManager@@MEAAJQEAUHMONITOR__@@PEAUtagRECT@.c)
 *     ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x18010E794 (--1CReportWindowVisibilityChange@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K1@Z @ 0x18011B700 (-_Change_array@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@0@Z @ 0x18011BDCC (-_Destroy@-$vector@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskWindow@@.c)
 *     ?erase@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801204B0 (-erase@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??1CCharmsWindowManager@@MEAA@XZ @ 0x18012C028 (--1CCharmsWindowManager@@MEAA@XZ.c)
 *     ??_G?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x18012C0D0 (--_G-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18012C540 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 *     ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x18014163C (--1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ.c)
 *     ??1CSplashScreen@@UEAA@XZ @ 0x180152868 (--1CSplashScreen@@UEAA@XZ.c)
 *     ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180152D3C (-OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x18038EF20 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'(__int64 a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return a1;
}
