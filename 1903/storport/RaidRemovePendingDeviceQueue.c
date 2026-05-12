/*
 * XREFs of RaidRemovePendingDeviceQueue @ 0x1C001C968
 * Callers:
 *     RaidRemoveIoQueue @ 0x1C001C940 (RaidRemoveIoQueue.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0038518 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 *__fastcall RaidRemovePendingDeviceQueue(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // r8
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  bool v13; // zf

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v3 = (_QWORD *)(a1 + 96);
  v4 = v2;
  v5 = *(__int64 **)(a1 + 96);
  if ( v5 == (__int64 *)(a1 + 96) )
  {
    v6 = (_QWORD *)(a1 + 80);
    v5 = *(__int64 **)(a1 + 80);
    if ( v5 == (__int64 *)(a1 + 80) )
    {
      v5 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v5[1] != v6 )
        goto LABEL_17;
      v9 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 )
        goto LABEL_17;
      *v6 = v9;
      *(_QWORD *)(v9 + 8) = v6;
    }
  }
  else
  {
    if ( (_QWORD *)v5[1] != v3 )
      goto LABEL_17;
    v8 = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 )
      goto LABEL_17;
    *v3 = v8;
    *(_QWORD *)(v8 + 8) = v3;
  }
  if ( v5 && (*((_BYTE *)v5 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v5);
    v11 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v12 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v12 == QosEntryForDeviceEntry )
      {
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        goto LABEL_5;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
LABEL_5:
  if ( v5 )
  {
    v13 = (*((_BYTE *)v5 + 22) & 6) == 0;
    *((_BYTE *)v5 + 20) = 0;
    if ( v13 )
      --*(_DWORD *)(a1 + 16);
    else
      --*(_DWORD *)(a1 + 20);
    if ( (*((_BYTE *)v5 + 22) & 8) != 0 )
      --*(_DWORD *)(a1 + 24);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
  return v5;
}
