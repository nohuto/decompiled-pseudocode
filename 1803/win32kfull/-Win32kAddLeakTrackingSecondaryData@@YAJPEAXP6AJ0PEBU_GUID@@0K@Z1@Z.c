/*
 * XREFs of ?Win32kAddLeakTrackingSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1C01D3B94
 * Callers:
 *     ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C01D3CA0 (-Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C02AE038 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 */

__int64 __fastcall Win32kAddLeakTrackingSecondaryData(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        const struct _GUID *a3)
{
  __int128 v6; // xmm0
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  int v8; // esi
  unsigned int *PoolWithTag; // rax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  unsigned int *v12; // rdi
  unsigned int v13; // ebx
  unsigned int v14; // esi
  _OWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = (__int128)*a3;
  DWORD2(v15[0]) = 8;
  v15[1] = v6;
  NSInstrumentation::CLeakTrackingAllocator::Dump(v7, (struct NSInstrumentation::_DUMP_CONTEXT *)v15);
  v8 = DWORD2(v15[0]);
  if ( DWORD2(v15[0]) <= 8 )
    return 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPoolSession, DWORD2(v15[0]), 0x746C7355u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_QWORD *)&v15[0] = PoolWithTag + 2;
  DWORD2(v15[0]) = v8 - 8;
  NSInstrumentation::CLeakTrackingAllocator::Dump(v11, (struct NSInstrumentation::_DUMP_CONTEXT *)v15);
  if ( DWORD2(v15[0]) < v8 - 8 )
  {
    v14 = v8 - DWORD2(v15[0]);
    *v12 = v14;
    v12[1] = 1;
    v13 = ((__int64 (__fastcall *)(void *, const struct _GUID *, unsigned int *, _QWORD))a2)(a1, a3, v12, v14);
  }
  else
  {
    v13 = -1073741675;
  }
  ExFreePoolWithTag(v12, 0);
  return v13;
}
