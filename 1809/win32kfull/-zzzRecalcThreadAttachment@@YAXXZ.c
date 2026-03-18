/*
 * XREFs of ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00D6C8C
 * Callers:
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 * Callees:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00D6D2C (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00D6D48 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00D6E0C (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void zzzRecalcThreadAttachment(void)
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry && !*((_QWORD *)RecalcPtiFromListEntry + 82) )
    {
      v4 = *((_QWORD *)RecalcPtiFromListEntry + 54);
      if ( *(_DWORD *)(v4 + 392) > 1u )
      {
        v5 = AllocQueue(0LL, 0LL);
        *((_QWORD *)v3 + 82) = v5;
        if ( !v5 )
          return;
        ++*(_DWORD *)(v5 + 392);
        v4 = *((_QWORD *)v3 + 82);
      }
      else
      {
        *((_QWORD *)RecalcPtiFromListEntry + 82) = v4;
      }
      zzzRecalc2((struct tagQ *)v4);
    }
  }
}
