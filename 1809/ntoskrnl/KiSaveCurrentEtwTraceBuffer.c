/*
 * XREFs of KiSaveCurrentEtwTraceBuffer @ 0x140292F5C
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     EtwGetProcessorBuffer @ 0x1403127A0 (EtwGetProcessorBuffer.c)
 */

__int64 KiSaveCurrentEtwTraceBuffer()
{
  __int64 result; // rax
  int v1; // edx
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+2Ch] [rbp-Ch]

  result = EtwGetProcessorBuffer(2LL, KeGetCurrentPrcb()->Number, &v5);
  if ( (int)result >= 0 )
  {
    v1 = 0x2000;
    KiCurrentEtwBufferBase = v5;
    KiCurrentEtwBufferOffset = v5 + v6;
    if ( v6 >= 0x2000uLL )
    {
      v2 = v5 + v6 - 0x2000;
    }
    else
    {
      v1 = v6;
      v2 = v5;
    }
    IoAddTriageDumpDataBlock(v2, v1);
    IoAddTriageDumpDataBlock((int)&KiCurrentEtwBufferBase, 8);
    result = IoAddTriageDumpDataBlock((int)&KiCurrentEtwBufferOffset, 8);
  }
  if ( ErrorLogSessionOpened )
  {
    result = EtwGetProcessorBuffer((unsigned __int16)IopErrorLogSession, KeGetCurrentPrcb()->Number, &v5);
    if ( (int)result >= 0 )
    {
      v3 = 4096;
      KiCurrentErrLogBufferBase = v5;
      KiCurrentErrLogBufferOffset = v5 + v6;
      if ( v6 >= 0x1000uLL )
      {
        v4 = v5 + v6 - 4096;
      }
      else
      {
        v3 = v6;
        v4 = v5;
      }
      IoAddTriageDumpDataBlock(v4, v3);
      IoAddTriageDumpDataBlock((int)&KiCurrentErrLogBufferBase, 8);
      return IoAddTriageDumpDataBlock((int)&KiCurrentErrLogBufferOffset, 8);
    }
  }
  return result;
}
