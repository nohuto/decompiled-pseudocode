/*
 * XREFs of ?StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01C5344
 * Callers:
 *     DxgkStartDisplayCalloutBatch @ 0x1C01C5C6C (DxgkStartDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::StartDisplayCalloutBatch(DXGADAPTER **this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  DXGADAPTER *v6; // rcx
  unsigned int v7; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 8031LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(this + 42), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( *((_BYTE *)this + 376) )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    v6 = this[2];
    v7 = -1073741811;
    *(_QWORD *)(v5 + 24) = v6;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
  }
  else
  {
    *((_BYTE *)this + 376) = 1;
    v7 = 0;
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v7;
}
