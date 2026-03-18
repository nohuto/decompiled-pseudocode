/*
 * XREFs of ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z @ 0x1C0003C0C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DeferSysPeekMsg(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL);
  if ( a2 == 1 || a2 == 3 && (unsigned int)(*(_DWORD *)(v3 + 24) - 256) <= 9 )
    *(_DWORD *)(a1 + 1208) |= 0x10000000u;
  switch ( a2 )
  {
    case 1:
      *(_DWORD *)(v3 + 100) |= 0x10000u;
      break;
    case 3:
      *(_DWORD *)(v3 + 100) |= 0x80000u;
      break;
    case 2:
      if ( (*(_DWORD *)(a1 + 1208) & 0x10000000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0x10000000LL);
      *(_DWORD *)(v3 + 100) |= 0x20000u;
      break;
  }
  *(_QWORD *)(v3 + 104) = a1;
  result = *(_QWORD *)(a1 + 432);
  --*(_DWORD *)(result + 40);
  return result;
}
