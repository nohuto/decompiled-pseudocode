/*
 * XREFs of RtlResetNtUserPfn @ 0x18008FD30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDllShutdownInProgress @ 0x18005EA20 (RtlDllShutdownInProgress.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 */

__int64 RtlResetNtUserPfn()
{
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  unsigned __int64 *v4; // r8
  __int64 v5; // r9

  if ( !byte_1801781D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0, v1, v2, v3);
    byte_1801781D8 = 0;
    memset64(off_180178180, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801780C0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1, 0x18uLL, v4, v5);
  }
  return 0LL;
}
