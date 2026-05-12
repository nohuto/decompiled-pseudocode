/*
 * XREFs of RiEnqueueDeviceQueue @ 0x1C000B478
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C0009090 (RaidInsertDeviceQueue.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0038518 (RaidGetQosEntryForDeviceEntry.c)
 */

char __fastcall RiEnqueueDeviceQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx
  int v5; // eax
  __int64 QosEntryForDeviceEntry; // rax
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // r8

  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    v7 = a1 + 96;
    v8 = *(_QWORD **)(a1 + 104);
    if ( *v8 != v7 )
      goto LABEL_11;
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(a2 + 8) = v8;
    *v8 = a2;
    *(_QWORD *)(v7 + 8) = a2;
    ++*(_DWORD *)(a1 + 20);
  }
  else
  {
    v3 = a1 + 80;
    v4 = *(_QWORD **)(a1 + 88);
    if ( *v4 != v3 )
      goto LABEL_11;
    *(_QWORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = v4;
    *v4 = a2;
    *(_QWORD *)(v3 + 8) = a2;
    v5 = ++*(_DWORD *)(a1 + 16);
    if ( v5 > *(_DWORD *)(a1 + 156) )
      *(_DWORD *)(a1 + 156) = v5;
  }
  LOBYTE(QosEntryForDeviceEntry) = *(_BYTE *)(a2 + 22);
  if ( (QosEntryForDeviceEntry & 8) != 0 )
  {
    ++*(_DWORD *)(a1 + 24);
    LOBYTE(QosEntryForDeviceEntry) = *(_BYTE *)(a2 + 22);
  }
  if ( (QosEntryForDeviceEntry & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = RaidGetQosEntryForDeviceEntry(a2);
    v10 = *(__int64 **)(v9 + 120);
    v11 = v9 + 112;
    if ( *v10 == v11 )
    {
      *(_QWORD *)QosEntryForDeviceEntry = v11;
      *(_QWORD *)(QosEntryForDeviceEntry + 8) = v10;
      *v10 = QosEntryForDeviceEntry;
      *(_QWORD *)(v11 + 8) = QosEntryForDeviceEntry;
      return QosEntryForDeviceEntry;
    }
LABEL_11:
    __fastfail(3u);
  }
  return QosEntryForDeviceEntry;
}
