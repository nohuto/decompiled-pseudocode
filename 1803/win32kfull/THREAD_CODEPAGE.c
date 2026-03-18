/*
 * XREFs of THREAD_CODEPAGE @ 0x1C01E0324
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C010E578 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C01D9400 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C022B318 (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 472) + 152LL);
}
