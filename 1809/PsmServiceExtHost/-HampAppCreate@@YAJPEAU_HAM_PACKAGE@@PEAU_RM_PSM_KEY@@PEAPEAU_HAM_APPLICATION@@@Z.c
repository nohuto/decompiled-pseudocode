/*
 * XREFs of ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x18002E9EC
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180014770 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x18002EA7C (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x18002EB90 (-HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCreate(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2, struct _HAM_APPLICATION **a3)
{
  struct _HAM_APPLICATION *Heap; // rax
  struct _HAM_APPLICATION *v7; // rbx
  int State; // edi

  Heap = (struct _HAM_APPLICATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x268uLL);
  v7 = Heap;
  if ( Heap )
  {
    HampAppInitialize(a1, a2, Heap);
    State = HampAppAllocateState(v7);
    if ( State >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
      State = 0;
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
