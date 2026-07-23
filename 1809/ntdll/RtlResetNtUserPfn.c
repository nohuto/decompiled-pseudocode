/*
 * XREFs of RtlResetNtUserPfn @ 0x18008FD40
 * Callers:
 *     <none>
 * Callees:
 *     RtlDllShutdownInProgress @ 0x18005EA20 (RtlDllShutdownInProgress.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801781D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_1801781D8 = 0;
    memset64(off_180178180, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801780C0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
