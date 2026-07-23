/*
 * XREFs of PopHiberPeekRangeTable @ 0x14057DD74
 * Callers:
 *     ConsumerPeekAndConsumeBuffer @ 0x14056AF90 (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     PopReadProducerConsumerBuffer @ 0x14057E11C (PopReadProducerConsumerBuffer.c)
 */

__int64 __fastcall PopHiberPeekRangeTable(int a1, int a2, __int64 a3)
{
  _DWORD *ProducerConsumerBuffer; // rax
  char v5; // [rsp+50h] [rbp+18h] BYREF

  ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(
                                       a1,
                                       a2,
                                       (unsigned int)&v5,
                                       (_DWORD)qword_140418958,
                                       a3,
                                       0);
  return ((*ProducerConsumerBuffer >> 8) & 0x3FFFFF) + 8 * (unsigned int)(unsigned __int8)*ProducerConsumerBuffer + 4;
}
