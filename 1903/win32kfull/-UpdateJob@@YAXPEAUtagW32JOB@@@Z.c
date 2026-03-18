/*
 * XREFs of ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C012471C
 * Callers:
 *     UserJobCallout @ 0x1C0018720 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FDC0 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FEC4 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall UpdateJob(struct tagW32JOB *a1, int a2)
{
  struct tagPROCESSINFO *i; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, a2, 0xDu, 0x11u, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, a1);
  for ( i = (struct tagPROCESSINFO *)gppiList; i; i = (struct tagPROCESSINFO *)*((_QWORD *)i + 47) )
  {
    if ( PsGetProcessJob(*(_QWORD *)i) == *((_QWORD *)a1 + 1) )
    {
      if ( *((_QWORD *)i + 95) )
        SetProcessFlags(a1, i);
      else
        JobCalloutAddProcess(a1, i);
    }
  }
}
