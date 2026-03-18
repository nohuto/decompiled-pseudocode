/*
 * XREFs of OpenDwmHandle @ 0x1C003F610
 * Callers:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003F550 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006ED8C (-EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionSyncWait @ 0x1C01A09B0 (NtDCompositionSyncWait.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01A0F30 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C01A4564 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 *     ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A9214 (-EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BC81C (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C002CA60 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C003F730 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C003F774 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
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
  struct _KPROCESS *v11; // rsi
  unsigned int v12; // ebx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v9 = CheckOrAcquireDwmStateLock();
  *Handle = (void *)-1LL;
  v10 = v9;
  v11 = (struct _KPROCESS *)ReferenceDwmProcess();
  if ( v11 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v11, &ApcState);
    v12 = ObOpenObjectByPointer(Object, 0x40u, 0LL, DesiredAccess, ObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v11);
  }
  else
  {
    v12 = -1073741823;
  }
  if ( v10 )
    GreUnlockDwmState();
  return v12;
}
