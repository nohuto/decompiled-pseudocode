/*
 * XREFs of ?RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z @ 0x1800C4E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterViewHitTestClient(DWMInputRouter *this, struct IRemoteViewHitTestClient *a2)
{
  struct IRemoteViewHitTestClient *v4; // rcx

  v4 = (struct IRemoteViewHitTestClient *)*((_QWORD *)this + 43);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRemoteViewHitTestClient *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IRemoteViewHitTestClient *)*((_QWORD *)this + 43);
    }
    *((_QWORD *)this + 43) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct IRemoteViewHitTestClient *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
