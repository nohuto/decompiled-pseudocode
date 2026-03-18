/*
 * XREFs of ?HasRenderingIntermediate@CNineGridBrush@@UEBA_NXZ @ 0x1801AA580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CNineGridBrush::HasRenderingIntermediate(CNineGridBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 264LL))(v1) != 0;
  return v2;
}
