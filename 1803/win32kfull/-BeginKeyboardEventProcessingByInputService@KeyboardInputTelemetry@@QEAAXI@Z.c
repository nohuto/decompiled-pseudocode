/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00BD6A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00BD230 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C03299E8 )
    memset(&unk_1C0329988, 0, 0x60uLL);
  if ( dword_1C03299EC != a2 )
  {
    if ( dword_1C03299EC )
      KeyboardInputTelemetry::_UploadTelemetryData((const WCHAR *)gKeyboardInputTelemetry);
    dword_1C03299EC = a2;
    if ( gptiForeground )
    {
      v3 = *(_QWORD *)(gptiForeground + 416LL);
      if ( v3 )
      {
        if ( dword_1C03299E8 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C03299E8 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW(pszDest, 0x10uLL, (NTSTRSAFE_PCWSTR)(*(_QWORD *)(gptiForeground + 416LL) + 984LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry[0] = KeQueryPerformanceCounter(0LL).QuadPart;
}
