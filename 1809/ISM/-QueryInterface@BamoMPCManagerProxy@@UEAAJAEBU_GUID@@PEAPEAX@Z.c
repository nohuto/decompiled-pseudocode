/*
 * XREFs of ?QueryInterface@BamoMPCManagerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD3A0
 * Callers:
 *     ?QueryInterface@BamoMPCManagerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBC20 (-QueryInterface@BamoMPCManagerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoMPCManagerProxy::QueryInterface(BamoMPCManagerProxy *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx

  v3 = 0;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_80d47daf_ff3e_615f_b8bf_98e04e2f97da.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_80d47daf_ff3e_615f_b8bf_98e04e2f97da.Data4 )
  {
    v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  }
  else
  {
    v4 = 0LL;
  }
  *a3 = v4;
  if ( v4 )
    (**(void (__fastcall ***)(BamoMPCManagerProxy *))this)(this);
  else
    return (unsigned int)-2147467262;
  return v3;
}
