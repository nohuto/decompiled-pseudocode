/*
 * XREFs of HUBPDO_RecordFailure @ 0x1C0014244
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 */

__int64 __fastcall HUBPDO_RecordFailure(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int *v4; // r15
  unsigned __int16 v5; // r9
  SIZE_T v6; // r14
  PVOID PoolWithTag; // rax

  v2 = 0;
  v4 = *(unsigned int **)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v5 = 14;
LABEL_4:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v5,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v5 = 15;
    goto LABEL_4;
  }
  v6 = *v4;
  if ( (unsigned int)v6 > 0x1000 )
  {
    v6 = 4096LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x10u,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
  }
  if ( (unsigned int)v6 < 0x14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        2u,
        5u,
        0x11u,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        v6,
        20);
    return (unsigned int)-1073741789;
  }
LABEL_16:
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x64334855u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v4, v6);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1424LL) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 12LL);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        2u,
        5u,
        0x12u,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
    return (unsigned int)-1073741670;
  }
  return v2;
}
