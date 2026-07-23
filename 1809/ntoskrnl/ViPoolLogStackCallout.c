/*
 * XREFs of ViPoolLogStackCallout @ 0x140925960
 * Callers:
 *     IovpLogStackTrace @ 0x140925998 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x140939198 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
