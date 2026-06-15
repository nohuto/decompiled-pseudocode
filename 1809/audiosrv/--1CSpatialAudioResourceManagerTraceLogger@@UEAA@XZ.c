/*
 * XREFs of ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x180116680
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x180112DBC (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x1801167C0 (--_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x180118FC8 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x180116614 (--1-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(
        CSpatialAudioResourceManagerTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialAudioResourceManagerTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>((__int64)this + 72);
  *((_QWORD *)this + 1) = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
}
