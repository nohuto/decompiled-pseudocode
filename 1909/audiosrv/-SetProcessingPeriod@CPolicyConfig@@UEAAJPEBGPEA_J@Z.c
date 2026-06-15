/*
 * XREFs of ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x1800E0A90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800082C8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriod(CPolicyConfig *this, const unsigned __int16 *a2, __int64 *a3)
{
  int v4; // ebx
  CEndpointCharacteristics *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v6);
  if ( v4 < 0 || (v4 = CEndpointCharacteristics::SetProcessingPeriod(v6, a3), v4 < 0) )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriod", 2226, v4);
  if ( v6 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
