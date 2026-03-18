/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0015340
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0015320 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C7F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FC9E0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  char v6; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  int v13; // eax
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int8 CurrentIrql; // r15
  __int64 v21; // rdi
  struct _KTHREAD *v22; // rdi
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rax
  int v26; // r14d
  struct DXGADAPTER *v27; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  DXGGLOBAL *v31; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int8 v38; // cl
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 Value; // rcx
  __int64 v46; // rax
  struct DXGADAPTER *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  unsigned int v56; // [rsp+30h] [rbp-88h]
  char v57; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v3 = 0LL;
  v56 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v6 = 1;
    v56 = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter, a3, 5013LL);
  }
  else
  {
    v6 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v8 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v11, v10)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v3 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v13 = *(_DWORD *)(v3 + 140);
      if ( !v13 )
        *(_DWORD *)(v3 + 144) = 5013;
      *(_DWORD *)(v3 + 140) = v13 + 1;
    }
  }
  v14 = this[2];
  v15 = *((_QWORD *)v14 + 320);
  if ( !v15
    || !*(_QWORD *)(v15 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v15 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)v14 + 321) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)v14 + 9) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventBlockThread, v19, 73LL);
      KeWaitForSingleObject((char *)v14 + 216, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v14 + 30), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v21 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_40;
  v22 = KeGetCurrentThread();
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v23 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = PsGetCurrentProcessSessionId(v17, v16);
  if ( !v24
    || (unsigned int)PsGetThreadSessionId(v22) != v24
    || (unsigned int)IsThreadCrossSessionAttached(v17, v16)
    || (v25 = PsGetThreadWin32Thread(v22)) == 0
    || !*(_QWORD *)v25 )
  {
    v21 = 0LL;
    goto LABEL_40;
  }
  v21 = *(_QWORD *)(*(_QWORD *)v25 + 80LL);
  if ( !v21 )
  {
LABEL_40:
    v26 = 0;
    goto LABEL_41;
  }
  v26 = *(_DWORD *)(v21 + 136);
LABEL_41:
  v27 = this[2];
  v57 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v17, v16);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1284), v27) )
    {
      v31 = DXGGLOBAL::GetGlobal(v30, v29);
      SessionData = DXGGLOBAL::GetSessionData(v31);
      if ( SessionData )
      {
        v33 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
        if ( v33 )
        {
          KeStackAttachProcess(v33, &ApcState);
          v57 = 1;
        }
      }
    }
  }
  v35 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))this[2] + 49))(
          *((_QWORD *)this[2] + 31),
          a2);
  if ( v57 )
    KeUnstackDetachProcess(&ApcState);
  v36 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v36 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v34);
    v37[3] = 275LL;
    v37[4] = 16LL;
    v37[5] = this;
    v37[6] = CurrentIrql;
    v38 = KeGetCurrentIrql();
    v37[7] = v38;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( v21 && *(_DWORD *)(v21 + 136) != v26 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v34);
    v39[3] = 275LL;
    v39[4] = 38LL;
    v39[5] = *(int *)(v21 + 136);
    v39[6] = v26;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1062);
  v40 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v40[3] = v35;
  v40[4] = a2->hDevice;
  v40[5] = a2->DmaBufferSegmentId;
  v40[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v40[7] = a2->DmaBufferSize;
  v41 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v41[3] = a2->DmaBufferSubmissionStartOffset;
  v41[4] = a2->DmaBufferSubmissionEndOffset;
  v41[5] = a2->pDmaBufferPrivateData;
  v41[6] = a2->DmaBufferPrivateDataSize;
  v41[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v42 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v42[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v42[4] = a2->SubmissionFenceId;
  v42[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v42[6] = Value;
  if ( (_DWORD)v35 )
  {
    v46 = WdLogNewEntry5_WdError(Value, v43, v44);
    *(_QWORD *)(v46 + 24) = v35;
    WdLogEvent5_WdError(v46);
  }
  v47 = this[2];
  v48 = *((_QWORD *)v47 + 320);
  if ( !v48
    || !*(_QWORD *)(v48 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v48 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)v47 + 321) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v47 + 30));
    KeLeaveCriticalRegion();
  }
  if ( v3 )
  {
    v52 = *(_DWORD *)(v3 + 140);
    if ( !v52 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v50, v49);
      *(_QWORD *)(v53 + 24) = 251LL;
      WdLogEvent5_WdAssertion(v53);
      v52 = *(_DWORD *)(v3 + 140);
    }
    v54 = v52 - 1;
    *(_DWORD *)(v3 + 140) = v54;
    if ( !v54 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v50, &EventProfilerExit, v51, v56);
  return (unsigned int)v35;
}
