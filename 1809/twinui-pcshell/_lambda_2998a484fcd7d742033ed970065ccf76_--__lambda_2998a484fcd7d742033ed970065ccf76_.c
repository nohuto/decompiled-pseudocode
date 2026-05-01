/*
 * XREFs of _lambda_2998a484fcd7d742033ed970065ccf76_::__lambda_2998a484fcd7d742033ed970065ccf76_ @ 0x18001E220
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ??_E?$CTaskWrapper@V_lambda_2998a484fcd7d742033ed970065ccf76_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180080B00 (--_E-$CTaskWrapper@V_lambda_2998a484fcd7d742033ed970065ccf76_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18001B698 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_2998a484fcd7d742033ed970065ccf76_::__lambda_2998a484fcd7d742033ed970065ccf76_(__int64 a1)
{
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(a1 + 32));
  WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
