/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1406EE240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 FsRtlGetFileNameInformation()
{
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 24))();
  else
    return 3221225659LL;
}
