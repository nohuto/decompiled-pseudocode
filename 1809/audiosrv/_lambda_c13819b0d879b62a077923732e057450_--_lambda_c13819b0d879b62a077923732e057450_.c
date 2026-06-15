/*
 * XREFs of _lambda_c13819b0d879b62a077923732e057450_::_lambda_c13819b0d879b62a077923732e057450_ @ 0x18006796C
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

__int64 __fastcall lambda_c13819b0d879b62a077923732e057450_::_lambda_c13819b0d879b62a077923732e057450_(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>((_QWORD *)a1, *a2);
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  result = a1;
  *(_BYTE *)(a1 + 32) = *a6;
  return result;
}
