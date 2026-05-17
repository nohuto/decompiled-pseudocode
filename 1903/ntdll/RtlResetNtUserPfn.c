/*
 * XREFs of RtlResetNtUserPfn @ 0x18008C620
 * Callers:
 *     <none>
 * Callees:
 *     RtlDllShutdownInProgress @ 0x1800071E0 (RtlDllShutdownInProgress.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_18017A1D8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    sub_180035F18(0);
    byte_18017A1D8 = 0;
    memset64(off_18017A180, (unsigned __int64)sub_18008C4D0, 0xBuLL);
    memset64(off_18017A000, (unsigned __int64)sub_18008C4D0, 0x18uLL);
    memset64(off_18017A0C0, (unsigned __int64)sub_18008C4D0, 0x18uLL);
    sub_180035F18(1);
  }
  return 0LL;
}
