/*
 * XREFs of ?GetViewInternal@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18041FF00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutItem::GetViewInternal(CAppLayoutItem *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 result; // rax

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 6);
  result = 2147943568LL;
  if ( v3 )
    return (**v3)(v3, a2, a3);
  return result;
}
