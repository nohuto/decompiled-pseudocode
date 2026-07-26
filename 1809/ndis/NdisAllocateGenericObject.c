/*
 * XREFs of NdisAllocateGenericObject @ 0x1C0009A30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qLLq @ 0x1C00618A4 (WPP_SF_qLLq_ea_1C00618A4.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  struct _NDIS_GENERIC_OBJECT *PoolWithTag; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  struct _NDIS_GENERIC_OBJECT *v9; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)byte_1C00A0264 >= 4u && traceInited )
    WPP_SF_qdD(148LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, DriverObject, Tag, Size);
  if ( Size >= 0xFFE0u )
    return 0LL;
  PoolWithTag = (struct _NDIS_GENERIC_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(Size + 32), Tag);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size + 4LL);
    v8 = retaddr;
    v9->CallersCaller = 0LL;
    v9->Caller = retaddr;
    *(_WORD *)&v9->Header.Type = 257;
    v9->Header.Size = Size + 32;
    v9->DriverObject = DriverObject;
  }
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
  {
    if ( traceInited )
      WPP_SF_qLLq(v8, v7, DriverObject, Tag, Size, v9);
  }
  return v9;
}
