/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00E8E10
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00E8EE0 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C032AB68 )
    memset(&dword_1C032AAE8, 0, 0x80uLL);
  if ( dword_1C032AB6C != a2 )
  {
    if ( dword_1C032AB6C )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      memset(&dword_1C032AAE8, 0, 0x80uLL);
    }
    dword_1C032AB6C = a2;
    if ( gptiForeground )
    {
      v3 = *(_QWORD *)(gptiForeground + 416LL);
      if ( v3 )
      {
        if ( dword_1C032AB68 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C032AB68 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW((char *)pwsz, 16LL, (char *)(*(_QWORD *)(gptiForeground + 416LL) + 984LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry[0] = KeQueryPerformanceCounter(0LL).QuadPart;
}
