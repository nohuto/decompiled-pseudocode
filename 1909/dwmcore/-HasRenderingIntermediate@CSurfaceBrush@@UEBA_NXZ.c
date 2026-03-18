/*
 * XREFs of ?HasRenderingIntermediate@CSurfaceBrush@@UEBA_NXZ @ 0x1801FAE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::HasRenderingIntermediate(CSurfaceBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL))(v1, 194LL) != 0;
  return v2;
}
