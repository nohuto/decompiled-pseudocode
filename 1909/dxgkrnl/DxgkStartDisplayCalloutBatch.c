/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1C015C1D8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001E468 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 2552);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v1 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v10 + 24) = 8488LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(v1 + 440), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( *(_BYTE *)(v1 + 480) )
  {
    v11 = WdLogNewEntry5_WdError(v5, v4, v6);
    v12 = *(_QWORD *)(v1 + 16);
    v8 = -1073741811;
    *(_QWORD *)(v11 + 24) = v12;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  }
  else
  {
    v7 = v13[8] == 0;
    *(_BYTE *)(v1 + 480) = 1;
    if ( !v7 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
    return 0;
  }
  return v8;
}
