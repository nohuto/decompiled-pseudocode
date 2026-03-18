/*
 * XREFs of ProcessorpClearData @ 0x1C0092090
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008FD00 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1C0091240 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C0091B50 (IrqArbBootAllocation.c)
 *     ProcessorCopyData @ 0x1C0091D50 (ProcessorCopyData.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B32A8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

void __fastcall ProcessorpClearData(int a1)
{
  ULONG i; // edi
  struct _RTL_RANGE_LIST *v3; // rsi
  PRTL_RANGE j; // rax
  _QWORD *UserData; // rbx
  __int64 v6; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-38h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+18h] BYREF

  for ( i = 0; i < ProcessorInstanceCount; ++i )
  {
    v3 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v3 )
    {
      if ( a1 )
        ++v3;
      RtlGetFirstRange(v3, &Iterator, &Range);
      for ( j = Range; Range; j = Range )
      {
        UserData = j->UserData;
        if ( UserData )
        {
          KeGetProcessorNumberFromIndex(i, &ProcNumber);
          v6 = *UserData & ~(1LL << ProcNumber.Number);
          *UserData = v6;
          if ( !v6 )
            ExFreePoolWithTag(UserData, 0);
          Range->UserData = 0LL;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      RtlFreeRangeList(v3);
    }
  }
}
