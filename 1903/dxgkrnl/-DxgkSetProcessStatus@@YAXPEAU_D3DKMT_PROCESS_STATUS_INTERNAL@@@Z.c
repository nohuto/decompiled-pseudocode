/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C013E180
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // rbx
  const GUID *v9; // r8
  int v10; // edx
  bool v11; // zf
  signed __int32 v12; // eax
  __int64 v13; // rcx
  signed __int32 v14; // ett
  bool v15; // al
  signed __int32 v16; // ett
  __int64 v17; // rax

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 324)
    && _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v4, v3) + 323, 1, 1) )
  {
    return;
  }
  v5 = *(_QWORD *)a1;
  ProcessDxgProcess = PsGetProcessDxgProcess(*(_QWORD *)a1);
  if ( !ProcessDxgProcess )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 3628LL;
    goto LABEL_25;
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v10 = 1;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a1 + 2) != 2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 3588LL;
LABEL_25:
    WdLogEvent5_WdAssertion(v17);
    return;
  }
  v10 = 2;
LABEL_5:
  v11 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(ProcessDxgProcess + 304));
  v12 = *(_DWORD *)(ProcessDxgProcess + 304);
  if ( !v11 )
  {
    do
    {
      v13 = v10 | (unsigned int)v12;
      v14 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 304), v13, v12);
    }
    while ( v14 != v12 );
    v15 = (v12 & v10) == 0;
LABEL_8:
    if ( !v15 )
      return;
    goto LABEL_9;
  }
  v9 = (const GUID *)(unsigned int)~v10;
  do
  {
    v13 = (unsigned int)v9 & v12;
    v16 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 304), v13, v12);
  }
  while ( v16 != v12 );
  if ( (v12 & v10) == 0 )
  {
    v15 = 0;
    goto LABEL_8;
  }
LABEL_9:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0xq(v13, &SetProcessStatus, v9, v5, *(_DWORD *)(ProcessDxgProcess + 304));
  _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 312), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 308), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 312));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 72) + 40LL), CriticalWorkQueue);
}
