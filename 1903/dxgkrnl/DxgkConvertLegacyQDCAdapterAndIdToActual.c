/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00F4750
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00E7750 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C013ED20 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0148E40 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003708 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0007644 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C013EB78 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0148D00 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0243640 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        __int64 a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int v6; // esi
  DXGADAPTERSOURCEHASH *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  int AdapterAndSourceForHash; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int HashBitMask; // eax
  struct _LUID v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF
  struct _LUID v19; // [rsp+80h] [rbp+18h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v6 = a2;
  v8 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 1016);
  if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8) & v6) == 0 )
    return 0LL;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(*a1);
  v10 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v18 )
    return 0LL;
  v19 = 0LL;
  v11 = v6 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v8);
  AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v8, v11, &v19, &v18);
  if ( AdapterAndSourceForHash < 0 )
  {
    v17 = WdLogNewEntry5_WdTrace(v14, v13);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = v10;
    return 0LL;
  }
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
  v16 = v19;
  result = DxgkIsVirtualizationDisabledForTarget(v19, v6 & ~HashBitMask, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v18 )
    {
      *a3 = v16;
      *a4 = v6 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
    }
    return 0LL;
  }
  return result;
}
