/*
 * XREFs of EtwpGetSchematizedFilterSize @ 0x1405D3DF8
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 *     EtwpBuildNotificationPacket @ 0x140663208 (EtwpBuildNotificationPacket.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140665E24 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140666718 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterProvider @ 0x1407185AC (EtwpRegisterProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetSchematizedFilterSize(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  unsigned int v5; // r8d
  _DWORD *v6; // r9
  __int64 v7; // r11

  v2 = *(_QWORD *)(a1 + 384);
  v3 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = (_DWORD *)(a1 + 128);
    v7 = v2 + 88;
    do
    {
      if ( *v6 && *(_QWORD *)v7 && ((unsigned __int8)(1 << v5) & a2) != 0 )
        v3 += (*(_DWORD *)(*(_QWORD *)v7 + 16LL) + 7) & 0xFFFFFFF8;
      ++v5;
      v6 += 8;
      v7 += 104LL;
    }
    while ( v5 < 8 );
  }
  return v3;
}
