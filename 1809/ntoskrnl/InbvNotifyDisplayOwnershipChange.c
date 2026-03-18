/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x140178630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // rax

  if ( qword_14043C6F8 && (v0 = *(__int64 (**)(void))(qword_14043C6F8 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
