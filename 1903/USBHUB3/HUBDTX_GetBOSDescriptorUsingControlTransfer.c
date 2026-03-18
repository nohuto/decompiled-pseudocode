/*
 * XREFs of HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0027168
 * Callers:
 *     HUBDSM_GettingAlternateBOSDescriptor @ 0x1C001F050 (HUBDSM_GettingAlternateBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002699C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetBOSDescriptorUsingControlTransfer(__int64 a1)
{
  PVOID PoolWithTag; // rax
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(a1 + 1734), 0x64334855u);
  *(_QWORD *)(a1 + 2056) = PoolWithTag;
  if ( PoolWithTag )
  {
    Descriptor = HUBDTX_GetDescriptor(a1, (__int64)PoolWithTag, *(unsigned __int16 *)(a1 + 1734), 15, 0, 0);
    if ( Descriptor >= 0 )
      return;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x34u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
    Descriptor = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v4) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x35u,
      (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
      v4);
  }
  HUBSM_AddEvent(a1 + 504, 4004);
}
