/*
 * XREFs of ??$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@AEAPEAUIAudioProcess@@$$QEAPEAVCAppSubmixClientContext@@@Z @ 0x1800F0FC0
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F169C (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

_QWORD *__fastcall std::make_unique<CAppSubmixClient,IAudioProcess * &,CAppSubmixClientContext *,0>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  _QWORD *result; // rax

  v6 = operator new(0x10uLL);
  v7 = v6;
  if ( v6 )
  {
    v8 = *a3;
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(v6, *a2);
    v7[1] = v8;
  }
  else
  {
    v7 = 0LL;
  }
  result = a1;
  *a1 = v7;
  return result;
}
