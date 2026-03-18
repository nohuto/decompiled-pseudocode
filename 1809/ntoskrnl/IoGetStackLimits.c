/*
 * XREFs of IoGetStackLimits @ 0x1400CAAD0
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140318078 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070DC5C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14074BB8C (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x140900520 (_RegRtlCopyTreeInternal.c)
 *     ViDeadlockCheckStackLimits @ 0x14093D0B4 (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400CAB00 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
