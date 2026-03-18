/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C027B980
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01421C4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01583D0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C027D4AC (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C0142380 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C027BCFC (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C027D410 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  BLTENTRY *v5; // rbp
  void *v6; // rcx

  KeWaitForSingleObject((char *)this + 8, Executive, 0, 0, 0LL);
  v2 = (_QWORD **)((char *)this + 64);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v5 = (BLTENTRY *)(v3 - 1);
    v4[1] = v2;
    v6 = (void *)v3[4];
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)v5 + 5) = 0LL;
    }
    BLTENTRY::ReleasePresentDoneEvent(v5, 1u);
    BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)this + 5, v5);
  }
  if ( *((_BYTE *)this + 405) || *((_BYTE *)this + 406) )
  {
    *(_WORD *)((char *)this + 405) = 0;
    BLTQUEUE::FinishCommand(this, 0);
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 8), 0);
}
