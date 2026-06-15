/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140041F84
 * Callers:
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x1400177D4 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x14002FBE8 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(
    this,
    (void *)0x34,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    a4,
    v4,
    retaddr,
    2);
}
