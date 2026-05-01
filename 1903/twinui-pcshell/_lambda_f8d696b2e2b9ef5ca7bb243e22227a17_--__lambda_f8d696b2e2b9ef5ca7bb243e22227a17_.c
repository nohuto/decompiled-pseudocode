/*
 * XREFs of _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_ @ 0x1801A0504
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___::_scalar_deleting_destructor_ @ 0x1801A0BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f8d696b2e2b9ef5ca7bb243e22227a17___--_scala.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801A0CDC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x1801A0680 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 4));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
