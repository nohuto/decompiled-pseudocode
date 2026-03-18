/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0014AD0
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0014AB0 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C5F0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F7D10 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(struct DXGADAPTER **this, const struct _DXGKARG_SUBMITCOMMAND *a2)
{
  __int64 v2; // rbx
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  int v12; // eax
  struct DXGADAPTER *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v19; // rdi
  struct _KTHREAD *v20; // rdi
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rax
  int v24; // r14d
  struct DXGADAPTER *v25; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGGLOBAL *v29; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned __int8 v36; // cl
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 Value; // rcx
  __int64 v48; // rax
  struct DXGADAPTER *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  int v55; // eax
  char v57; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v2 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v5 = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter);
  }
  else
  {
    v5 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v7 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v7);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v10, v9)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v2 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v2 = 0LL;
    }
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 140);
      if ( !v12 )
        *(_DWORD *)(v2 + 144) = 5013;
      *(_DWORD *)(v2 + 140) = v12 + 1;
    }
  }
  v13 = this[2];
  v14 = *((_QWORD *)v13 + 320);
  if ( !v14
    || !*(_QWORD *)(v14 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v14 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)v13 + 321) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)v13 + 9) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread);
      KeWaitForSingleObject((char *)v13 + 216, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v13 + 30), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_40;
  v20 = KeGetCurrentThread();
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v21 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = PsGetCurrentProcessSessionId(v16, v15);
  if ( !v22
    || (unsigned int)PsGetThreadSessionId(v20) != v22
    || (unsigned int)IsThreadCrossSessionAttached(v16, v15)
    || (v23 = PsGetThreadWin32Thread(v20)) == 0
    || !*(_QWORD *)v23 )
  {
    v19 = 0LL;
    goto LABEL_40;
  }
  v19 = *(_QWORD *)(*(_QWORD *)v23 + 80LL);
  if ( !v19 )
  {
LABEL_40:
    v24 = 0;
    goto LABEL_41;
  }
  v24 = *(_DWORD *)(v19 + 136);
LABEL_41:
  v25 = this[2];
  v57 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v16, v15);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1284), v25) )
    {
      v29 = DXGGLOBAL::GetGlobal(v28, v27);
      SessionData = DXGGLOBAL::GetSessionData(v29);
      if ( SessionData )
      {
        v31 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
        if ( v31 )
        {
          KeStackAttachProcess(v31, &ApcState);
          v57 = 1;
        }
      }
    }
  }
  v33 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 49))(
          *((_QWORD *)this[2] + 31),
          a2);
  if ( v57 )
    KeUnstackDetachProcess(&ApcState);
  v34 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v34 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v32);
    v35[3] = 275LL;
    v35[4] = 16LL;
    v35[5] = this;
    v35[6] = CurrentIrql;
    v36 = KeGetCurrentIrql();
    v35[7] = v36;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( v19 && *(_DWORD *)(v19 + 136) != v24 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v32);
    v37[3] = 275LL;
    v37[4] = 38LL;
    v37[5] = *(int *)(v19 + 136);
    v37[6] = v24;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1062);
  v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v32);
  v38[3] = v33;
  v38[4] = a2->hDevice;
  v38[5] = a2->DmaBufferSegmentId;
  v38[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v38[7] = DmaBufferSize;
  v41 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v40);
  v41[3] = a2->DmaBufferSubmissionStartOffset;
  v41[4] = a2->DmaBufferSubmissionEndOffset;
  v41[5] = a2->pDmaBufferPrivateData;
  v41[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v41[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v44 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v43);
  v44[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v44[4] = a2->SubmissionFenceId;
  v44[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v44[6] = Value;
  if ( (_DWORD)v33 )
  {
    v48 = WdLogNewEntry5_WdError(Value, v45, v46);
    *(_QWORD *)(v48 + 24) = v33;
    WdLogEvent5_WdError(v48);
  }
  v49 = this[2];
  v50 = *((_QWORD *)v49 + 320);
  if ( !v50
    || !*(_QWORD *)(v50 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v50 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)v49 + 321) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v49 + 30));
    KeLeaveCriticalRegion();
  }
  if ( v2 )
  {
    v53 = *(_DWORD *)(v2 + 140);
    if ( !v53 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v52, v51);
      *(_QWORD *)(v54 + 24) = 250LL;
      WdLogEvent5_WdAssertion(v54);
      v53 = *(_DWORD *)(v2 + 140);
    }
    v55 = v53 - 1;
    *(_DWORD *)(v2 + 140) = v55;
    if ( !v55 )
      *(_DWORD *)(v2 + 144) = -1;
  }
  if ( v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v52, &EventProfilerExit);
  return (unsigned int)v33;
}
