/*
 * XREFs of ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18020EC34
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18021C46C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18021D530 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18021EFF8 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx

  v4 = 0LL;
  *a4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 8 * v4) + 672LL))(*(_QWORD *)(*a1 + 8 * v4)) != *a2 )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
