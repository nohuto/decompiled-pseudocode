/*
 * XREFs of PfLogDeleteHelper @ 0x1400D33B8
 * Callers:
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x1400D2AB4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1400D2B8C (PfFbLogEntryComplete.c)
 */

__int64 __fastcall PfLogDeleteHelper(char a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _SLIST_ENTRY *v13; // rcx
  _SLIST_ENTRY *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-10h] BYREF

  ListEntry = 0LL;
  v16 = 0LL;
  v9 = PfFbLogEntryReserve(&stru_1404673E0, &ListEntry, &v16, 0x20u);
  if ( v9 < 0 )
  {
    v14 = ListEntry;
  }
  else
  {
    v10 = v16;
    *(_DWORD *)(v16 + 16) = (4 * a4) | a1 & 3;
    *(_QWORD *)(v10 + 24) = a2;
    *(_DWORD *)v10 = *(_DWORD *)v10 & 0x80000000 | 0x103;
    v11 = MEMORY[0xFFFFF78000000004];
    v12 = v16;
    v13 = ListEntry;
    *(_DWORD *)(v16 + 4) = dword_14046785C
                         + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
    *(_DWORD *)(v12 + 8) = a3;
    PfFbLogEntryComplete(v13, v11, 32LL);
    v14 = 0LL;
    v9 = 0;
  }
  if ( v14 )
    PfFbLogEntryComplete(v14, v8, 0LL);
  return (unsigned int)v9;
}
