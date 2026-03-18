/*
 * XREFs of ProcessorIdtEntryToGsiv @ 0x1C00A13E4
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C002DA90 (IrqLibpGetVectorInput.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6070 (IrqLibFreeMessageTarget.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ProcessorIdtEntryToGsiv(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v7; // bl
  __int64 v8; // r8
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v10; // rcx
  __int64 result; // rax
  PRTL_RANGE Range; // [rsp+20h] [rbp-30h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp+28h] BYREF
  struct _PROCESSOR_NUMBER v15; // [rsp+80h] [rbp+30h]

  memset(&Iterator, 0, sizeof(Iterator));
  v15 = 0;
  v7 = 0;
  v8 = *(_QWORD *)a2;
  v15.Group = *(_WORD *)(a2 + 8);
  while ( v8 )
  {
    if ( _bittest64(&v8, v7) )
    {
      v15.Number = v7;
      ProcNumber = v15;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
        v10 = 0LL;
      else
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
      if ( v10 )
      {
        RtlGetFirstRange(v10, &Iterator, &Range);
        while ( Range )
        {
          if ( LODWORD(Range->Start) == a1 )
          {
            result = 0LL;
            *a4 = *((_DWORD *)Range->UserData + 4);
            return result;
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
        }
      }
    }
    v8 = *(_QWORD *)a2 & ~(1LL << v7);
    *(_QWORD *)a2 = v8;
    ++v7;
  }
  return 3221226021LL;
}
