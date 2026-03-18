/*
 * XREFs of ProcessorGetDeviceIdtAssignment @ 0x1C0091000
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C008FF20 (IrqArbpSetDeviceProperties.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C0090880 (ProcessorpFindIdtEntriesApic.c)
 *     IrqTranslateResources @ 0x1C0090E70 (IrqTranslateResources.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091878 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbGetDeviceIrql @ 0x1C0092974 (IrqArbGetDeviceIrql.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B2690 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B2A60 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B2D30 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorGetDeviceIdtAssignment(PVOID a1, int a2, int a3, _OWORD *a4)
{
  __int64 v4; // rdi
  struct _RTL_RANGE_LIST *v9; // rcx
  PRTL_RANGE v10; // rcx
  _DWORD *UserData; // rax
  __int64 result; // rax
  __int128 v13; // xmm1
  PRTL_RANGE Range; // [rsp+20h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-30h] BYREF

  v4 = 0LL;
  if ( !ProcessorInstanceCount )
    return 3221226021LL;
  while ( 1 )
  {
    v9 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v4);
    if ( v9 )
    {
      if ( a3 )
        ++v9;
      RtlGetFirstRange(v9, &Iterator, &Range);
      v10 = Range;
      if ( Range )
        break;
    }
LABEL_9:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= ProcessorInstanceCount )
      return 3221226021LL;
  }
  while ( 1 )
  {
    UserData = v10->UserData;
    if ( UserData )
    {
      if ( UserData[4] == a2 && (!a1 || v10->Owner == a1) )
        break;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
    v10 = Range;
    if ( !Range )
      goto LABEL_9;
  }
  *a4 = *(_OWORD *)UserData;
  v13 = *((_OWORD *)UserData + 1);
  result = 0LL;
  a4[1] = v13;
  return result;
}
