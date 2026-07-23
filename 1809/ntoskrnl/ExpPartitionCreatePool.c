/*
 * XREFs of ExpPartitionCreatePool @ 0x140755B34
 * Callers:
 *     ExAllocatePrivateWorkerPool @ 0x140755B10 (ExAllocatePrivateWorkerPool.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExpPartitionCreatePoolInternal @ 0x140755E54 (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePool(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  bool v6; // zf
  unsigned int v7; // ecx
  unsigned int v8; // esi
  _KNODE *ParentNode; // r14
  __int64 result; // rax
  unsigned __int16 v11; // bp
  __int64 v12; // [rsp+70h] [rbp+8h]
  signed int v13; // [rsp+80h] [rbp+18h]

  do
  {
    v6 = !_BitScanForward(&v7, *(_DWORD *)(a1 + 24));
    v13 = v7;
    if ( v6 )
      return 3221225495LL;
  }
  while ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), v7) );
  v8 = v7;
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( (_UNKNOWN *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                               + 384 * ParentNode->Affinity.Reserved[0]) )
    ParentNode = 0LL;
  result = ExpPartitionCreatePoolInternal(a1, 1, 16, (_DWORD)ParentNode, v7);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    if ( KeNumberNodes )
    {
      v12 = (2 * (ParentNode->Affinity.Reserved[0] & 0x7Fu)) | 1LL;
      do
      {
        if ( v11 != ParentNode->Affinity.Reserved[0] )
        {
          v8 = v13;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v11) + 8LL * v13) = v12;
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v11) + 16LL), 0, 0);
        }
        ++v11;
      }
      while ( v11 < (unsigned __int16)KeNumberNodes );
    }
    *a4 = v8;
    result = 0LL;
    v8 = 8;
  }
  if ( v8 != 8 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), v8);
  return result;
}
