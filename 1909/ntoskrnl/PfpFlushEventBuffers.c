/*
 * XREFs of PfpFlushEventBuffers @ 0x14066D960
 * Callers:
 *     PfpFlushBuffers @ 0x14066DCC0 (PfpFlushBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400D48F4 (PfFbBufferListInsertInFree.c)
 *     PfFbBufferListFlushStandby @ 0x1400D499C (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x140124408 (PfTFullEventListAdd.c)
 *     RtlpInterlockedFlushSList @ 0x1401CC5F0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PfpCopyEvent @ 0x14066DA70 (PfpCopyEvent.c)
 */

__int64 PfpFlushEventBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  int v1; // esi
  PSLIST_ENTRY v2; // rcx
  _SLIST_ENTRY *v3; // rax
  _SLIST_ENTRY *v4; // rbp
  _SLIST_ENTRY *v5; // rdi
  _SLIST_ENTRY *v8; // rcx

  v0 = 0LL;
  v1 = 0;
  PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140467460);
  v2 = RtlpInterlockedFlushSList(&stru_1404674E0);
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = v2->Next;
      v3->Next = v0;
      v0 = v3;
    }
    while ( v2 );
    while ( 1 )
    {
      v4 = v0;
      v0 = v0->Next;
      v5 = v4 + 3;
      if ( *((_DWORD *)&v4[2].Next + 2) )
        break;
LABEL_6:
      if ( v1 < 0 )
        goto LABEL_9;
      PfFbBufferListInsertInFree(
        (_SLIST_ENTRY *)&stru_140467460,
        v4,
        LODWORD(v4[2].Next) - (_DWORD)v4,
        *((_DWORD *)&v4[2].Next + 3),
        1);
      if ( !v0 )
        return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = PfpCopyEvent(v5);
      if ( v1 < 0 )
        break;
      v5 += (LODWORD(v5->Next) >> 2) & 0x3FF;
      if ( (*((_DWORD *)&v4[2].Next + 2))-- == 1 )
        goto LABEL_6;
    }
LABEL_9:
    memmove(&v4[3], v5, (unsigned int)(LODWORD(v4[2].Next) - (_DWORD)v5));
    PfTFullEventListAdd(v4);
    while ( v0 )
    {
      v8 = v0;
      v0 = v0->Next;
      PfTFullEventListAdd(v8);
    }
  }
  return (unsigned int)v1;
}
