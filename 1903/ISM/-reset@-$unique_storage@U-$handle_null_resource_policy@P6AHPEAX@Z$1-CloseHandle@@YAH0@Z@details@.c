/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002283C
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180022670 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x1800227D8 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x180056E34 (-CreateInputSink@MPCFocusTarget@@IEAAXXZ.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800A2268 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800CC040 (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x1800CCBB4 (-CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@.c)
 *     ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x1800CCF48 (-CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4740 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800D6940 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800E97B8 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801446A8 (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 *     ?EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18015559C (-EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV-$unique_a.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
