/*
 * XREFs of PopEtProcessSnapshotUpdate @ 0x14060FA98
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x14060F990 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406E5CF0 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopEtProcessSnapshotFind @ 0x14060FC50 (PopEtProcessSnapshotFind.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14060FD68 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x140610194 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtAggregateKeyCleanup @ 0x140613120 (PopEtAggregateKeyCleanup.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D4C44 (PopEtProcessSnapshotCreate.c)
 */

__int64 __fastcall PopEtProcessSnapshotUpdate(unsigned int *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  int v5; // eax
  int v6; // ebx
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 1896LL);
  PopAcquireRwLockExclusive(v2 + 16);
  v10 = PopEtProcessSnapshotFind(a1);
  v4 = (_QWORD *)v10;
  if ( !v10 )
  {
    v6 = PopEtProcessSnapshotCreate(a1, &v10);
    if ( v6 < 0 )
      goto LABEL_6;
    v5 = *a1;
    if ( *a1 == 1 || *(_DWORD *)(v3 + 468) > 1u )
    {
      v4 = (_QWORD *)v10;
      goto LABEL_3;
    }
    v4 = (_QWORD *)v10;
  }
  PopEtEnergyTrackerUpdateAggregate(v2, v4, *((_QWORD *)a1 + 3), *a1);
  v5 = *a1;
LABEL_3:
  if ( v5 == 4 )
  {
    v9 = v4[1] & (-1LL << (*(_DWORD *)(v2 + 68) & 0x1F));
    v8 = (_QWORD *)(*(_QWORD *)(v2 + 72)
                  + 8LL
                  * ((37
                    * (BYTE6(v9)
                     + 37
                     * (BYTE5(v9)
                      + 37
                      * (BYTE4(v9)
                       + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                    + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(v2 + 68) >> 5) - 1)));
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)v10;
    while ( (*v8 & 1) == 0 )
    {
      if ( (_QWORD *)*v8 == v4 )
      {
        *v8 = *v4;
        --*(_DWORD *)(v2 + 64);
        *v4 |= 0x8000000000000002uLL;
        goto LABEL_17;
      }
      v8 = (_QWORD *)*v8;
    }
    v4 = (_QWORD *)v10;
LABEL_17:
    PopEtAggregateKeyCleanup(v4 + 2);
    ExFreePoolWithTag(v4, 0x54456F50u);
  }
  else
  {
    PopEtProcessSnapshotUpdateFromSnapshotContext(v4, a1);
  }
  v6 = 0;
LABEL_6:
  PopReleaseRwLock(v2 + 16);
  return (unsigned int)v6;
}
