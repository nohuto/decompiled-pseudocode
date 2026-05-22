/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180094528
 * Callers:
 *     _SystemCursorController::EnsureServiceAndRegisterClient_::_1_::catch$8 @ 0x18013272A (_SystemCursorController--EnsureServiceAndRegisterClient_--_1_--catch$8.c)
 *     _SystemCursorController::AttachApplication_::_1_::catch$4 @ 0x180132799 (_SystemCursorController--AttachApplication_--_1_--catch$4.c)
 *     _SystemCursorController::CreateCursorForDevice_::_1_::catch$0 @ 0x180132805 (_SystemCursorController--CreateCursorForDevice_--_1_--catch$0.c)
 *     _SystemCursorController::OnStubDisconnected_::_1_::catch$1 @ 0x18013283C (_SystemCursorController--OnStubDisconnected_--_1_--catch$1.c)
 *     _SystemCursorController::CreateCursorShapeAnimation_::_1_::catch$0 @ 0x180132873 (_SystemCursorController--CreateCursorShapeAnimation_--_1_--catch$0.c)
 *     _SystemCursorController::CreateCustomCursorShapeAnimation_::_1_::catch$1 @ 0x1801328AA (_SystemCursorController--CreateCustomCursorShapeAnimation_--_1_--catch$1.c)
 *     _SystemCursorController::DestroyCursorShapeAnimation_::_1_::catch$2 @ 0x1801328F3 (_SystemCursorController--DestroyCursorShapeAnimation_--_1_--catch$2.c)
 *     _SystemCursorController::DestroyCustomCursorShapeAnimation_::_1_::catch$3 @ 0x18013292A (_SystemCursorController--DestroyCustomCursorShapeAnimation_--_1_--catch$3.c)
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$0 @ 0x180132E33 (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$0.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$0 @ 0x180132EAC (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$0.c)
 *     _ButtonProcessor::OnCameraAccessToggle_::_1_::catch$5 @ 0x180134901 (_ButtonProcessor--OnCameraAccessToggle_--_1_--catch$5.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::catch$5 @ 0x18013593F (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--catch.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch$2 @ 0x18013598B (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--catch$2.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::catch$2 @ 0x180135E4F (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180135E4F.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch$2 @ 0x180135E98 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180135E98.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::catch$2 @ 0x180135ECF (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180135ECF.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::catch$2 @ 0x180135F18 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180135F18.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_84d1669a2d3ff4f598ada49efe38a155____::_1_::catch$2 @ 0x180135F4F (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180135F4F.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch$2 @ 0x18013675F (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDe_ea_18013675F.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::catch$2 @ 0x1801369B1 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1801369B1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180064DF4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, 2);
}
