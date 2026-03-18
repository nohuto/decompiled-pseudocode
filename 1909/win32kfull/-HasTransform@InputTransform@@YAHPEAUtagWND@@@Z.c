/*
 * XREFs of ?HasTransform@InputTransform@@YAHPEAUtagWND@@@Z @ 0x1C01F656C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InputTransform::HasTransform(InputTransform *this, struct tagWND *a2)
{
  return *((_QWORD *)this + 34) != 0LL;
}
