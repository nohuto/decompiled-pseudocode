/*
 * XREFs of DxgkAllocatePagesForMdlCB @ 0x1C00382B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C0037CEC (-DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRI.c)
 */

__int64 __fastcall DxgkAllocatePagesForMdlCB(__int64 a1, PHYSICAL_ADDRESS *a2, __int64 a3)
{
  __int64 CacheType; // rdi
  __int64 v6; // rax
  __int64 result; // rax
  SIZE_T QuadPart; // r9
  PMDL PagesForMdl; // rax
  struct _MDL *v10; // rdi
  __int64 v11; // rax
  int v12; // esi
  PHYSICAL_ADDRESS v13; // [rsp+48h] [rbp+10h] BYREF

  CacheType = (int)a2[4].LowPart;
  if ( (int)CacheType > 2 )
  {
    v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = CacheType;
LABEL_3:
    WdLogEvent5_WdWarning(v6);
    return 2147942487LL;
  }
  QuadPart = a2[3].QuadPart;
  if ( QuadPart > 0xFFFFF000 )
  {
    v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(PHYSICAL_ADDRESS *)(v6 + 24) = a2[3];
    goto LABEL_3;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(
                  *a2,
                  a2[1],
                  a2[2],
                  QuadPart,
                  (MEMORY_CACHING_TYPE)CacheType,
                  a2[4].HighPart | 4u);
  v10 = PagesForMdl;
  if ( !PagesForMdl )
  {
    v11 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v11 + 24) = 1030LL;
    WdLogEvent5_WdLowResource(v11);
    return (unsigned int)-1073741801;
  }
  v12 = DxgkAllocateMdlMemoryTracker(a1, (__int64)PagesForMdl, 1, &v13);
  if ( v12 < 0 )
  {
    MmFreePagesFromMdl(v10);
    return (unsigned int)v12;
  }
  a2[5] = v13;
  result = 0LL;
  a2[6].QuadPart = (LONGLONG)v10;
  return result;
}
