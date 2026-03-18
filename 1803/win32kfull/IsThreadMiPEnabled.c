/*
 * XREFs of IsThreadMiPEnabled @ 0x1C00EBFAC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     IsMouseInPointerActive @ 0x1C00EBF68 (IsMouseInPointerActive.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01D54B0 (xxxMNEndMenuStateInternal.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01EBC60 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C01F3A50 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsThreadMiPEnabled(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 416) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1200) & 0x2000000) != 0;
}
