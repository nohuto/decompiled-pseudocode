/*
 * XREFs of ?Log@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x140059B80
 * Callers:
 *     ??1?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x14005954C (--1-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger.c)
 *     ?Log@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x140059C10 (-Log@-$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpoin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x14005929C (--0-$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::Log(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  CSAutoLock<1>::CSAutoLock<1>(&lpCriticalSection, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
}
