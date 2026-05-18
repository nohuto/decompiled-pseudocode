/*
 * XREFs of sub_180033280 @ 0x180033280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033280(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
  {
    if ( a2[3] >= 8uLL )
      a2 = (_QWORD *)*a2;
    return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 24LL))(v2, a2);
  }
  return result;
}
