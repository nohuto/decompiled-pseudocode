/*
 * XREFs of ProcessorDeleteDeviceIdtAssignment @ 0x1C001E374
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0098B50 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009A324 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B5DC0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B6070 (IrqLibFreeMessageTarget.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B67C0 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ProcessorDeleteDeviceIdtAssignment(PVOID Owner, int a2, unsigned int a3, int a4)
{
  int v4; // r15d
  ULONGLONG v5; // r12
  int v7; // ebx
  char v8; // si
  char v9; // r14
  __int64 v10; // rdi
  struct _RTL_RANGE_LIST *v11; // rbp
  PRTL_RANGE v12; // rax
  _DWORD *UserData; // rbx
  unsigned int v14; // r15d
  __int64 v15; // rdx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-68h] BYREF
  PRTL_RANGE Range; // [rsp+28h] [rbp-60h] BYREF
  _RANGE_LIST_ITERATOR Iterator; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v5 = a3;
  v7 = a4;
  memset(&Iterator, 0, sizeof(Iterator));
  ProcNumber = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( !ProcessorInstanceCount )
    return 3221226021LL;
  do
  {
    v11 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v10);
    if ( v11 )
    {
      if ( v7 )
        ++v11;
      RtlGetFirstRange(v11, &Iterator, &Range);
      v12 = Range;
      if ( Range )
      {
        while ( 1 )
        {
          if ( v12->Owner == Owner && LODWORD(v12->Start) == (_DWORD)v5 )
          {
            UserData = v12->UserData;
            if ( UserData )
            {
              if ( UserData[4] == v4 )
                break;
            }
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
          v12 = Range;
          if ( !Range )
            goto LABEL_15;
        }
        v14 = UserData[6] - 1 + UserData[5];
        KeGetProcessorNumberFromIndex(v10, &ProcNumber);
        v15 = *(_QWORD *)UserData & ~(1LL << ProcNumber.Number);
        *(_QWORD *)UserData = v15;
        if ( !v15 )
        {
          ExFreePoolWithTag(UserData, 0);
          v8 = 1;
        }
        v9 = 1;
        Range->UserData = 0LL;
        RtlDeleteRange(v11, v5, v14, Owner);
        v4 = a2;
LABEL_15:
        v7 = a4;
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v10 < ProcessorInstanceCount );
  if ( v9 )
    return v8 == 0 ? 0xC0000001 : 0;
  else
    return 3221226021LL;
}
