/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FDC0
 * Callers:
 *     UserJobCallout @ 0x1C0018720 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C012471C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FE08 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcess(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  if ( *(_QWORD *)a2 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x8000) != 0 )
      return JobCalloutAddProcessWorker(a1, a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)a1,
        (__int64)a2,
        0xDu,
        0x17u,
        (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids,
        a1,
        a2);
  }
  return 0LL;
}
