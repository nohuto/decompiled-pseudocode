/*
 * XREFs of ACPIBusIrpQueryBusInformationEIO @ 0x1C00AA070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusInformationEIO(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  GUID *PoolWithTag; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // rdx
  __int64 v10; // rcx

  LODWORD(v2) = 0;
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4D706341u);
  v6 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag[1].Data1 = 1LL;
    *PoolWithTag = GUID_BUS_TYPE_ISAPNP;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 64);
    v8 = byte_1C006E28A;
    v9 = byte_1C006E28A;
    if ( v7 )
    {
      v2 = *(_QWORD *)(a1 + 64);
      v10 = *(_QWORD *)(v7 + 8);
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = *(char **)(v2 + 560);
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = *(char **)(v2 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      24,
      v2,
      (__int64)v8,
      (__int64)v9);
    LODWORD(v2) = -1073741670;
  }
  a2->IoStatus.Status = v2;
  a2->IoStatus.Information = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v2;
}
