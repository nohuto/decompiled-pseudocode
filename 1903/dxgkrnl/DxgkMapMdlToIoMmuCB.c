/*
 * XREFs of DxgkMapMdlToIoMmuCB @ 0x1C003EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C003E14C (-DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRI.c)
 */

__int64 __fastcall DxgkMapMdlToIoMmuCB(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = DxgkAllocateMdlMemoryTracker(a1, *a2, 2, &v4);
  a2[1] = v4;
  return result;
}
