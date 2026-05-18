/*
 * XREFs of memset_0 @ 0x180005A56
 * Callers:
 *     DllMain @ 0x18000159C (DllMain.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001988 (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001D04 (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001DA4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000246C (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002714 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B10 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180003800 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004490 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x180004980 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     __scrt_fastfail @ 0x1800058E0 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
