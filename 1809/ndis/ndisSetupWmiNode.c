/*
 * XREFs of ndisSetupWmiNode @ 0x1C00172D4
 * Callers:
 *     ndisWriteWmiStatusIndication @ 0x1C0019904 (ndisWriteWmiStatusIndication.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00B8B70 (ndisNotifyDevicePowerStateChange.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00BEB5C (ndisNotifyWmiBindUnbind.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCoDeleteVc @ 0x1C011CD50 (NdisCoDeleteVc.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

_QWORD *__fastcall ndisSetupWmiNode(__int64 a1, const void **a2, unsigned int a3, __int128 *a4, _QWORD *a5)
{
  unsigned int v6; // eax
  unsigned int v8; // r10d
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  char *PoolWithTag; // rax
  char *v14; // rbx
  ULONG v15; // eax
  __int128 v16; // xmm0
  _QWORD *result; // rax

  v6 = (*(unsigned __int16 *)a2 + 9) & 0xFFFFFFF8;
  v8 = v6 + a3 + 64;
  if ( v8 < 0x40 || v8 < v6 || v8 < a3 )
  {
    v14 = 0LL;
  }
  else
  {
    v11 = v6 + 64;
    v12 = v6 + 64 + a3;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x3377444Eu);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v12);
      *(_DWORD *)v14 = v12;
      v15 = IoWMIDeviceObjectToProviderId(*(PDEVICE_OBJECT *)(a1 + 3856));
      *((_DWORD *)v14 + 2) = 1;
      *((_DWORD *)v14 + 1) = v15;
      *((_QWORD *)v14 + 2) = MEMORY[0xFFFFF78000000014];
      v16 = *a4;
      *((_DWORD *)v14 + 11) = 10;
      *((_DWORD *)v14 + 12) = 64;
      *(_OWORD *)(v14 + 24) = v16;
      *((_DWORD *)v14 + 14) = v11;
      *((_DWORD *)v14 + 15) = a3;
      *((_WORD *)v14 + 32) = *(_WORD *)a2;
      memmove(v14 + 66, a2[1], *(unsigned __int16 *)a2);
    }
  }
  result = a5;
  *a5 = v14;
  return result;
}
