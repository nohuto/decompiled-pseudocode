/*
 * XREFs of ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18003FEA4
 * Callers:
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180010D0C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampSessionAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x18003FF38 (-HampSessionAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x18004024C (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionCreate(struct _HOST_ACTIVITY_MANAGER *a1, unsigned int a2, struct _HAM_SESSION **a3)
{
  struct _HAM_SESSION *Heap; // rax
  struct _HAM_SESSION *v7; // rbx
  int State; // edi

  Heap = (struct _HAM_SESSION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v7 = Heap;
  if ( Heap )
  {
    HampSessionInitialize(a1, a2, Heap);
    State = HampSessionAllocateState(a1, v7);
    if ( State >= 0 )
    {
      State = 0;
      *a3 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      CemRcObjectDereference(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
