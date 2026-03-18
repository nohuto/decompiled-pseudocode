/*
 * XREFs of HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001E260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0026910 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  PVOID PoolWithTag; // rax
  int v3; // r8d
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(v1 + 1732), 0x64334855u);
  *(_QWORD *)(v1 + 2104) = PoolWithTag;
  if ( PoolWithTag )
  {
    MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(
                              v1,
                              0,
                              v3,
                              4,
                              (__int64)PoolWithTag,
                              *(unsigned int *)(v1 + 1732));
    if ( MsOsFeatureDescriptor >= 0 )
      return 1000LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x3Fu,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
    MsOsFeatureDescriptor = -1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x40u,
      (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
      v6);
  }
  HUBSM_AddEvent(v1 + 504, 4004);
  return 1000LL;
}
