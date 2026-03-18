/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00128F8
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0012DD0 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00DDAF8 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // edi
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v15; // rdi
  struct _KTHREAD *v16; // rdi
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rax
  int v20; // esi
  struct DXGADAPTER *v21; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rcx
  DXGGLOBAL *v24; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 Value; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  unsigned int v47; // [rsp+20h] [rbp-88h]
  char v48; // [rsp+28h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  v47 = -1;
  v3 = 0LL;
  v6 = *(_BYTE *)(&DxgkControlGuid_Context + 2) & 2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v47 = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter, a3, 5013LL);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v8 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v10)
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
      v12 = *(_DWORD *)(v3 + 140);
      if ( !v12 )
        *(_DWORD *)(v3 + 144) = 5013;
      *(_DWORD *)(v3 + 140) = v12 + 1;
    }
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_28;
  v16 = KeGetCurrentThread();
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v17 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = PsGetCurrentProcessSessionId(v13);
  if ( v18 && (unsigned int)PsGetThreadSessionId(v16) == v18 )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v13) || (v19 = PsGetThreadWin32Thread(v16)) == 0 || !*(_QWORD *)v19 )
    {
      v15 = 0LL;
      goto LABEL_28;
    }
    v15 = *(_QWORD *)(*(_QWORD *)v19 + 80LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v20 = *(_DWORD *)(v15 + 136);
    goto LABEL_29;
  }
LABEL_28:
  v20 = 0;
LABEL_29:
  v21 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v48 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v13);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1316), v21) )
    {
      v24 = DXGGLOBAL::GetGlobal(v23);
      SessionData = DXGGLOBAL::GetSessionData(v24);
      if ( SessionData )
      {
        v26 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
        if ( v26 )
        {
          KeStackAttachProcess(v26, &ApcState);
          v48 = 1;
        }
      }
    }
  }
  v27 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))(*((_QWORD *)this + 2) + 392LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v48 )
    KeUnstackDetachProcess(&ApcState);
  v28 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v28 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v20 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
    v31[3] = 275LL;
    v31[4] = 38LL;
    v32 = *(int *)(v15 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v20;
    WdLogEvent5_WdCriticalError(v31);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v33[3] = v27;
  v33[4] = a2->hDevice;
  v33[5] = a2->DmaBufferSegmentId;
  v33[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v33[7] = a2->DmaBufferSize;
  v34 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v34[3] = a2->DmaBufferSubmissionStartOffset;
  v34[4] = a2->DmaBufferSubmissionEndOffset;
  v34[5] = a2->pDmaBufferPrivateData;
  v34[6] = a2->DmaBufferPrivateDataSize;
  v34[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v35 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v35[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v35[4] = a2->SubmissionFenceId;
  v35[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v35[6] = Value;
  if ( (_DWORD)v27 )
  {
    v37 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v37 + 24) = v27;
    WdLogEvent5_WdError(v37);
  }
  v38 = *((_QWORD *)this + 2);
  v39 = *(_QWORD *)(v38 + 2528);
  if ( !v39
    || (v40 = *(_QWORD *)(v39 + 528)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v39 + 520) + 8LL) + 72LL))(v40)
    && *(struct _KTHREAD **)(v38 + 2536) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v38 + 240));
    KeLeaveCriticalRegion();
  }
  if ( v3 )
  {
    v43 = *(_DWORD *)(v3 + 140);
    if ( !v43 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v41);
      *(_QWORD *)(v44 + 24) = 232LL;
      WdLogEvent5_WdAssertion(v44);
      v43 = *(_DWORD *)(v3 + 140);
    }
    v45 = v43 - 1;
    *(_DWORD *)(v3 + 140) = v45;
    if ( !v45 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v47);
  return (unsigned int)v27;
}
