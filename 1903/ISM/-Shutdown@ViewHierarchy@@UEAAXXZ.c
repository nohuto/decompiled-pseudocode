/*
 * XREFs of ?Shutdown@ViewHierarchy@@UEAAXXZ @ 0x180059C40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x180010D38 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewHierarchy::Shutdown(ViewHierarchy *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rbx
  __int64 v5; // rcx

  ViewHierarchy::RemoveListListenerReference((ViewHierarchy *)((char *)this - 16));
  v2 = (__int64 *)*((_QWORD *)this + 20);
  v3 = (__int64 *)*((_QWORD *)this + 19);
  if ( v3 != v2 )
  {
    do
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v3 + 64LL))(*v3, (char *)this + 16);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)this + 20);
  }
  v4 = (__int64 *)*((_QWORD *)this + 19);
  if ( v4 != v2 )
  {
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      ++v4;
    }
    while ( v4 != v2 );
    v4 = (__int64 *)*((_QWORD *)this + 19);
  }
  *((_QWORD *)this + 20) = v4;
}
