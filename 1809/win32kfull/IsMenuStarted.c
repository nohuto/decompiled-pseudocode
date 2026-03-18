/*
 * XREFs of IsMenuStarted @ 0x1C011BAD8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMenuStarted(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)(a1 + 608);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 8) & 1) == 0 )
    return 0;
  return v2;
}
