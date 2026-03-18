/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0140C18
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C01407E0 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01409D0 (DxgkSessionConnected.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01450D0 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkSessionReconnected @ 0x1C015A690 (DxgkSessionReconnected.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C027773C (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C027839C (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, __int64 a2)
{
  char v2; // r12
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v6; // rdx
  struct DXGSESSIONDATA *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  CTTMDEVICE *v11; // rdi
  CTTMDEVICE *v12; // r13
  __int64 v13; // rax
  CTTMDEVICE *v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r15
  _QWORD *v18; // rax
  struct DXGSESSIONDATA *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  CTTMDEVICE *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  v7 = this[15];
  if ( v2 )
  {
    if ( v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v8 + 24) = 5374LL;
      WdLogEvent5_WdAssertion(v8);
    }
    this[15] = SessionDataForSpecifiedSession;
    v7 = SessionDataForSpecifiedSession;
    *((_DWORD *)this + 32) = *(_DWORD *)SessionDataForSpecifiedSession;
  }
  if ( v7 && *((_BYTE *)v7 + 18488) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 19, 0LL);
    this[20] = KeGetCurrentThread();
    if ( v2 )
    {
      v11 = this[21];
      while ( v11 != (CTTMDEVICE *)(this + 21) )
      {
        v12 = v11;
        if ( *((_QWORD *)v11 + 4) )
        {
          v13 = WdLogNewEntry5_WdAssertion(v10, v9);
          *(_QWORD *)(v13 + 24) = 5404LL;
          WdLogEvent5_WdAssertion(v13);
        }
        v14 = v11;
        v11 = *(CTTMDEVICE **)v11;
        v15 = CTTMDEVICE::RegisterTtmDevice(v14, this[15]);
        v17 = v15;
        v10 = v15 + 0x80000000;
        if ( (int)v10 >= 0 && v15 != -1073741130 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v16);
          v18[3] = *((unsigned int *)v12 + 20);
          v18[4] = *((_QWORD *)v12 + 8);
          v18[5] = *(unsigned int *)this[15];
          v18[6] = v17;
          WdLogEvent5_WdError(v18);
        }
      }
    }
    else
    {
      v19 = this[15];
      if ( v19 )
      {
        v20 = (_QWORD *)((char *)v19 + 18584);
        v21 = (_QWORD *)*((_QWORD *)v19 + 2323);
        while ( v21 != v20 )
        {
          v22 = (CTTMDEVICE *)(v21 - 2);
          if ( (struct DXGSESSIONDATA *)v21[2] != v19 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v10, v19);
            *(_QWORD *)(v23 + 24) = 5439LL;
            WdLogEvent5_WdAssertion(v23);
          }
          v21 = (_QWORD *)*v21;
          CTTMDEVICE::UnRegisterTtmDevice(v22, 1u);
          v19 = this[15];
          v20 = (_QWORD *)((char *)v19 + 18584);
        }
      }
    }
    this[20] = 0LL;
    ExReleasePushLockExclusiveEx(this + 19, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v2 )
  {
    if ( this[15] != SessionDataForSpecifiedSession )
    {
      v24 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v24 + 24) = 5459LL;
      WdLogEvent5_WdAssertion(v24);
    }
    this[15] = 0LL;
    *((_DWORD *)this + 32) = -1;
  }
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
}
