/*
 * XREFs of KiSaveCurrentEtwTraceBuffer @ 0x1402A9838
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     EtwGetProcessorBuffer @ 0x1403307E8 (EtwGetProcessorBuffer.c)
 */

char KiSaveCurrentEtwTraceBuffer()
{
  int ProcessorBuffer; // eax
  __int64 v1; // rdx
  ULONG v2; // ecx
  __int64 v3; // rdx
  ULONG v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v6 = 0LL;
  v7 = 0LL;
  ProcessorBuffer = EtwGetProcessorBuffer(2LL, KeGetCurrentPrcb()->Number, &v6);
  if ( ProcessorBuffer >= 0 )
  {
    v1 = 0x2000LL;
    *(_QWORD *)&KiCurrentEtwBufferBase = v6;
    *(_QWORD *)&KiCurrentEtwBufferOffset = v6 + HIDWORD(v7);
    if ( HIDWORD(v7) >= 0x2000uLL )
    {
      v2 = v6 + HIDWORD(v7) - 0x2000;
    }
    else
    {
      v1 = HIDWORD(v7);
      v2 = v6;
    }
    IoAddTriageDumpDataBlock(v2, (PVOID)v1);
    IoAddTriageDumpDataBlock((ULONG)&KiCurrentEtwBufferBase, (PVOID)8);
    LOBYTE(ProcessorBuffer) = IoAddTriageDumpDataBlock((ULONG)&KiCurrentEtwBufferOffset, (PVOID)8);
  }
  if ( ErrorLogSessionOpened )
  {
    ProcessorBuffer = EtwGetProcessorBuffer((unsigned __int16)IopErrorLogSession, KeGetCurrentPrcb()->Number, &v6);
    if ( ProcessorBuffer >= 0 )
    {
      v3 = 4096LL;
      *(_QWORD *)&KiCurrentErrLogBufferBase = v6;
      *(_QWORD *)&KiCurrentErrLogBufferOffset = v6 + HIDWORD(v7);
      if ( HIDWORD(v7) >= 0x1000uLL )
      {
        v4 = v6 + HIDWORD(v7) - 4096;
      }
      else
      {
        v3 = HIDWORD(v7);
        v4 = v6;
      }
      IoAddTriageDumpDataBlock(v4, (PVOID)v3);
      IoAddTriageDumpDataBlock((ULONG)&KiCurrentErrLogBufferBase, (PVOID)8);
      LOBYTE(ProcessorBuffer) = IoAddTriageDumpDataBlock((ULONG)&KiCurrentErrLogBufferOffset, (PVOID)8);
    }
  }
  return ProcessorBuffer;
}
