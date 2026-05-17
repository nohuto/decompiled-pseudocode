/*
 * XREFs of RtlResetNtUserPfn @ 0x18008CCC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDllShutdownInProgress @ 0x1800071E0 (RtlDllShutdownInProgress.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_18017A1D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_18017A1D8 = 0;
    memset64(off_18017A180, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_18017A0C0, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
