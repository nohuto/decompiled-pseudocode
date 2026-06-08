/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C0001B0C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001B54 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 FxStubInitTypes(void)
{
  char *i; // rbx
  __int64 (*v2)(void); // rax

  if ( &__KMDF_TYPE_INIT_START > (_UNKNOWN *)__KMDF_TYPE_INIT_END )
    return 3221225595LL;
  for ( i = __KMDF_TYPE_INIT_END; ; i += 40 )
  {
    if ( i >= __KMDF_TYPE_INIT_END )
      return 0LL;
    if ( *(_DWORD *)i != 40 )
      break;
    v2 = (__int64 (*)(void))*((_QWORD *)i + 4);
    if ( v2 )
      *((_QWORD *)i + 3) = v2();
  }
  return 3221225476LL;
}
