/*
 * XREFs of ExpCreateWorkerThread @ 0x14066BA44
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionCreatePoolInternal @ 0x140755E54 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExpPartitionCreateSystemThread @ 0x14066BB14 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpCreateWorkerThread(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // r8d
  signed __int32 v7; // ett
  int SystemThread; // edi
  __int64 v9; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h]

  _m_prefetchw(a1 + 89);
  v5 = *((_DWORD *)a1 + 178);
  do
  {
    v6 = (v5 + 1) | 0x4000;
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, v6, v5);
  }
  while ( v7 != v5 );
  SystemThread = ExpPartitionCreateSystemThread(a1[86], a1[87], v6, a4);
  if ( SystemThread < 0 )
  {
    _m_prefetchw(a1 + 89);
    v11 = *((_DWORD *)a1 + 178);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v11 & 0x3FFF) - 1, v11);
    }
    while ( v12 != v11 );
  }
  else
  {
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8LL, v9);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
