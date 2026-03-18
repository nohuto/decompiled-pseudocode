/*
 * XREFs of OpenDwmHandle @ 0x1C004870C
 * Callers:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00486E0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005ACBC (-EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionSyncWait @ 0x1C0166AD0 (NtDCompositionSyncWait.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C016715C (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C0169374 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 *     ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016E280 (-EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017C300 (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C002AA20 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0048810 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0048854 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDwmHandle(
        PVOID Object,
        POBJECT_TYPE ObjectType,
        ACCESS_MASK DesiredAccess,
        __int64 a4,
        int a5,
        PHANDLE Handle)
{
  char v9; // al
  char v10; // di
  struct _KPROCESS *v11; // rax
  struct _KPROCESS *v12; // rsi
  unsigned int v13; // ebx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v9 = CheckOrAcquireDwmStateLock();
  *Handle = (void *)-1LL;
  v10 = v9;
  v11 = (struct _KPROCESS *)ReferenceDwmProcess();
  v12 = v11;
  if ( v11 )
  {
    KeStackAttachProcess(v11, &ApcState);
    v13 = ObOpenObjectByPointer(Object, 0x40u, 0LL, DesiredAccess, ObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v12);
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v10 )
    GreUnlockDwmState();
  return v13;
}
