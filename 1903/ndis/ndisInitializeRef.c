/*
 * XREFs of ndisInitializeRef @ 0x1C010372C
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C00373A0 (NdisFRegisterFilterDriver.c)
 *     NdisRegisterProtocolDriver @ 0x1C0037860 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C0092F20 (NdisRegisterProtocol.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0139034 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C00252F0 (NdisAllocateRefCount.c)
 */

__int64 __fastcall ndisInitializeRef(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)a1);
  *(_DWORD *)(a1 + 8) = 1;
  result = NdisAllocateRefCount(a2, 2);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
