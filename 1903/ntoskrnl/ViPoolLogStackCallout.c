/*
 * XREFs of ViPoolLogStackCallout @ 0x140963AE0
 * Callers:
 *     IovpLogStackTrace @ 0x140963B18 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x14097D6A8 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
