/*
 * XREFs of HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C0020BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0022E24 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  unsigned int v4; // r10d
  int v5; // ecx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 80);
  if ( v2 )
  {
    if ( *(_DWORD *)(v1 + 96) )
    {
      *(_DWORD *)(v1 + 112) = 0;
      v4 = 0;
      *(_DWORD *)(v1 + 144) = 0;
      *(_DWORD *)(v1 + 128) = 0;
      if ( *(_DWORD *)(v2 + 24) )
      {
        do
        {
          v5 = *(_DWORD *)(v2 + 72LL * v4 + 48);
          if ( v5 == 4 )
          {
            *(_DWORD *)(v2 + 72LL * v4 + 48) = 5;
            *(_QWORD *)(*(_QWORD *)(v1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 128))++) = *(_QWORD *)(v2 + 72LL * v4 + 40);
          }
          else if ( v5 == 6 )
          {
            *(_QWORD *)(*(_QWORD *)(v1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 144))++) = *(_QWORD *)(v2 + 72LL * v4 + 40);
          }
          ++v4;
        }
        while ( v4 < *(_DWORD *)(v2 + 24) );
        if ( *(_DWORD *)(v1 + 128) )
        {
          HUBUCX_EnableDisableEndpointsUsingUCXIoctl(v1);
          return 1000LL;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        4u,
        5u,
        0x38u,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
    }
  }
  HUBSM_AddEvent(v1 + 504, 4028);
  return 1000LL;
}
