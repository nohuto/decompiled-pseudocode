/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD74
 * Callers:
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$7 @ 0x18003A9C6 (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$7.c)
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$2 @ 0x18003D927 (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--catch$2.c)
 *     _SystemCursorController::AttachApplication_::_1_::catch$4 @ 0x1800C939F (_SystemCursorController--AttachApplication_--_1_--catch$4.c)
 *     _SystemCursorController::CreateCursorForDevice_::_1_::catch$0 @ 0x1800C9570 (_SystemCursorController--CreateCursorForDevice_--_1_--catch$0.c)
 *     _SystemCursorController::CreateCursorShapeAnimation_::_1_::catch$0 @ 0x1800C97B2 (_SystemCursorController--CreateCursorShapeAnimation_--_1_--catch$0.c)
 *     _SystemCursorController::CreateCustomCursorShapeAnimation_::_1_::catch$3 @ 0x1800C9AF6 (_SystemCursorController--CreateCustomCursorShapeAnimation_--_1_--catch$3.c)
 *     _SystemCursorController::DestroyCursorShapeAnimation_::_1_::catch$18 @ 0x1800C9E56 (_SystemCursorController--DestroyCursorShapeAnimation_--_1_--catch$18.c)
 *     _SystemCursorController::DestroyCustomCursorShapeAnimation_::_1_::catch$4 @ 0x1800CA1BA (_SystemCursorController--DestroyCustomCursorShapeAnimation_--_1_--catch$4.c)
 *     _SystemCursorController::EnsureServiceAndRegisterClient_::_1_::catch$26 @ 0x1800CA459 (_SystemCursorController--EnsureServiceAndRegisterClient_--_1_--catch$26.c)
 *     _SystemCursorController::OnStubDisconnected_::_1_::catch$3 @ 0x1800CA662 (_SystemCursorController--OnStubDisconnected_--_1_--catch$3.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$1 @ 0x1800D361B (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$1.c)
 *     _PenDeviceManager::AttachRIMDevice_::_1_::catch$61 @ 0x180127DFF (_PenDeviceManager--AttachRIMDevice_--_1_--catch$61.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::catch$2 @ 0x18014B6C9 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_18014B6C9.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch$0 @ 0x18014B728 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_18014B728.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::catch$2 @ 0x18014B7C9 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_18014B7C9.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_3f94c1c330aebc4cd0e0e5305e75e493____::_1_::catch$0 @ 0x18014B828 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_18014B828.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::catch$2 @ 0x18014B8C9 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_18014B8C9.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch$0 @ 0x18015333C (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--catch$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::catch$2 @ 0x1801533DB (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--catch.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::catch$2 @ 0x1801625C1 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1801625C1.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch$2 @ 0x180163D5E (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDe_ea_180163D5E.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18009E890 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
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
