/*
 * XREFs of CrmActivityAllocate @ 0x180008420
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_ACTIVITY_ID@@PEAGPEAKP6AXPEAX5W4_CRM_NOTIFICATION_TYPE@@55@Z5@Z @ 0x1800084F0 (-CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM.c)
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18000FE1C (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

__int64 __fastcall CrmActivityAllocate(
        struct _CRMP_ACTIVITY_CONTEXT **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _CRMP_ACTIVITY_CONTEXT *Heap; // rax
  struct _CRMP_ACTIVITY_CONTEXT *v12; // rbx
  int v13; // edi

  Heap = (struct _CRMP_ACTIVITY_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v12 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x68uLL);
    *((_QWORD *)v12 + 1) = -1LL;
    *(_DWORD *)v12 = 31;
    v13 = CrmpActivityContextStart(v12, a2, a3, a4, a5, a6, a7);
    if ( v13 >= 0 )
    {
      *a1 = v12;
      v12 = 0LL;
      v13 = 0;
    }
    if ( v12 )
    {
      CrmpActivityContextCleanup(v12);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
