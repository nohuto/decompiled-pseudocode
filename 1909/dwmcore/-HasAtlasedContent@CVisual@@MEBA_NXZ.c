/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x1800B8180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 32);
  return v1 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL))(v1, 125LL);
}
