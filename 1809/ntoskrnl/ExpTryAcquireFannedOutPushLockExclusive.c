/*
 * XREFs of ExpTryAcquireFannedOutPushLockExclusive @ 0x14031ADB8
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140169E10 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 */

char __fastcall ExpTryAcquireFannedOutPushLockExclusive(unsigned __int64 a1)
{
  char v2; // bl
  ULONG MaximumProcessorCount; // r10d
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v10; // ecx
  volatile signed __int64 *v11; // rcx

  v2 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v4) = 0;
  if ( !MaximumProcessorCount )
    return 1;
  v5 = 0LL;
  v6 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v7 = (a1 >> 4) & 0x1FF;
  while ( 1 )
  {
    _BitScanReverse(&v8, v6);
    if ( _interlockedbittestandset64(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + ExSaPageArrays) + 8LL * (v8 - 2))
                                                 + 8LL * (v6 ^ (1 << v8))
                                                 + 8)
                                     + 8LL * v7),
           0LL) )
    {
      break;
    }
    LODWORD(v4) = v4 + 1;
    v5 += 8LL;
    if ( (unsigned int)v4 >= MaximumProcessorCount )
      return 1;
  }
  while ( (_DWORD)v4 )
  {
    _BitScanReverse(&v10, v6);
    v4 = (unsigned int)(v4 - 1);
    v11 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v4) + 8LL * (v10 - 2))
                                                + 8LL * (v6 ^ (1 << v10))
                                                + 8)
                                    + 8LL * v7);
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
  }
  return v2;
}
