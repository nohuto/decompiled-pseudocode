/*
 * XREFs of ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180079FBC
 * Callers:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800747F0 (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 * Callees:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180010ACC (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18007A270 (-HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_.c)
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18007A2D8 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampClientPkgCreate(
        struct _HAM_PACKAGE_INFO *a1,
        struct _HOST_ACTIVITY_MANAGER **a2,
        unsigned __int64 *a3)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rdi
  int v6; // esi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *Heap; // rax
  struct _HAM_PACKAGE *v8; // rbx
  struct _HAM_PACKAGE *v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  v6 = HampPkgFindOrCreate(*a2, a1, &v10);
  if ( v6 < 0 )
  {
    v8 = v10;
  }
  else
  {
    Heap = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
    v8 = v10;
    v5 = Heap;
    if ( Heap )
    {
      HampClientPkgInitialize((struct _HAM_CLIENT_CONTEXT *)a2, v10, Heap);
      HampClientPkgInsert((struct _HAM_CLIENT_CONTEXT *)a2, v5);
      v6 = 0;
      *a3 = *((_QWORD *)v5 + 6);
    }
    else
    {
      v6 = -1073741801;
    }
  }
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v5 )
    CemRcObjectDereference(v5);
  return (unsigned int)v6;
}
