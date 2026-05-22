/*
 * XREFs of ?QueryInterface@BamoAsyncHRESULTProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDFF0
 * Callers:
 *     ?QueryInterface@BamoAsyncHRESULTProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DBB90 (-QueryInterface@BamoAsyncHRESULTProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoAsyncHRESULTProxy::QueryInterface(
        BamoAsyncHRESULTProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx

  v3 = 0;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_82759840_ba50_f15e_b06e_a4fe678636c5.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_82759840_ba50_f15e_b06e_a4fe678636c5.Data4 )
  {
    v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  }
  else
  {
    v4 = 0LL;
  }
  *a3 = v4;
  if ( v4 )
    (**(void (__fastcall ***)(BamoAsyncHRESULTProxy *))this)(this);
  else
    return (unsigned int)-2147467262;
  return v3;
}
