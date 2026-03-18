/*
 * XREFs of ExpCreateWorkerThread @ 0x1406B34F4
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140766FB0 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionCreatePoolInternal @ 0x14077AC24 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ExpPartitionCreateSystemThread @ 0x1406B35C4 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpCreateWorkerThread(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // r8d
  signed __int32 v7; // ett
  int SystemThread; // edi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
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
    v10 = *((_DWORD *)a1 + 178);
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v10 & 0x3FFF) - 1, v10);
    }
    while ( v11 != v10 );
  }
  else
  {
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
