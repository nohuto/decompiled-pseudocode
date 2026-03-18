/*
 * XREFs of IsMouseInPointerActive @ 0x1C00E5854
 * Callers:
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C002A774 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00E57E0 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 * Callees:
 *     IsThreadMiPEnabled @ 0x1C00E5898 (IsThreadMiPEnabled.c)
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  return a2 != 1
      && !*(_QWORD *)(a1 + 600)
      && (unsigned int)IsThreadMiPEnabled(a1, a2, a2)
      && (!v2 || (*(_DWORD *)(v2 + 100) & 0x20) == 0);
}
