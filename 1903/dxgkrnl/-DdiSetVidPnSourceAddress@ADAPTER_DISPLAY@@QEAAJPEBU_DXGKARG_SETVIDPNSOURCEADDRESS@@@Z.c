/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014450
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014430 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C5F0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F7D10 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  int v10; // eax
  char v11; // r12
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v14; // rsi
  struct _KTHREAD *v15; // rdi
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rax
  int v19; // ebp
  struct DXGADAPTER *v20; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGGLOBAL *v24; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // edi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  HANDLE hAllocation; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  char v42; // [rsp+20h] [rbp-88h]
  char v43; // [rsp+28h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter);
  }
  else
  {
    v42 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v6 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v6);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v8, a2)
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
      v10 = *(_DWORD *)(v2 + 140);
      if ( !v10 )
        *(_DWORD *)(v2 + 144) = 5010;
      *(_DWORD *)(v2 + 140) = v10 + 1;
    }
  }
  v11 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v11 = 1;
  }
  v12 = *((_QWORD *)this + 2);
  if ( *(int *)(v12 + 2452) < 1105 )
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v12 + 504))(
            *(_QWORD *)(v12 + 248),
            a2);
    goto LABEL_48;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 4248));
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v15 = KeGetCurrentThread();
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, a2);
      *(_QWORD *)(v16 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = PsGetCurrentProcessSessionId(v12, a2);
    if ( v17
      && (unsigned int)PsGetThreadSessionId(v15) == v17
      && !(unsigned int)IsThreadCrossSessionAttached(v12, a2)
      && (v18 = PsGetThreadWin32Thread(v15)) != 0
      && *(_QWORD *)v18 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)v18 + 80LL);
      if ( v14 )
      {
        v19 = *(_DWORD *)(v14 + 136);
        goto LABEL_34;
      }
    }
    else
    {
      v14 = 0LL;
    }
  }
  v19 = 0;
LABEL_34:
  v20 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v43 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v12, (__int64)a2);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1284), v20) )
    {
      v24 = DXGGLOBAL::GetGlobal(v23, v22);
      SessionData = DXGGLOBAL::GetSessionData(v24);
      if ( SessionData )
      {
        v26 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
        if ( v26 )
        {
          KeStackAttachProcess(v26, &ApcState);
          v43 = 1;
        }
      }
    }
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2) + 504LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v43 )
    KeUnstackDetachProcess(&ApcState);
  v29 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v29 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v27);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v19 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v27);
    v32[3] = 275LL;
    v32[4] = 38LL;
    v32[5] = *(int *)(v14 + 136);
    v32[6] = v19;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
LABEL_48:
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v27);
  v33[3] = (int)v28;
  v33[4] = a2->VidPnSourceId;
  v33[5] = a2->PrimarySegment;
  v33[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v33[7] = hAllocation;
  if ( v28 && v28 != -1073741811 && v28 != -1073741801 )
  {
    v37 = WdLogNewEntry5_WdError(hAllocation, v34, v35);
    *(_QWORD *)(v37 + 24) = (int)v28;
    WdLogEvent5_WdError(v37);
  }
  if ( v11 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v2 )
  {
    v38 = *(_DWORD *)(v2 + 140);
    if ( !v38 )
    {
      v39 = WdLogNewEntry5_WdAssertion(hAllocation, v34);
      *(_QWORD *)(v39 + 24) = 250LL;
      WdLogEvent5_WdAssertion(v39);
      v38 = *(_DWORD *)(v2 + 140);
    }
    v40 = v38 - 1;
    *(_DWORD *)(v2 + 140) = v40;
    if ( !v40 )
      *(_DWORD *)(v2 + 144) = -1;
  }
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(hAllocation, &EventProfilerExit);
  return v28;
}
