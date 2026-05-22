/*
 * XREFs of ?QueryInterface@BamoMPCConstantManagerClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDC10
 * Callers:
 *     ?QueryInterface@BamoMPCConstantManagerClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBD20 (-QueryInterface@BamoMPCConstantManagerClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientProxy::QueryInterface(
        BamoMPCConstantManagerClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx

  v3 = 0;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_172aaa1d_bf78_4edd_7fb2_46281da69579.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_172aaa1d_bf78_4edd_7fb2_46281da69579.Data4 )
  {
    v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  }
  else
  {
    v4 = 0LL;
  }
  *a3 = v4;
  if ( v4 )
    (**(void (__fastcall ***)(BamoMPCConstantManagerClientProxy *))this)(this);
  else
    return (unsigned int)-2147467262;
  return v3;
}
