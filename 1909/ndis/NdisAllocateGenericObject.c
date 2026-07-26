/*
 * XREFs of NdisAllocateGenericObject @ 0x1C003C040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     WPP_RECORDER_SF_qLLq @ 0x1C003C168 (WPP_RECORDER_SF_qLLq_ea_1C003C168.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  struct _NDIS_GENERIC_OBJECT *PoolWithTag; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct _NDIS_GENERIC_OBJECT *v10; // rbx
  int v12; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( traceInited && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Tag,
      0x15u,
      0x92u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)DriverObject,
      Tag);
  if ( Size >= 0xFFE0u )
    return 0LL;
  PoolWithTag = (struct _NDIS_GENERIC_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(Size + 32), Tag);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size + 4LL);
    v10->CallersCaller = 0LL;
    v10->Caller = retaddr;
    *(_WORD *)&v10->Header.Type = 257;
    v10->Header.Size = Size + 32;
    v10->DriverObject = DriverObject;
  }
  if ( traceInited )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLLq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        v8,
        v9,
        v12,
        (char)DriverObject,
        Tag,
        Size,
        (char)v10);
  }
  return v10;
}
