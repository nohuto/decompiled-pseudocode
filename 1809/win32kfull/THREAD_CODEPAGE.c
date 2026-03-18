/*
 * XREFs of THREAD_CODEPAGE @ 0x1C0205C24
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C01303C4 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C01FE660 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0241274 (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 480) + 152LL);
}
