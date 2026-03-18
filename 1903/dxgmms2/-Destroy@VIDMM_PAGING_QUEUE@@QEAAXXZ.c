/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0062720
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C006270C (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001C44 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0062834 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(struct _LIST_ENTRY *this)
{
  VIDMM_DEVICE *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char *v7; // rbx
  char *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  struct _LIST_ENTRY *v11; // rax
  VIDMM_PAGING_QUEUE **v12; // rcx
  _QWORD *v13; // rax

  if ( this[7].Blink )
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)this);
  Blink = (VIDMM_DEVICE *)this[8].Blink;
  if ( Blink )
    VIDMM_DEVICE::RemovePagingQueueList(Blink, this + 3);
  Flink = this[5].Flink;
  if ( Flink )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&Flink[8], 0LL);
    Flink[8].Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( this[2].Flink != &this[2] )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v10[3] = 270LL;
      v10[4] = 50LL;
      v10[5] = this;
      v10[6] = 0LL;
      v10[7] = 0LL;
      WdLogEvent5_WdCriticalError(v10);
    }
    if ( LODWORD(this[7].Flink) == 2 )
    {
      v11 = this->Flink;
      if ( this->Flink->Blink != this || (v12 = (VIDMM_PAGING_QUEUE **)this->Blink, *v12 != (VIDMM_PAGING_QUEUE *)this) )
LABEL_18:
        __fastfail(3u);
      *v12 = (VIDMM_PAGING_QUEUE *)v11;
      v11->Blink = (struct _LIST_ENTRY *)v12;
      this->Flink = 0LL;
      this->Blink = 0LL;
    }
    else if ( this->Flink || this->Blink )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v13[3] = 270LL;
      v13[4] = 49LL;
      v13[5] = this;
      v13[6] = 0LL;
      v13[7] = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    v6 = (__int64)&this[5].Flink[8];
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    v7 = (char *)&this[1];
    while ( 1 )
    {
      v8 = *(char **)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
        goto LABEL_18;
      v9 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
        goto LABEL_18;
      *(_QWORD *)v7 = v9;
      *(_QWORD *)(v9 + 8) = v7;
      if ( v8 == v7 )
        break;
      operator delete(v8);
    }
    operator delete(this[7].Blink);
    this[7].Blink = 0LL;
  }
}
