/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006E0C0
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C006E0AC (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010414 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006E25C (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(struct _LIST_ENTRY *this)
{
  VIDMM_DEVICE *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _LIST_ENTRY *v7; // rax
  VIDMM_PAGING_QUEUE **v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  struct _LIST_ENTRY *v11; // rbx
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rcx

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
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v6[3] = 270LL;
      v6[4] = 50LL;
      v6[5] = this;
      v6[6] = 0LL;
      v6[7] = 0LL;
      WdLogEvent5_WdCriticalError(v6);
    }
    if ( LODWORD(this[7].Flink) == 2 )
    {
      v7 = this->Flink;
      if ( this->Flink->Blink != this || (v8 = (VIDMM_PAGING_QUEUE **)this->Blink, *v8 != (VIDMM_PAGING_QUEUE *)this) )
LABEL_20:
        __fastfail(3u);
      *v8 = (VIDMM_PAGING_QUEUE *)v7;
      v7->Blink = (struct _LIST_ENTRY *)v8;
      this->Flink = 0LL;
      this->Blink = 0LL;
    }
    else if ( this->Flink || this->Blink )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v9[3] = 270LL;
      v9[4] = 49LL;
      v9[5] = this;
      v9[6] = 0LL;
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
    }
    v10 = (__int64)&this[5].Flink[8];
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    v11 = this + 1;
    while ( 1 )
    {
      v12 = v11->Flink;
      v13 = v11->Flink->Flink;
      if ( v11->Flink->Blink != v11 || v13->Blink != v12 )
        goto LABEL_20;
      v11->Flink = v13;
      v13->Blink = v11;
      if ( v12 == v11 )
        break;
      operator delete(v12);
    }
    operator delete(this[7].Blink);
    this[7].Blink = 0LL;
  }
}
