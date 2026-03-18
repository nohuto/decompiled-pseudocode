/*
 * XREFs of ?DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C003E14C
 * Callers:
 *     DxgkAllocatePagesForMdlCB @ 0x1C003E710 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkMapMdlToIoMmuCB @ 0x1C003EBE0 (DxgkMapMdlToIoMmuCB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiAddMemoryTracker @ 0x1C0050584 (DpiAddMemoryTracker.c)
 */

__int64 __fastcall DxgkAllocateMdlMemoryTracker(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  __int64 result; // rax

  v8 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  v13 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[3] = a2;
    *((_DWORD *)v8 + 4) = a3;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v15 = DpiAddMemoryTracker(a1, v13);
    if ( v15 < 0 )
    {
      ExFreePoolWithTag(v13, 0);
      v13 = 0LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = 955LL;
    WdLogEvent5_WdLowResource(v14);
    v15 = -1073741801;
  }
  result = (unsigned int)v15;
  *a4 = v13;
  return result;
}
