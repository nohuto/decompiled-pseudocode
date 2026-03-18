/*
 * XREFs of ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0211788
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C020C2EC (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C020C598 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::GetInputReport(
        InteractiveControlDevice *this,
        int a2,
        struct InteractiveControlInput **a3)
{
  struct InteractiveControlInput **v3; // rcx
  struct InteractiveControlInput *i; // rax

  v3 = (struct InteractiveControlInput **)((char *)this + 16);
  for ( i = *v3; ; i = *(struct InteractiveControlInput **)i )
  {
    if ( i == (struct InteractiveControlInput *)v3 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    if ( *((_DWORD *)i + 8) == a2 )
      break;
  }
  *a3 = i;
  return 1LL;
}
