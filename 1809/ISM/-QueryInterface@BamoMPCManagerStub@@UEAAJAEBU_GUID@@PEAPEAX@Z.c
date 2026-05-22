/*
 * XREFs of ?QueryInterface@BamoMPCManagerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F7D0
 * Callers:
 *     ?QueryInterface@BamoMPCManagerStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F850 (-QueryInterface@BamoMPCManagerStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoMPCManagerStub::QueryInterface(BamoMPCManagerStub *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx

  v3 = 0;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71d65cbf_9117_7e3b_bb6e_399ae04ded8f.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_71d65cbf_9117_7e3b_bb6e_399ae04ded8f.Data4 )
  {
    v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  }
  else
  {
    v4 = 0LL;
  }
  *a3 = v4;
  if ( v4 )
    (**(void (__fastcall ***)(BamoMPCManagerStub *))this)(this);
  else
    return (unsigned int)-2147467262;
  return v3;
}
