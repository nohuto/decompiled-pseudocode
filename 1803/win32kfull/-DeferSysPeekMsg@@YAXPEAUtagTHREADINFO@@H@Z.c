/*
 * XREFs of ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C000554C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall DeferSysPeekMsg(struct tagTHREADINFO *a1, int a2)
{
  __int64 v2; // r8
  int v3; // eax

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 80LL);
  v3 = *(_DWORD *)(v2 + 100);
  if ( a2 )
  {
    *(_DWORD *)(v2 + 100) = v3 | 0x10000;
    *((_DWORD *)a1 + 300) |= 0x10000000u;
  }
  else
  {
    *(_DWORD *)(v2 + 100) = v3 | 0x40000;
  }
  *(_QWORD *)(v2 + 104) = a1;
  --*(_DWORD *)(*((_QWORD *)a1 + 53) + 40LL);
}
