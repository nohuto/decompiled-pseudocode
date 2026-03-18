/*
 * XREFs of IsMouseInPointerActive @ 0x1C010B2B4
 * Callers:
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0024304 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C010B240 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 * Callees:
 *     IsThreadMiPEnabled @ 0x1C010B2F8 (IsThreadMiPEnabled.c)
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  return a2 != 1
      && !*(_QWORD *)(a1 + 600)
      && (unsigned int)IsThreadMiPEnabled(a1, a2, a2)
      && (!v2 || (*(_DWORD *)(v2 + 100) & 0x20) == 0);
}
