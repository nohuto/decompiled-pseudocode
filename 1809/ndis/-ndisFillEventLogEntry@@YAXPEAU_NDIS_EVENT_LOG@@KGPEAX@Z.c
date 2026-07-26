/*
 * XREFs of ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C001696C
 * Callers:
 *     ndisRecordEvent @ 0x1C00168E8 (ndisRecordEvent.c)
 * Callees:
 *     ndisCaptureStackTrace @ 0x1C0071B98 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C0071DA0 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisFillEventLogEntry(struct _NDIS_EVENT_LOG *a1, int a2, __int16 a3, void *a4)
{
  __int64 v7; // rdi
  unsigned __int16 Flags; // ax
  unsigned __int64 v9; // r9
  __int16 v10; // r8
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  ULONG_PTR v15; // rcx

  v7 = a2 * (unsigned int)a1->EntrySize;
  Flags = a1->Flags;
  if ( (Flags & 1) != 0 )
  {
    v9 = MEMORY[0xFFFFF78000000014];
    v10 = *(_WORD *)((char *)&a1[1].LastEventTime + v7 + 2);
    v11 = (MEMORY[0xFFFFF78000000014] - a1->LastEventTime) / 0x2710;
    if ( v11 >= 0x7FFF )
    {
      if ( v11 >= 0x1F3FC18 )
      {
        v13 = v10 | 0x8000;
      }
      else
      {
        v14 = v10 ^ (v10 ^ (v11 / 0x3E8)) & 0x7FFF;
        *(_WORD *)((char *)&a1[1].LastEventTime + v7 + 2) = v14;
        v13 = v14 | 0x8000;
      }
    }
    else
    {
      v12 = v10 ^ (v11 ^ v10) & 0x7FFF;
      *(_WORD *)((char *)&a1[1].LastEventTime + v7 + 2) = v12;
      v13 = v12 & 0x7FFF;
    }
    *(_WORD *)((char *)&a1[1].LastEventTime + v7 + 2) = v13;
    Flags = a1->Flags;
    a1->LastEventTime = v9;
  }
  if ( (Flags & 4) != 0 )
  {
    *(_QWORD *)((char *)&a1[1].LastUsedEntry + v7) = a4;
    Flags = a1->Flags;
  }
  if ( (Flags & 2) != 0 )
  {
    v15 = *(unsigned int *)((char *)&a1[1].LastEventTime + v7 + 4);
    if ( (_DWORD)v15 )
      ndisReleaseStackTrace(v15);
    *(_DWORD *)((char *)&a1[1].LastEventTime + v7 + 4) = ndisCaptureStackTrace();
  }
  *(_WORD *)((char *)&a1[1].LastEventTime + v7) = a3;
}
