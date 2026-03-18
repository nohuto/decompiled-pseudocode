/*
 * XREFs of ?ShouldDeferMessage@@YA_NW4ISOD_INPUTROUTING@@I@Z @ 0x1C00373EC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldDeferMessage(int a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( ((a1 - 1) & 0xFFFFFFFD) == 0 && (unsigned int)(a2 - 256) <= 9
    || (unsigned int)(a1 - 1) <= 2 && ((unsigned int)(a2 - 512) <= 0xE || (unsigned int)(a2 - 160) <= 0xD) )
  {
    return 1;
  }
  return v2;
}
