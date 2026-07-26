/*
 * XREFs of ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C001A1EC
 * Callers:
 *     ndisRecordEvent @ 0x1C001A168 (ndisRecordEvent.c)
 * Callees:
 *     ndisCaptureStackTrace @ 0x1C00C7F90 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C00C8194 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisFillEventLogEntry(struct _NDIS_EVENT_LOG *a1, __int64 a2, unsigned __int64 a3, void *a4)
{
  __int16 v4; // si
  __int64 v6; // rdi
  unsigned __int16 Flags; // ax
  __int16 v8; // ax
  unsigned __int64 v9; // rcx
  __int16 v10; // cx
  ULONG_PTR v11; // rcx

  v4 = a3;
  v6 = (unsigned int)a2 * a1->EntrySize;
  Flags = a1->Flags;
  if ( (Flags & 1) != 0 )
  {
    a3 = MEMORY[0xFFFFF78000000014];
    v8 = *(_WORD *)((char *)&a1[1].LastEventTime + v6 + 2);
    a2 = 0x7FFFLL;
    v9 = (MEMORY[0xFFFFF78000000014] - a1->LastEventTime) / 0x2710;
    if ( v9 >= 0x7FFF )
    {
      a2 = 0x8000LL;
      if ( v9 >= 0x1F3FC18 )
        v10 = v8 | 0x8000;
      else
        v10 = (v9 / 0x3E8) | 0x8000;
    }
    else
    {
      v10 = v9 & 0x7FFF;
    }
    *(_WORD *)((char *)&a1[1].LastEventTime + v6 + 2) = v10;
    Flags = a1->Flags;
    a1->LastEventTime = a3;
  }
  if ( (Flags & 4) != 0 )
  {
    *(_QWORD *)((char *)&a1[1].LastUsedEntry + v6) = a4;
    Flags = a1->Flags;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 = *(unsigned int *)((char *)&a1[1].LastEventTime + v6 + 4);
    if ( (_DWORD)v11 )
      ndisReleaseStackTrace(v11);
    *(_DWORD *)((char *)&a1[1].LastEventTime + v6 + 4) = ndisCaptureStackTrace(v11, a2, a3, a4);
  }
  *(_WORD *)((char *)&a1[1].LastEventTime + v6) = v4;
}
