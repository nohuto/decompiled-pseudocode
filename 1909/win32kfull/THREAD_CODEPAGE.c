/*
 * XREFs of THREAD_CODEPAGE @ 0x1C015ED08
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C01136B0 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C02156C0 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C02598C4 (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1, __int64 a2, __int64 a3)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 472) + 152LL);
}
