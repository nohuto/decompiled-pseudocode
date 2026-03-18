/*
 * XREFs of ?HasTransform@InputTransform@@YAHPEAUtagWND@@@Z @ 0x1C01F6818
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InputTransform::HasTransform(InputTransform *this, struct tagWND *a2)
{
  return *((_QWORD *)this + 34) != 0LL;
}
