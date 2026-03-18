/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0159834
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01564DC (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C017E638 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001B890 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext, __int64 a2, __int64 a3)
{
  DXGDODPRESENT *v4; // rcx
  __int64 Timer; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(DXGDODPRESENT **)StartContext;
  if ( v4 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(v4) + 77) & 0x100) != 0 )
      StartContext[317] = 1;
  }
  else if ( StartContext[316] )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v15 + 24) = 765LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  Timer = ExAllocateTimer(0LL, 0LL, StartContext[317] != 0 ? 4 : 0);
  *((_QWORD *)StartContext + 58) = Timer;
  if ( Timer )
  {
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v9 = PsCreateSystemThread(
           (PHANDLE)StartContext + 55,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)BLTQUEUE::BltQueueWorkerThread,
           StartContext);
    v13 = v9;
    if ( v9 >= 0 )
    {
      KeWaitForSingleObject(StartContext + 328, Executive, 0, 0, 0LL);
      return 0LL;
    }
    v16 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v16 + 32) = v13;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7, v6, v8);
  }
  *(_QWORD *)(v16 + 24) = StartContext;
  WdLogEvent5_WdError(v16);
  return 3221225495LL;
}
