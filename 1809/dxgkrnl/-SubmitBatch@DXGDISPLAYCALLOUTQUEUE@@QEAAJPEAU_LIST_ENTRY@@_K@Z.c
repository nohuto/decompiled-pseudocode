/*
 * XREFs of ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C02123E4
 * Callers:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01C2938 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C0262C24 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitBatch(struct _LIST_ENTRY **this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
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
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15), v10 = DpiGdiAsyncDisplayCallout(a3), v12 = v10, v10 >= 0) )
  {
    LODWORD(v12) = 0;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v12;
}
