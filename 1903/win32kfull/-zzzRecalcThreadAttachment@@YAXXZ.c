/*
 * XREFs of ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0012BE8
 * Callers:
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 * Callees:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0012C88 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0012CA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0012D68 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
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
    if ( RecalcPtiFromListEntry && !*((_QWORD *)RecalcPtiFromListEntry + 81) )
    {
      v4 = *((_QWORD *)RecalcPtiFromListEntry + 53);
      if ( *(_DWORD *)(v4 + 400) > 1u )
      {
        v5 = AllocQueue(0LL, 0LL);
        *((_QWORD *)v3 + 81) = v5;
        if ( !v5 )
          return;
        ++*(_DWORD *)(v5 + 400);
        v4 = *((_QWORD *)v3 + 81);
      }
      else
      {
        *((_QWORD *)RecalcPtiFromListEntry + 81) = v4;
      }
      zzzRecalc2((struct tagQ *)v4);
    }
  }
}
