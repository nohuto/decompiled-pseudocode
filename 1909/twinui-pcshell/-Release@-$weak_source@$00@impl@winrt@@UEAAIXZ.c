/*
 * XREFs of ?Release@?$weak_source@$00@impl@winrt@@UEAAIXZ @ 0x1800C1E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::weak_source<1>::Release(__int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 16LL;
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 16LL))(*(_QWORD *)v1);
}
