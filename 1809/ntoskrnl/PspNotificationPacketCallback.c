/*
 * XREFs of PspNotificationPacketCallback @ 0x1406C3A60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IoSetIoCompletionEx @ 0x1400C6270 (IoSetIoCompletionEx.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 */

void __fastcall PspNotificationPacketCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v4; // r9d
  int v5; // r8d
  unsigned int v6; // edx
  signed __int32 v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(a2, (__int64)CurrentThread);
  v4 = *(_DWORD *)(a2 + 1304);
  do
  {
    v5 = 0;
    v6 = v4;
    if ( (v4 & 0x4000) != 0 && (v6 = v4 & 0xFFFFBFFF, (*(_DWORD *)(a2 + 876) & 0x800) != 0) )
    {
      v5 = 11;
    }
    else if ( (v6 & 0x10000) != 0 && (v6 &= ~0x10000u, (*(_DWORD *)(a2 + 876) & 0x1000) != 0) )
    {
      v5 = 12;
    }
    else if ( (v6 & 0x8000) != 0 )
    {
      v6 &= ~0x8000u;
      if ( (*(_BYTE *)(a2 + 876) & 0x10) != 0 )
        v5 = 4;
    }
    v7 = v4;
    v8 = v6 & 0xFFFFFFF7;
    if ( v5 )
      v8 = v6;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 1304), v8, v4);
  }
  while ( v7 != v4 );
  v9 = *(_QWORD *)(a2 + 456) != 0LL ? v5 : 0;
  if ( v9 )
  {
    IoSetIoCompletionEx(*(_QWORD *)(a2 + 456), *(_QWORD *)(a2 + 464), 0LL, 0, v9, 0, *(_QWORD *)(a2 + 1000));
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 472));
  }
  PspUnlockJob(a2, (__int64)CurrentThread);
  if ( !v9 )
    ObfDereferenceObjectWithTag((PVOID)a2, 0x624A7350u);
}
