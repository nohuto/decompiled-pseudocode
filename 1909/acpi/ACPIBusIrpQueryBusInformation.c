/*
 * XREFs of ACPIBusIrpQueryBusInformation @ 0x1C00A1240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusInformation(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  GUID *PoolWithTag; // rax
  unsigned __int64 v6; // rdi
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rdx
  __int64 v11; // rcx

  LODWORD(v2) = 0;
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4D706341u);
  v6 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag[1].Data1 = 17LL;
    *PoolWithTag = GUID_BUS_TYPE_ACPI;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 64);
    v9 = byte_1C006FE7D;
    v10 = byte_1C006FE7D;
    if ( v8 )
    {
      v2 = *(_QWORD *)(a1 + 64);
      v11 = *(_QWORD *)(v8 + 8);
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = *(char **)(v2 + 560);
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = *(char **)(v2 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
        24,
        v2,
        (__int64)v9,
        (__int64)v10);
    LODWORD(v2) = -1073741670;
  }
  a2->IoStatus.Status = v2;
  a2->IoStatus.Information = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v2;
}
