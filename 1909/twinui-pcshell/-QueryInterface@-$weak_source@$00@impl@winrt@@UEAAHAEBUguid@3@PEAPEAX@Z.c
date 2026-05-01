/*
 * XREFs of ?QueryInterface@?$weak_source@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C1A90
 * Callers:
 *     <none>
 * Callees:
 *     ??$is_guid_of@UIWeakReferenceSource@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C028C (--$is_guid_of@UIWeakReferenceSource@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::weak_source<1>::QueryInterface(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v6; // rax

  if ( winrt::impl::is_guid_of<winrt::impl::IWeakReferenceSource>(a2) )
  {
    *v2 = v3;
    v4 = v3 + 16;
    if ( !v3 )
      v4 = 24LL;
    _InterlockedExchangeAdd((volatile signed __int32 *)v4, 1u);
    return 0LL;
  }
  else
  {
    v6 = v3 + 8;
    if ( !v3 )
      v6 = 16LL;
    return (***(__int64 (__fastcall ****)(_QWORD))v6)(*(_QWORD *)v6);
  }
}
