/*
 * XREFs of ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C02466C0
 * Callers:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C015B594 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C029CB20 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitBatch(struct _LIST_ENTRY **this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  Flink = a2->Flink;
  if ( a2->Flink != a2 )
  {
    if ( Flink->Blink != a2
      || (Blink = a2->Blink, Blink->Flink != a2)
      || (Blink->Flink = Flink,
          v8 = (struct _LIST_ENTRY *)(this + 5),
          Flink->Blink = Blink,
          a2->Blink = a2,
          a2->Flink = a2,
          v9 = this[6],
          (struct _LIST_ENTRY **)this[5]->Blink != this + 5)
      || v9->Flink != v8
      || Flink->Flink->Blink != Flink
      || Flink->Blink->Flink != Flink )
    {
      __fastfail(3u);
    }
    v9->Flink = Flink;
    this[6] = Flink->Blink;
    Flink->Blink->Flink = v8;
    Flink->Blink = v9;
  }
  if ( this[5] == (struct _LIST_ENTRY *)(this + 5)
    || this[7]
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17), v10 = DpiGdiAsyncDisplayCallout(a3), v14 = v10, v10 >= 0) )
  {
    LODWORD(v14) = 0;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v14;
}
