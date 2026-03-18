/*
 * XREFs of ?HasTransform@InputTransform@@YAHPEAUtagWND@@@Z @ 0x1C01E0654
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InputTransform::HasTransform(InputTransform *this, struct tagWND *a2)
{
  return *((_QWORD *)this + 32) != 0LL;
}
