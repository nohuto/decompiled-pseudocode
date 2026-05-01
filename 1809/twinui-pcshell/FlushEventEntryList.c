/*
 * XREFs of FlushEventEntryList @ 0x1800E3BC4
 * Callers:
 *     FlushLookUpTableBucket @ 0x1800E3C5C (FlushLookUpTableBucket.c)
 * Callees:
 *     free @ 0x180085090 (free.c)
 */

void __fastcall FlushEventEntryList(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  PCEVENT_DESCRIPTOR Keyword; // rdi
  int v4; // edx
  __int64 v5; // rcx
  void **v6; // rbx

  if ( EventDescriptor )
  {
    Keyword = EventDescriptor;
    do
    {
      v4 = 2;
      if ( (unsigned int)BYTE5(Keyword[2].Keyword) + 2 > 2 )
      {
        v5 = 32LL;
        do
        {
          v5 += 16LL;
          ++v4;
          *(_BYTE *)(v5 + *(_QWORD *)&Keyword[1].Id - 3) = 0;
        }
        while ( v4 < BYTE5(Keyword[2].Keyword) + 2 );
      }
      v6 = (void **)&Keyword[1];
      EventWriteTransfer(
        RegHandle,
        Keyword,
        0LL,
        0LL,
        BYTE4(Keyword[2].Keyword),
        *(PEVENT_DATA_DESCRIPTOR *)&Keyword[1].Id);
      Keyword = (PCEVENT_DESCRIPTOR)Keyword[1].Keyword;
      free(*v6);
    }
    while ( Keyword );
  }
}
