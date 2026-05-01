/*
 * XREFs of _lambda_57aa3e92036d8099e639386d4804eb50_::__lambda_57aa3e92036d8099e639386d4804eb50_ @ 0x18006DD34
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006D8F8 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50___::_scalar_deleting_destructor_ @ 0x18006DBB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57aa3e92036d8099e639386d4804eb50___--_scala.c)
 * Callees:
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18006DD68 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_57aa3e92036d8099e639386d4804eb50_::__lambda_57aa3e92036d8099e639386d4804eb50_(__int64 a1)
{
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(a1 + 32));
  WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1);
}
