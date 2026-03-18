/*
 * XREFs of ProcessorCopyData @ 0x1C0091D50
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008FD00 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1C0091240 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C0091B50 (IrqArbBootAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0094260 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     ProcessorpClearData @ 0x1C0092090 (ProcessorpClearData.c)
 */

__int64 __fastcall ProcessorCopyData(__int64 a1)
{
  unsigned int v1; // r12d
  int v2; // eax
  unsigned int v3; // ebx
  struct _RTL_RANGE_LIST *v4; // rcx
  struct _RTL_RANGE_LIST *v5; // rdx
  NTSTATUS v6; // edi
  unsigned int v7; // ebx
  struct _RTL_RANGE_LIST *v8; // rcx
  PRTL_RANGE i; // rax
  ULONG v10; // r14d
  struct _RTL_RANGE_LIST *v11; // rdi
  struct _RTL_RANGE_LIST *v12; // rcx
  PRTL_RANGE j; // rax
  _WORD *UserData; // rbx
  __int64 v15; // rdi
  __int64 *PoolWithTag; // rax
  _DWORD *v18; // rbx
  unsigned __int8 v19; // si
  _OWORD *v20; // rcx
  __int64 v21; // rdi
  PVOID Owner; // r15
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v24; // rcx
  PRTL_RANGE v25; // rcx
  unsigned __int8 v26; // al
  PRTL_RANGE Range; // [rsp+20h] [rbp-59h] BYREF
  PRTL_RANGE v28; // [rsp+28h] [rbp-51h] BYREF
  PRTL_RANGE v29; // [rsp+30h] [rbp-49h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+38h] [rbp-41h] BYREF
  struct _RANGE_LIST_ITERATOR v31; // [rsp+58h] [rbp-21h] BYREF
  struct _RANGE_LIST_ITERATOR v32; // [rsp+78h] [rbp-1h] BYREF
  struct _PROCESSOR_NUMBER v33; // [rsp+E8h] [rbp+6Fh]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+F0h] [rbp+77h] BYREF
  struct _PROCESSOR_NUMBER v35; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = a1;
  ProcessorpClearData(a1);
  v2 = ProcessorInstanceCount;
  v3 = 0;
  if ( ProcessorInstanceCount )
  {
    while ( 1 )
    {
      v4 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v3);
      if ( v4 )
      {
        v5 = v4 + 1;
        if ( v1 )
        {
          v5 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v3);
          ++v4;
        }
        v6 = RtlCopyRangeList(v4, v5);
        if ( v6 < 0 )
          break;
      }
      v2 = ProcessorInstanceCount;
      if ( ++v3 >= ProcessorInstanceCount )
        goto LABEL_7;
    }
LABEL_45:
    ProcessorpClearData(v1);
    return (unsigned int)v6;
  }
  else
  {
LABEL_7:
    v7 = 0;
    if ( v2 )
    {
      do
      {
        v8 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v7);
        if ( v8 )
        {
          if ( v1 )
            ++v8;
          RtlGetFirstRange(v8, &Iterator, &Range);
          for ( i = Range; Range; i = Range )
          {
            i->UserData = 0LL;
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        v2 = ProcessorInstanceCount;
        ++v7;
      }
      while ( v7 < ProcessorInstanceCount );
    }
    v10 = 0;
    if ( v2 )
    {
      do
      {
        v11 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v10);
        if ( v11 )
        {
          v12 = v11 + 1;
          if ( v1 )
            v12 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v10);
          RtlGetFirstRange(v12, &v32, &v28);
          if ( v1 )
            ++v11;
          RtlGetFirstRange(v11, &Iterator, &Range);
          for ( j = v28; v28; j = v28 )
          {
            UserData = j->UserData;
            if ( UserData )
            {
              v15 = *(_QWORD *)UserData;
              KeGetProcessorNumberFromIndex(v10, &ProcNumber);
              if ( UserData[4] == ProcNumber.Group && ((1LL << ProcNumber.Number) & (v15 ^ (v15 - 1)) & v15) != 0 )
              {
                PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x49706341u);
                v18 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v6 = -1073741670;
                  goto LABEL_45;
                }
                v19 = 0;
                v33.Reserved = 0;
                v20 = v28->UserData;
                *(_OWORD *)PoolWithTag = *v20;
                *((_OWORD *)PoolWithTag + 1) = v20[1];
                v21 = *PoolWithTag;
                Owner = v28->Owner;
                for ( v33.Group = *((_WORD *)PoolWithTag + 4); v21; v21 &= ~(1LL << v26) )
                {
                  if ( _bittest64(&v21, v19) )
                  {
                    v33.Number = v19;
                    v35 = v33;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&v35);
                    if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
                      v24 = 0LL;
                    else
                      v24 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                    if ( v1 )
                      ++v24;
                    RtlGetFirstRange(v24, &v31, &v29);
                    v25 = v29;
                    if ( v29 )
                    {
                      while ( LODWORD(v25->Start) != v18[5] || v25->Owner != Owner )
                      {
                        RtlGetNextRange(&v31, &v29, 1u);
                        v25 = v29;
                        if ( !v29 )
                          goto LABEL_41;
                      }
                      v25->UserData = v18;
                    }
                  }
LABEL_41:
                  v26 = v19++;
                }
              }
            }
            RtlGetNextRange(&v32, &v28, 1u);
            RtlGetNextRange(&Iterator, &Range, 1u);
          }
        }
        ++v10;
      }
      while ( v10 < ProcessorInstanceCount );
    }
    return 0LL;
  }
}
