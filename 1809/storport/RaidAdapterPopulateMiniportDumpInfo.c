/*
 * XREFs of RaidAdapterPopulateMiniportDumpInfo @ 0x1C0073BB8
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0075098 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073798 (RaidAdapterGetMiniportDumpInfo.c)
 */

__int64 __fastcall RaidAdapterPopulateMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  int MiniportDumpInfo; // eax
  _QWORD *v7; // rcx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a3 + 48);
  v5 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(v4 + 48) )
  {
    if ( !*(_BYTE *)(a2 + 4514) || (*(_DWORD *)(*(_QWORD *)(a2 + 544) + 184LL) & 0x1000) != 0 )
    {
      MiniportDumpInfo = RaidAdapterGetMiniportDumpInfo(a1, a2, a4, a3, &P);
      v7 = P;
      v5 = MiniportDumpInfo;
      if ( MiniportDumpInfo >= 0 )
      {
        if ( !P )
          return v5;
        *(_QWORD *)(v4 + 48) = *((_QWORD *)P + 2);
        *(_QWORD *)(v4 + 120) = v7[2];
      }
      if ( v7 )
        ExFreePoolWithTag(v7, 0x44436152u);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v5;
}
