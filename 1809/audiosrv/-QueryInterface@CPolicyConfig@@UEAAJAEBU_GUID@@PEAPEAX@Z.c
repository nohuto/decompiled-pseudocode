/*
 * XREFs of ?QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005E4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::QueryInterface(CPolicyConfig *this, const struct _GUID *a2, CPolicyConfig **a3)
{
  CPolicyConfig *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax

  v4 = this;
  if ( !a3 )
    return 2147500035LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v5 )
    goto LABEL_8;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85.Data4;
  if ( v6 )
  {
    result = 2147500034LL;
    v4 = 0LL;
  }
  else
  {
LABEL_8:
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)this + 8LL))(this);
    result = 0LL;
  }
  *a3 = v4;
  return result;
}
