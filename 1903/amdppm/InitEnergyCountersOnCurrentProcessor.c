/*
 * XREFs of InitEnergyCountersOnCurrentProcessor @ 0x1C001C010
 * Callers:
 *     <none>
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0002520 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000DF80 (GetCpuIdInfo.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     IsEnergyMsrSupported @ 0x1C001C214 (IsEnergyMsrSupported.c)
 */

__int64 InitEnergyCountersOnCurrentProcessor()
{
  unsigned int Number; // r14d
  LARGE_INTEGER *v1; // rdi
  ULONG v2; // esi
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned __int64 v4; // rax
  __int64 DevExtFromIndex; // rax
  ULONG v6; // eax
  bool v7; // si
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 *(__fastcall *v10)(int, __int64, __int64, __int64, unsigned __int64 *); // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+28h] [rbp-39h] BYREF
  ULONG Length[3]; // [rsp+2Ch] [rbp-35h] BYREF
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v16; // [rsp+98h] [rbp+37h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+3Fh]

  Number = KeGetPcr()->Prcb.Number;
  v1 = *(LARGE_INTEGER **)(GetDevExtFromIndex(Number) + 360);
  v15[0] = 0LL;
  v15[1] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  GetCpuIdInfo(0x80000000, v15);
  if ( LODWORD(v15[0]) >= 7
    && (GetCpuIdInfo(0x80000007, &v16), (v17 & 0x400000000000LL) != 0)
    && (unsigned __int8)IsEnergyMsrSupported() )
  {
    ProcNumber = 0;
    v2 = KeGetPcr()->Prcb.Number;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v2, &ProcNumber);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      Length[0] = 80;
      memset(&Information, 0, sizeof(Information));
      ProcessorNumberFromIndex = KeQueryLogicalProcessorRelationship(
                                   &ProcNumber,
                                   RelationProcessorCore,
                                   &Information,
                                   Length);
      if ( ProcessorNumberFromIndex >= 0 )
        *(_OWORD *)(GetDevExtFromIndex(v2) + 1200) = *(_OWORD *)&Information.Group.GroupInfo[0].MaximumProcessorCount;
    }
    if ( ProcessorNumberFromIndex >= 0 )
    {
      v4 = __readmsr(0xC001029A);
      v1->LowPart = 1;
      v1[2].QuadPart = (unsigned int)v4;
      v1[4].QuadPart = (unsigned int)v4;
      v1[3].QuadPart = (unsigned int)v4;
      DevExtFromIndex = GetDevExtFromIndex(KeGetPcr()->Prcb.Number);
      v6 = RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(DevExtFromIndex + 1200));
      v7 = v6 > 1;
      if ( v6 > 1 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v1[14] = PerformanceCounter;
        v1[16] = PerformanceCounter;
        v1[15] = PerformanceCounter;
      }
      if ( !Number )
      {
        v9 = __readmsr(0xC0010299);
        WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = ((unsigned int)v9 >> 8) & 0x1F;
        if ( v7 )
        {
          qword_1C0013AC0[0] = (__int64)SnapEnergyCountersAndTimestamp;
          v10 = ComputeHyperThreadedProcessorEnergyUsingMsr;
        }
        else
        {
          qword_1C0013AC0[0] = (__int64)SnapEnergyCounters;
          v10 = ComputeProcessorEnergyUsingMsr;
        }
        qword_1C0013AB8[0] = (__int64)v10;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
