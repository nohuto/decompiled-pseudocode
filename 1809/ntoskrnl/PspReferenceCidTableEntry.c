/*
 * XREFs of PspReferenceCidTableEntry @ 0x140647D30
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x140649960 (PsLookupThreadByThreadId.c)
 * Callees:
 *     ExSlowReplenishHandleTableEntry @ 0x140003BE0 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x1405E9990 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140698A24 (ExpBlockOnLockedHandleEntry.c)
 */

_BYTE *__fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  volatile signed __int64 *v3; // rax
  volatile signed __int64 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdi
  signed __int64 v7; // rcx
  __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  int v13; // ebx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rcx
  volatile __int64 *v17; // rcx
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = PspCidTable;
  _m_prefetchw((const void *)v3);
  v6 = *v3;
  v7 = *((_QWORD *)v3 + 1);
  while ( (v6 & 0x1FFFE) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      *(_QWORD *)&v8 = v6;
      *((_QWORD *)&v8 + 1) = v7;
      v9 = _InterlockedCompareExchange128(v4, v7, v6 - 2, (signed __int64 *)&v8);
      v7 = *((_QWORD *)&v8 + 1);
      v10 = v8;
      v6 = v8;
      if ( v9 )
      {
        if ( (unsigned __int16)(v10 >> 1) == 16 )
          v6 = ((unsigned int)v6 ^ (2 * (unsigned int)(v10 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v6;
        v11 = (_BYTE *)((v6 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (*v11 & 0x7F) == a2 )
          return v11;
        ObfDereferenceObject(v11);
        return 0LL;
      }
    }
    else
    {
      ExpBlockOnLockedHandleEntry(v5, v4);
      _m_prefetchw((const void *)v4);
      v6 = *v4;
      v7 = *((_QWORD *)v4 + 1);
    }
  }
  v13 = 0;
  if ( !ExLockHandleTableEntry(PspCidTable, (signed __int64 *)v4) )
    return 0LL;
  v11 = (_BYTE *)((*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (*v11 & 0x7F) != a2 )
    goto LABEL_25;
  if ( a2 != 3 )
  {
    if ( (*(_DWORD *)(((*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6D0) & 3) != 2 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(((*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) == 0x4000000 )
LABEL_15:
    v13 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v4);
LABEL_16:
  _m_prefetchw(v11 - 48);
  v14 = *((_QWORD *)v11 - 6);
  if ( !v14 )
  {
LABEL_24:
    *v4 &= 0xFFFFFFFFFFFE0001uLL;
LABEL_25:
    v11 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 - 6, (unsigned int)(v13 + 1) + v14, v14);
    if ( v15 == v14 )
      break;
    if ( !v14 )
      goto LABEL_24;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)(v11 - 48), 1, v13 + 1, 1953261124);
LABEL_20:
  v16 = PspCidTable;
  _InterlockedExchangeAdd64(v4, 1uLL);
  v17 = (volatile __int64 *)(v16 + 48);
  _InterlockedOr(v18, 0);
  if ( *v17 )
    ExfUnblockPushLock(v17, 0LL);
  return v11;
}
