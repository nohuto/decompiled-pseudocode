/*
 * XREFs of ?Win32kAddLeakTrackingSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1C020E694
 * Callers:
 *     ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C020E7B0 (-Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C02D2B48 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 */

__int64 __fastcall Win32kAddLeakTrackingSecondaryData(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        const struct _GUID *a3)
{
  __int128 v3; // xmm0
  int v7; // esi
  _DWORD *PoolWithTag; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  unsigned int *v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // esi
  char *v14; // [rsp+30h] [rbp-58h] BYREF
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-48h]

  v3 = (__int128)*a3;
  v14 = 0LL;
  v16 = v3;
  NumberOfBytes = 8LL;
  NSInstrumentation::CLeakTrackingAllocator::Dump(a1, (struct NSInstrumentation::_DUMP_CONTEXT *)&v14);
  v7 = NumberOfBytes;
  if ( (unsigned int)NumberOfBytes <= 8 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, (unsigned int)NumberOfBytes, 0x746C7355u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v14 = (char *)(PoolWithTag + 2);
  LODWORD(NumberOfBytes) = v7 - 8;
  NSInstrumentation::CLeakTrackingAllocator::Dump(v10, (struct NSInstrumentation::_DUMP_CONTEXT *)&v14);
  if ( (unsigned int)NumberOfBytes < v7 - 8 )
  {
    v13 = v7 - NumberOfBytes;
    *v11 = v13;
    v11[1] = 1;
    v12 = ((__int64 (__fastcall *)(NSInstrumentation::CLeakTrackingAllocator *, const struct _GUID *, unsigned int *, _QWORD))a2)(
            a1,
            a3,
            v11,
            v13);
  }
  else
  {
    v12 = -1073741675;
  }
  ExFreePoolWithTag(v11, 0);
  return v12;
}
