/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x1800B77E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 32);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 240LL))(v1) != 0;
  return v2;
}
