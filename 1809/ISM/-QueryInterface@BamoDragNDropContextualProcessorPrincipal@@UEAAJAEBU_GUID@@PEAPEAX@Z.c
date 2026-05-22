/*
 * XREFs of ?QueryInterface@BamoDragNDropContextualProcessorPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021700
 * Callers:
 *     ?QueryInterface@BamoDragNDropContextualProcessorPrincipal@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022140 (-QueryInterface@BamoDragNDropContextualProcessorPrincipal@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoDragNDropContextualProcessorPrincipal::QueryInterface(
        BamoDragNDropContextualProcessorPrincipal *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx

  v3 = 0;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ebdb941_0f09_5714_8483_1e405b90aee6.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_6ebdb941_0f09_5714_8483_1e405b90aee6.Data4 )
  {
    v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  }
  else
  {
    v4 = 0LL;
  }
  *a3 = v4;
  if ( v4 )
    (**(void (__fastcall ***)(BamoDragNDropContextualProcessorPrincipal *))this)(this);
  else
    return (unsigned int)-2147467262;
  return v3;
}
