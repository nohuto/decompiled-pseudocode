/*
 * XREFs of ?ndisLiveDumpAddSecondaryData@@YAJPEAUNDIS_MEMORYDUMP_HANDLE__@@PEBU_GUID@@PEAXK@Z @ 0x1C0118A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisLiveDumpAddSecondaryData(struct NDIS_MEMORYDUMP_HANDLE__ *a1, const struct _GUID *a2, void *a3)
{
  return (*((__int64 (__fastcall **)(_QWORD, const struct _GUID *, void *))a1 + 1))(*(_QWORD *)a1, a2, a3);
}
