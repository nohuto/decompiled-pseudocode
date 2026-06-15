/*
 * XREFs of ?QueryInterface@PhoneTopology@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180144A40
 * Callers:
 *     ?QueryInterface@PhoneTopology@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180069990 (-QueryInterface@PhoneTopology@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology::QueryInterface(PhoneTopology *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( !a3 )
    return v3;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_242cf56d_42d8_4b1f_ae71_9dc02d4a7d37.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_242cf56d_42d8_4b1f_ae71_9dc02d4a7d37.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_242cf56d_42d8_4b1f_ae71_9dc02d4a7d37.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(PhoneTopology *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((PhoneTopology *)((char *)this + 8), a2, a3);
}
