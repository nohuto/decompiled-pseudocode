/*
 * XREFs of WerpThreadId @ 0x1800DEF2C
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A07A0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall WerpThreadId(void *a1)
{
  NTSTATUS InformationThread; // eax
  unsigned int v2; // ecx
  _BYTE ThreadInformation[24]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread(a1, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationThread < 0 )
    return 0;
  return v2;
}
