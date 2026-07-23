/*
 * XREFs of HvpFinishPrimaryWrite @ 0x1406B9768
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1406B95D8 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpLogEvent @ 0x1407ED8DC (CmpLogEvent.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // si
  int v5; // edi
  __int64 result; // rax

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 160) & 0x100;
  if ( (a2 == (v5 != 0) || ((*(_DWORD *)(a1 + 4280) & 8) != 0) != a3) && !a4 )
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
  result = (*(_DWORD *)(a1 + 4280) >> 3) & 1;
  if ( (_DWORD)result != a3 )
  {
    result = *(_DWORD *)(a1 + 4280) ^ ((unsigned __int8)*(_DWORD *)(a1 + 4280) ^ (unsigned __int8)(8 * a3)) & 8u;
    *(_DWORD *)(a1 + 4280) = result;
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
