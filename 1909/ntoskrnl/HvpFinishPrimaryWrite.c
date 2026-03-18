/*
 * XREFs of HvpFinishPrimaryWrite @ 0x1406E66E4
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1406E6550 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpLogEvent @ 0x1408268E8 (CmpLogEvent.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // bp
  int v5; // esi
  int v6; // ebx
  __int64 result; // rax

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 160) & 0x100;
  v6 = a3;
  if ( (a2 == (v5 != 0) || ((*(_DWORD *)(a1 + 4264) >> 1) & 1) != a3) && !a4 )
  {
    CmpLockRegistry();
    ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
    v4 = 1;
  }
  if ( a2 )
  {
    if ( v5 )
      *(_DWORD *)(a1 + 160) &= ~0x100u;
  }
  else if ( !v5 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(a1 + 160) |= 0x100u;
  }
  result = (*(_DWORD *)(a1 + 4264) >> 1) & 1;
  if ( (_DWORD)result != v6 )
  {
    result = *(_DWORD *)(a1 + 4264) ^ ((unsigned __int8)*(_DWORD *)(a1 + 4264) ^ (unsigned __int8)(2 * v6)) & 2u;
    *(_DWORD *)(a1 + 4264) = result;
  }
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
    KeAbPostRelease(a1 + 72);
    return CmpUnlockRegistry();
  }
  return result;
}
