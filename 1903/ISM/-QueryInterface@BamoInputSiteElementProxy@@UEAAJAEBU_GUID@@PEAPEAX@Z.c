/*
 * XREFs of ?QueryInterface@BamoInputSiteElementProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066E80
 * Callers:
 *     ?QueryInterface@BamoInputSiteElementProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800383C0 (-QueryInterface@BamoInputSiteElementProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoInputSiteElementProxy::QueryInterface(
        BamoInputSiteElementProxy *this,
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
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_582c1c92_8112_dc2a_def3_bd916da1f566.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_582c1c92_8112_dc2a_def3_bd916da1f566.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_582c1c92_8112_dc2a_def3_bd916da1f566.Data4;
  if ( v5 )
    v6 = 0LL;
  else
LABEL_8:
    v6 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  *a3 = v6;
  if ( v6 )
    (**(void (__fastcall ***)(BamoInputSiteElementProxy *))this)(this);
  else
    return (unsigned int)-2147467262;
  return v4;
}
