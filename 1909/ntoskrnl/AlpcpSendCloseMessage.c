/*
 * XREFs of AlpcpSendCloseMessage @ 0x14065D14C
 * Callers:
 *     AlpcpClosePort @ 0x14065E0A0 (AlpcpClosePort.c)
 *     AlpcpDeletePort @ 0x14065E1C0 (AlpcpDeletePort.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpDispatchCloseMessage @ 0x140659028 (AlpcpDispatchCloseMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 */

char __fastcall AlpcpSendCloseMessage(__int64 a1)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  __int64 v5[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  LODWORD(v2) = *(_DWORD *)(a1 + 416);
  if ( (v2 & 6) != 2 && (v2 & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || (v2 & 6) == 4) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = _InterlockedExchange64((volatile __int64 *)(v2 + 72), 0LL);
    if ( v3 )
    {
      AlpcpLockForCachedReferenceBlob(v3);
      --*(_WORD *)(v3 - 30);
      *(_DWORD *)(v3 + 264) &= ~0x80000000;
      *(_DWORD *)(v3 + 240) = 3145736;
      *(_BYTE *)(v3 + 244) = 0;
      *(_WORD *)(v3 + 244) |= 5u;
      *(_WORD *)(v3 + 246) = 0;
      v5[0] = a1;
      v5[1] = v3;
      LODWORD(v5[6]) = 0x10000;
      *(_QWORD *)(v3 + 280) = KeGetCurrentThread()->ApcState.Process[1].ThreadListHead.Flink;
      *(_QWORD *)(v3 + 248) = 0LL;
      *(_QWORD *)(v3 + 256) = 0LL;
      LODWORD(v2) = AlpcpDispatchCloseMessage(v5);
      if ( (int)v2 < 0 )
        LOBYTE(v2) = AlpcpUnlockMessage(v3);
    }
  }
  return v2;
}
