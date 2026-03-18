/*
 * XREFs of ??$min@M@std@@YAAEBMAEBM0@Z @ 0x1800EA984
 * Callers:
 *     ?GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x1801B7354 (-GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV-$span@QEAVCComputeScribbl.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x1801B74FC (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall std::min<float>(float *a1, float *a2)
{
  if ( *a1 > *a2 )
    return a2;
  return a1;
}
