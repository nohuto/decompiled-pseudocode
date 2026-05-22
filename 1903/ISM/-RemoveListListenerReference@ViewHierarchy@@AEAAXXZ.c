/*
 * XREFs of ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x180010D38
 * Callers:
 *     ?OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18000A500 (-OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180010AE0 (-OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180010BF0 (-OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x18005908C (--1ViewHierarchy@@UEAA@XZ.c)
 *     ?OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180059930 (-OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?Shutdown@ViewHierarchy@@UEAAXXZ @ 0x180059C40 (-Shutdown@ViewHierarchy@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewHierarchy::RemoveListListenerReference(ViewHierarchy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 72LL))(v2, (char *)this + 8);
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
    {
      *((_QWORD *)this + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
