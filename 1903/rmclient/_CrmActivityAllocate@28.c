/*
 * XREFs of _CrmActivityAllocate@28 @ 0x1000A470
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpActivityContextCleanup@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A3C0 (-CrmpActivityContextCleanup@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     ?CrmpActivityContextStart@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_ACTIVITY_ID@@PAGPAKP6GXPAX5W4_CRM_NOTIFICATION_TYPE@@55@Z5@Z @ 0x1000A550 (-CrmpActivityContextStart@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_A.c)
 */

int __stdcall CrmActivityAllocate(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *Heap; // eax
  void *v8; // esi
  int v9; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48u);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  Heap[1] = 0;
  Heap[4] = 0;
  Heap[5] = 0;
  Heap[6] = 0;
  Heap[7] = 0;
  Heap[8] = 0;
  Heap[9] = 0;
  Heap[10] = 0;
  Heap[11] = 0;
  Heap[12] = 0;
  Heap[13] = 0;
  Heap[14] = 0;
  Heap[15] = 0;
  Heap[16] = 0;
  Heap[17] = 0;
  *Heap = 701;
  Heap[2] = -1;
  Heap[3] = -1;
  v9 = CrmpActivityContextStart(Heap, a2, a3, a4, a5, a6, a7);
  if ( v9 < 0 )
  {
    CrmpActivityContextCleanup((int)v8);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return v9;
  }
  else
  {
    *a1 = v8;
    return 0;
  }
}
