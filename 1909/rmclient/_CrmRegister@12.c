/*
 * XREFs of _CrmRegister@12 @ 0x1000A260
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YGXPAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x10008135 (-CrmpRegistrationContextCleanup@@YGXPAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 *     ?CrmpRegistrationContextStart@@YGJPAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PAG@Z @ 0x1000A2C0 (-CrmpRegistrationContextStart@@YGJPAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PAG@Z.c)
 */

int __stdcall CrmRegister(_DWORD *a1, int a2, int a3)
{
  _DWORD *Heap; // esi
  int v4; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8u);
  if ( !Heap )
    return -1073741801;
  Heap[1] = 0;
  *Heap = 302;
  v4 = CrmpRegistrationContextStart(Heap, a2, a3);
  if ( v4 < 0 )
  {
    CrmpRegistrationContextCleanup(Heap);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v4;
  }
  else
  {
    *a1 = Heap;
    return 0;
  }
}
