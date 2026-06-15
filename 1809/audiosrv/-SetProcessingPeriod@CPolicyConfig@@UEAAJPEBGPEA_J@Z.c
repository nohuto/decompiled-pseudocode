/*
 * XREFs of ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x1800D59B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800D5A40 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriod(CPolicyConfig *this, const unsigned __int16 *a2, __int64 *a3)
{
  int v4; // ebx
  struct CEndpointCharacteristics *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v6);
  if ( v4 < 0 || (v4 = CPolicyConfig::SetProcessingPeriodInternal(v6, a3), v4 < 0) )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriod", 3750, v4);
  if ( v6 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
