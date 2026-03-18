/*
 * XREFs of ACPILoadProcessDSDT @ 0x1C00BDFB4
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00BE078 (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C001DD80 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F42C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C00BDF00 (ACPILoadAddDynamicDataBlockTable.c)
 */

__int64 ACPILoadProcessDSDT()
{
  _OWORD *v0; // rbx
  _OWORD *PoolWithTag; // rax
  __int64 result; // rax
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v0 = (_OWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763908LL, 0LL, 0LL);
  if ( v0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *v0;
      PoolWithTag[1] = v0[1];
      *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)v0 + 8);
      *((_DWORD *)PoolWithTag + 1) = 36;
      if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
      {
        v0 = P;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x15u,
            0xCu,
            (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
            P);
      }
      else
      {
        ExFreePoolWithTag(P, 0);
      }
      result = ACPILoadAddDynamicDataBlockTable((__int64)v0, 1);
      if ( (int)result >= 0 )
        *((_QWORD *)AcpiInformation + 3) = v0;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xBu,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    return 3222536217LL;
  }
  return result;
}
