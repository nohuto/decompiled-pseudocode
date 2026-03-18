/*
 * XREFs of BltAV_CY @ 0x1C0261FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BltAV_CY(__int64 a1)
{
  __int64 result; // rax

  (*(void (**)(void))(a1 + 232))();
  result = *(int *)(a1 + 260);
  *(_QWORD *)(a1 + 248) += result;
  return result;
}
