/*
 * XREFs of NdisAllocateRefCount @ 0x1C00C42B0
 * Callers:
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C0016028 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisAllocateOpenBlock @ 0x1C00C3978 (ndisAllocateOpenBlock.c)
 *     ndisInitializeRef @ 0x1C00C4264 (ndisInitializeRef.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00C46B8 (ndisInitializeZeroBasedRef.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00CB1EC (ndisMInitializeMiniportBlock.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall NdisAllocateRefCount(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // bl
  char v4; // di
  unsigned int v5; // eax
  unsigned int v6; // r14d
  struct _NDIS_REFCOUNT_BLOCK *PoolWithTag; // rax
  struct _NDIS_REFCOUNT_BLOCK *v8; // rsi

  v2 = a2;
  if ( !ndisDebugLoggingMode )
    return 2LL;
  v4 = 1;
  if ( ndisDebugLoggingMode == 2 )
    v2 = a2 | 1;
  if ( (v2 & 1) != 0 )
  {
    v5 = (a1 << 6) + 8;
  }
  else
  {
    v5 = (((((unsigned __int64)a1 + 7) >> 3) + 3) & 0xFFFFFFFC) + 16;
    v4 = 0;
  }
  v6 = v5;
  PoolWithTag = (struct _NDIS_REFCOUNT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7872444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3LL;
  memset(PoolWithTag, 0, v6);
  v8->Flags = v2;
  v8->Type = v4;
  v8->NumRefTags = a1;
  return (__int64)ndisRefCountHandleFromRefCountBlock(v8);
}
