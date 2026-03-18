/*
 * XREFs of HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001C750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0024584 (HUBDTX_GetMsOsFeatureDescriptor.c)
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
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Eu,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids);
    MsOsFeatureDescriptor = -1073741823;
LABEL_4:
    LODWORD(v6) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Fu,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v6);
    HUBSM_AddEvent(v1 + 504, 4004);
    return 1000LL;
  }
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(
                            v1,
                            0,
                            v3,
                            4,
                            (__int64)PoolWithTag,
                            *(unsigned int *)(v1 + 1732));
  if ( MsOsFeatureDescriptor < 0 )
    goto LABEL_4;
  return 1000LL;
}
