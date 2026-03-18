/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C010EA90
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C010EB60 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C032CB78 )
    memset(&dword_1C032CAF8, 0, 0x80uLL);
  if ( dword_1C032CB7C != a2 )
  {
    if ( dword_1C032CB7C )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      memset(&dword_1C032CAF8, 0, 0x80uLL);
    }
    dword_1C032CB7C = a2;
    if ( gptiForeground )
    {
      v3 = *(_QWORD *)(gptiForeground + 416LL);
      if ( v3 )
      {
        if ( dword_1C032CB78 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C032CB78 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW((char *)pwsz, 16LL, (char *)(*(_QWORD *)(gptiForeground + 416LL) + 984LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry[0] = KeQueryPerformanceCounter(0LL).QuadPart;
}
