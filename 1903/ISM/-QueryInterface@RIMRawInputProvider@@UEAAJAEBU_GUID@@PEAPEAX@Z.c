/*
 * XREFs of ?QueryInterface@RIMRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000DC60
 * Callers:
 *     ?QueryInterface@RIMRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800388B0 (-QueryInterface@RIMRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::QueryInterface(RIMRawInputProvider *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax

  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
    return 2147500034LL;
  (*(void (__fastcall **)(RIMRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
  *a3 = (char *)this + 8;
  return 0LL;
}
