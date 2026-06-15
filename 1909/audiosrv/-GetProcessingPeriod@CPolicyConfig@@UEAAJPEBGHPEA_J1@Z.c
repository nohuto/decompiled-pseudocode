/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18000E580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000E620 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 *a4,
        __int64 *a5)
{
  int ProcessingPeriod; // ebx
  CEndpointCharacteristics *v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  ProcessingPeriod = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                       g_pEndpointCharacteristicsCache,
                       a2,
                       0LL,
                       0LL,
                       &v9);
  if ( ProcessingPeriod < 0
    || (ProcessingPeriod = CEndpointCharacteristics::GetProcessingPeriod(v9, a3, a4, a5), ProcessingPeriod < 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18LL,
        &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids,
        (unsigned int)ProcessingPeriod);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)ProcessingPeriod;
}
