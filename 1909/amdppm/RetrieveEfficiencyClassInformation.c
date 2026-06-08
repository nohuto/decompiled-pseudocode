/*
 * XREFs of RetrieveEfficiencyClassInformation @ 0x1C0032A90
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C00323B0 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00025A4 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     memset @ 0x1C000E300 (memset.c)
 */

__int64 RetrieveEfficiencyClassInformation()
{
  __int64 *v0; // rdi
  UCHAR v1; // r15
  __int64 v2; // r14
  ULONG v3; // ecx
  NTSTATUS ProcessorNumberFromIndex; // ebx
  SIZE_T j; // rdx
  ULONG v6; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *PoolWithTag; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v8; // rsi
  int v9; // eax
  unsigned int i; // ecx
  __int64 v12[4]; // [rsp+20h] [rbp-20h] BYREF
  ULONG Length; // [rsp+70h] [rbp+30h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF

  memset(v12, 0, sizeof(v12));
  qword_1C00139C0 = 0LL;
  InitializeEnumerationContext((__int64)&qword_1C0013428, 32, (__int64)v12);
  ResetEnumerationContext(v12);
  v0 = &qword_1C00139C0;
  if ( (unsigned int)EnumerateNextDevice((__int64)v12, &v15) )
  {
LABEL_15:
    v9 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( !*(_DWORD *)v0 )
        break;
      ++v9;
      v0 = (__int64 *)((char *)v0 + 4);
    }
    dword_1C00139BC = v9;
    return 0;
  }
  v1 = Length;
  while ( 1 )
  {
    v2 = v15;
    if ( (*(_QWORD *)(v15 + 264) & 0x2000000000LL) != 0 )
      break;
LABEL_14:
    if ( (unsigned int)EnumerateNextDevice((__int64)v12, &v15) )
      goto LABEL_15;
  }
  v3 = *(_DWORD *)(v15 + 56);
  ProcNumber = 0;
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v3, &ProcNumber);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    Length = 80;
    for ( j = 80LL; ; j = v6 )
    {
      PoolWithTag = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(PagedPool, j, 0x72637250u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      ProcessorNumberFromIndex = KeQueryLogicalProcessorRelationship(
                                   &ProcNumber,
                                   RelationProcessorCore,
                                   PoolWithTag,
                                   &Length);
      if ( ProcessorNumberFromIndex >= 0 )
        v1 = v8->Processor.Reserved[0];
      ExFreePoolWithTag(v8, 0x72637250u);
      v6 = 2 * Length;
      Length *= 2;
      if ( ProcessorNumberFromIndex != -1073741820 )
        goto LABEL_12;
    }
    ProcessorNumberFromIndex = -1073741670;
  }
LABEL_12:
  if ( ProcessorNumberFromIndex >= 0 )
  {
    *(_BYTE *)(v2 + 368) = v1;
    ++*((_DWORD *)&qword_1C00139C0 + v1);
    goto LABEL_14;
  }
  InitializeEnumerationContext((__int64)&qword_1C0013428, 32, (__int64)v12);
  ResetEnumerationContext(v12);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v12, &v15) )
  {
    if ( (*(_QWORD *)(v15 + 264) & 0x2000000000LL) != 0 )
      *(_BYTE *)(v15 + 368) = 0;
  }
  dword_1C00139BC = 1;
  qword_1C00139C0 = 0LL;
  LODWORD(qword_1C00139C0) = dword_1C0013414;
  return (unsigned int)ProcessorNumberFromIndex;
}
