/*
 * XREFs of ?OnReplaced@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@1@Z @ 0x1800599A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnReplaced(
        ViewHierarchy *this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4,
        struct IUnknown *a5)
{
  (*(void (__fastcall **)(ViewHierarchy *, _QWORD, _QWORD, struct IUnknown *))(*(_QWORD *)this + 32LL))(
    this,
    0LL,
    0LL,
    a4);
  (*(void (__fastcall **)(ViewHierarchy *, _QWORD, _QWORD, struct IUnknown *))(*(_QWORD *)this + 24LL))(
    this,
    0LL,
    0LL,
    a5);
  return 0LL;
}
