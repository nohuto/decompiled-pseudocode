/*
 * XREFs of ?HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x180016F0C
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016D50 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSystemQueryHostJobHandle(struct _RM_HAM_ACTIVITY_HOST *a1, void **a2)
{
  __int64 v2; // rax
  int v4; // ebx
  void *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 - 2);
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v2 + 40) + 112LL))(*((_QWORD *)a1 + 142), &v7);
  if ( v4 < 0 )
  {
    v5 = v7;
  }
  else
  {
    v5 = 0LL;
    *a2 = v7;
    v4 = 0;
    v7 = 0LL;
  }
  if ( v5 )
    NtClose(v5);
  return (unsigned int)v4;
}
