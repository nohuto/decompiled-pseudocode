/*
 * XREFs of PspReferenceCidTableEntry @ 0x1405D0680
 * Callers:
 *     PsLookupProcessByProcessId @ 0x1405D05D0 (PsLookupProcessByProcessId.c)
 * Callees:
 *     ExFastReferenceHandleTableEntry @ 0x1400063F0 (ExFastReferenceHandleTableEntry.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExLockHandleTableEntry @ 0x14003FD50 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14007ED40 (ExSlowReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 */

_BYTE *__fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  signed __int64 *v3; // rax
  signed __int64 *v4; // rdi
  int v5; // eax
  _BYTE *v6; // rbx
  int v8; // ebp
  __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rcx
  volatile __int64 *v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+38h] [rbp-10h]

  v15[0] = 0LL;
  v15[1] = 0LL;
  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(PspCidTable, a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = ExFastReferenceHandleTableEntry(PspCidTable, v3, v15);
  if ( v5 < 0 )
  {
    if ( v5 != -1 )
      return 0LL;
    v8 = 0;
    if ( !ExLockHandleTableEntry(PspCidTable, v4) )
      return 0LL;
    v6 = (_BYTE *)((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (*v6 & 0x7F) != a2 )
      goto LABEL_20;
    if ( a2 == 3 )
    {
      if ( (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x30C) & 0x400000C) != 0x4000000 )
      {
LABEL_12:
        v9 = (unsigned int)(v8 + 1);
        _m_prefetchw(v6 - 48);
        v10 = *((_QWORD *)v6 - 6);
        if ( v10 )
        {
          while ( 1 )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 - 6, v9 + v10, v10);
            if ( v11 == v10 )
              break;
            if ( !v10 )
              goto LABEL_19;
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)(v6 - 48), 1, v9, 0x746C6644u);
          goto LABEL_16;
        }
LABEL_19:
        v17 = 0LL;
        v16 = *v4 & 0xFFFFFFFFFFFE0001uLL;
        *v4 = v16;
LABEL_20:
        v6 = 0LL;
LABEL_16:
        v12 = PspCidTable;
        _InterlockedExchangeAdd64(v4, 1uLL);
        v13 = (volatile __int64 *)(v12 + 48);
        _InterlockedOr(v14, 0);
        if ( *v13 )
          ExfUnblockPushLock(v13, 0LL);
        return v6;
      }
    }
    else if ( (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6E0) & 3) != 2 )
    {
      goto LABEL_12;
    }
    v8 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v4);
    goto LABEL_12;
  }
  v6 = (_BYTE *)((v15[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (*v6 & 0x7F) == a2 )
    return v6;
  ObfDereferenceObject((PVOID)((v15[0] >> 16) & 0xFFFFFFFFFFFFFFF0uLL));
  return 0LL;
}
