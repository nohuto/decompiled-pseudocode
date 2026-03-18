/*
 * XREFs of ACPILoadProcessFACS @ 0x1C00BA7D4
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00BACDC (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F2A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPILoadProcessFACS()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v4; // [rsp+28h] [rbp-10h]

  v0 = 0;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  v2 = v1;
  if ( !v1 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0xDu,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    return (unsigned int)-1072431079;
  }
  if ( *(_DWORD *)(v1 + 4) != 64 )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0xEu,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
      v1);
    return (unsigned int)-1072431079;
  }
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    6u,
    0xFu,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
    v1);
  *((_QWORD *)AcpiInformation + 2) = v2;
  *((_QWORD *)AcpiInformation + 5) = v2 + 16;
  LODWORD(v4) = *(_DWORD *)(v2 + 16);
  WPP_RECORDER_SF_L(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x10u,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
    v4);
  return v0;
}
