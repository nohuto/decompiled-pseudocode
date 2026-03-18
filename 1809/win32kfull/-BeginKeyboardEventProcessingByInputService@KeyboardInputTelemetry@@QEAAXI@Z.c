/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C011CC14
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C011CCEC (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C0317958 )
    memset(&unk_1C03178D8, 0, 0x80uLL);
  if ( dword_1C031795C != a2 )
  {
    if ( dword_1C031795C )
    {
      KeyboardInputTelemetry::_UploadTelemetryData((KeyboardInputTelemetry *)gKeyboardInputTelemetry);
      memset(&unk_1C03178D8, 0, 0x80uLL);
    }
    dword_1C031795C = a2;
    if ( gptiForeground )
    {
      v3 = *(_QWORD *)(gptiForeground + 424LL);
      if ( v3 )
      {
        if ( dword_1C0317958 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C0317958 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW(pszDest, 0x10uLL, (NTSTRSAFE_PCWSTR)(*(_QWORD *)(gptiForeground + 424LL) + 992LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry[0] = KeQueryPerformanceCounter(0LL).QuadPart;
}
