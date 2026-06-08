/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C0030EDC
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0030844 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0003C84 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0003CB4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0003CD0 (EnumerateNextDevice.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 *v0; // rdi
  UCHAR v1; // r15
  __int64 v2; // r14
  NTSTATUS ProcessorNumberFromIndex; // ebx
  SIZE_T j; // rdx
  ULONG v5; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *PoolWithTag; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v7; // rsi
  int v8; // eax
  unsigned int i; // ecx
  __int64 v11[4]; // [rsp+20h] [rbp-20h] BYREF
  ULONG Length; // [rsp+70h] [rbp+30h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF

  qword_1C0011980 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v11);
  ResetEnumerationContext(v11);
  v0 = &qword_1C0011980;
  if ( (unsigned int)EnumerateNextDevice((__int64)v11, &v14) )
  {
LABEL_15:
    v8 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( !*(_DWORD *)v0 )
        break;
      ++v8;
      v0 = (__int64 *)((char *)v0 + 4);
    }
    dword_1C001197C = v8;
    return 0;
  }
  v1 = Length;
  while ( 1 )
  {
    v2 = v14;
    if ( (*(_QWORD *)(v14 + 264) & 0x2000000000LL) != 0 )
      break;
LABEL_14:
    if ( (unsigned int)EnumerateNextDevice((__int64)v11, &v14) )
      goto LABEL_15;
  }
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v14 + 56), &ProcNumber);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    Length = 80;
    for ( j = 80LL; ; j = v5 )
    {
      PoolWithTag = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(PagedPool, j, 0x72637250u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      ProcessorNumberFromIndex = KeQueryLogicalProcessorRelationship(
                                   &ProcNumber,
                                   RelationProcessorCore,
                                   PoolWithTag,
                                   &Length);
      if ( ProcessorNumberFromIndex >= 0 )
        v1 = v7->Processor.Reserved[0];
      ExFreePoolWithTag(v7, 0x72637250u);
      v5 = 2 * Length;
      Length *= 2;
      if ( ProcessorNumberFromIndex != -1073741820 )
        goto LABEL_12;
    }
    ProcessorNumberFromIndex = -1073741670;
  }
LABEL_12:
  if ( ProcessorNumberFromIndex >= 0 )
  {
    *(_BYTE *)(v2 + 352) = v1;
    ++*((_DWORD *)&qword_1C0011980 + v1);
    goto LABEL_14;
  }
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v11);
  ResetEnumerationContext(v11);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v11, &v14) )
  {
    if ( (*(_QWORD *)(v14 + 264) & 0x2000000000LL) != 0 )
      *(_BYTE *)(v14 + 352) = 0;
  }
  dword_1C001197C = 1;
  qword_1C0011980 = 0LL;
  LODWORD(qword_1C0011980) = dword_1C00113E4;
  return (unsigned int)ProcessorNumberFromIndex;
}
