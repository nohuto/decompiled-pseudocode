/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1800016DC
 * Callers:
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x18002A410 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x18002A500 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18002AF80 (--_G-$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z.c)
 *     ??_ECThreadPool@@UEAAPEAXI@Z @ 0x18002AFB0 (--_ECThreadPool@@UEAAPEAXI@Z.c)
 *     GetAssignedAccessTypeForUser @ 0x1800329CC (GetAssignedAccessTypeForUser.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180032DF4 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180032EA4 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180032F54 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NPEBG@Z @ 0x18003301C (-DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NP.c)
 *     ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180033170 (-DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ.c)
 *     wistd::__function::__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl(unsigned_short___unsigned___int64_unsigned___int64__)_::_scalar_deleting_destructor_ @ 0x180033370 (wistd--__function--__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl(unsigned_short_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180034AD0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
