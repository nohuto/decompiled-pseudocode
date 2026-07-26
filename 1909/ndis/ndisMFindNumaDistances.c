/*
 * XREFs of ndisMFindNumaDistances @ 0x1C003A37C
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A4C4 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisMFindNumaDistances(struct _NDIS_MINIPORT_BLOCK *a1)
{
  SIZE_T v2; // rdi
  unsigned __int16 *PoolWithTag; // rax
  int v4; // edx
  __int64 v5; // rbx
  USHORT HighestNodeNumber; // ax
  ULONG SystemInformationLength; // ebp
  _WORD *v8; // rax
  _WORD *v9; // rdi
  __int64 v10; // r8
  _LIST_ENTRY *v11; // rdx
  __int64 Flink_low; // rax

  v2 = 2LL * ndisMaxNumberOfProcessors;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x2020444Eu);
  v5 = 0LL;
  a1->NumaDistances = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    a1->NumaNodeId = -1;
    if ( (int)ndisMFindNumaNode(a1) >= 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      SystemInformationLength = 4 * HighestNodeNumber + 4;
      v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * HighestNodeNumber + 4, 0x2020444Eu);
      v9 = v8;
      if ( v8 )
      {
        if ( NtQuerySystemInformationEx(
               SystemNodeDistanceInformation,
               &a1->NumaNodeId,
               2u,
               v8,
               SystemInformationLength,
               0LL) >= 0
          && ndisMaxNumberOfProcessors )
        {
          v10 = ndisMaxNumberOfProcessors;
          v11 = WPP_MAIN_CB.Queue.ListEntry.Blink + 1;
          do
          {
            Flink_low = LOWORD(v11->Flink);
            v11 = (_LIST_ENTRY *)((char *)v11 + 20);
            a1->NumaDistances[v5++] = v9[2 * Flink_low];
            --v10;
          }
          while ( v10 );
        }
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      123,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
}
