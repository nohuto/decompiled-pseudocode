/*
 * XREFs of ?QueryInterface@BamoAsyncResult_string_Stub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801234A0
 * Callers:
 *     ?QueryInterface@BamoAsyncResult_string_Stub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039B10 (-QueryInterface@BamoAsyncResult_string_Stub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoAsyncResult_string_Stub::QueryInterface(
        BamoAsyncResult_string_Stub *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  void *v6; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( !v3 )
    goto LABEL_8;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b341b93d_1635_16b5_97d0_14c809be5ad5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b341b93d_1635_16b5_97d0_14c809be5ad5.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b341b93d_1635_16b5_97d0_14c809be5ad5.Data4;
  if ( v5 )
    v6 = 0LL;
  else
LABEL_8:
    v6 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  *a3 = v6;
  if ( v6 )
    (**(void (__fastcall ***)(BamoAsyncResult_string_Stub *))this)(this);
  else
    return (unsigned int)-2147467262;
  return v4;
}
