/*
 * XREFs of ??1?$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@@@QEAA@XZ @ 0x1800E6F0C
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$18 @ 0x1800AD4C0 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$18.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800E5970 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?RemoveAndReleaseAll@?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x1800F1834 (-RemoveAndReleaseAll@-$CSimplePointerArray@UIUnknown@@V-$CTContainer_PolicyRelease@UIUnknown@@@@.c)
 *     ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x1800FAAB0 (-v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z.c)
 *     _RecoverApplicationWindows_::_1_::dtor$0 @ 0x1800FC540 (_RecoverApplicationWindows_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$1 @ 0x180220061 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$1.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180317880 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ??_GAppResizeData@@UEAAPEAXI@Z @ 0x1803674A0 (--_GAppResizeData@@UEAAPEAXI@Z.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x180367E10 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 *     _VirtualDesktopPersistence::VirtualDesktopCollectionChanged_::_1_::dtor$1 @ 0x180383017 (_VirtualDesktopPersistence--VirtualDesktopCollectionChanged_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
