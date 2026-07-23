/*
 * XREFs of sub_180104220 @ 0x180104220
 * Callers:
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_180103FDC @ 0x180103FDC (sub_180103FDC.c)
 */

__int64 __fastcall sub_180104220(__int64 a1, __int64 a2, unsigned int a3, char **a4)
{
  USHORT v5; // ax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-128h] BYREF
  PVOID BackTrace[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a3 == 1 )
  {
    *a4 = (char *)16;
  }
  else if ( a3 > 1 && (a3 <= 3 || a3 - 5 <= 1) )
  {
    if ( a4 )
    {
      v5 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, BackTraceHash);
      *a4 = sub_180103FDC(v5, BackTrace, BackTraceHash[0]);
    }
  }
  return 0LL;
}
