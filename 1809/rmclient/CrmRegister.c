/*
 * XREFs of CrmRegister @ 0x1800082B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180008344 (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x18001001C (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 */

__int64 __fastcall CrmRegister(struct _CRMP_REGISTRATION_CONTEXT **a1, unsigned int a2, __int64 a3)
{
  struct _CRMP_REGISTRATION_CONTEXT *Heap; // rbx
  int v7; // edi

  Heap = (struct _CRMP_REGISTRATION_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
  if ( Heap )
  {
    *(_QWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 1) = 0LL;
    *(_DWORD *)Heap = 7;
    v7 = CrmpRegistrationContextStart(Heap, a2, a3);
    if ( v7 >= 0 )
    {
      *a1 = Heap;
      Heap = 0LL;
      v7 = 0;
    }
    if ( Heap )
    {
      CrmpRegistrationContextCleanup(Heap);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
