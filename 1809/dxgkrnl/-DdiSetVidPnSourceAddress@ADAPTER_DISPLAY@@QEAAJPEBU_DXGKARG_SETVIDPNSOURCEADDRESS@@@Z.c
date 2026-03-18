/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014FF4
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014FE0 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00DDAF8 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // edi
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  int v12; // eax
  char v13; // r12
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rdi
  struct _KTHREAD *v19; // rdi
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rax
  int v23; // ebp
  struct DXGADAPTER *v24; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // rcx
  DXGGLOBAL *v27; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r8
  HANDLE hAllocation; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  unsigned int v43; // [rsp+20h] [rbp-88h]
  __int64 v44; // [rsp+28h] [rbp-80h]
  char v45; // [rsp+30h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  v3 = 0LL;
  v43 = -1;
  v5 = *(_BYTE *)(&DxgkControlGuid_Context + 2) & 2;
  v44 = v5;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter, a3, 5010LL);
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
        *(_DWORD *)(v3 + 144) = 5010;
      *(_DWORD *)(v3 + 140) = v12 + 1;
    }
  }
  v13 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v13 = 1;
  }
  v14 = *((_QWORD *)this + 2);
  v15 = *(_DWORD *)(v14 + 2160);
  if ( v15 != 9472
    && v15 != 9216
    && v15 != 8960
    && v15 != 8704
    && v15 != 8448
    && v15 != 0x2000
    && v15 != 4864
    && !*(_QWORD *)(v14 + 712)
    && v15 != 4608
    && (!*(_QWORD *)(v14 + 680) || !*(_QWORD *)(v14 + 672) || (*(_DWORD *)(v14 + 1876) & 4) == 0) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v14 + 504))(
            *(_QWORD *)(v14 + 248),
            a2);
    goto LABEL_57;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 4256));
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_43;
  v19 = KeGetCurrentThread();
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v20 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = PsGetCurrentProcessSessionId(v14);
  if ( v21 && (unsigned int)PsGetThreadSessionId(v19) == v21 )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v14) || (v22 = PsGetThreadWin32Thread(v19)) == 0 || !*(_QWORD *)v22 )
    {
      v18 = 0LL;
LABEL_43:
      v23 = 0;
      goto LABEL_44;
    }
    v18 = *(_QWORD *)(*(_QWORD *)v22 + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
    goto LABEL_43;
  v23 = *(_DWORD *)(v18 + 136);
LABEL_44:
  v24 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v45 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v14);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1316), v24) )
    {
      v27 = DXGGLOBAL::GetGlobal(v26);
      SessionData = DXGGLOBAL::GetSessionData(v27);
      if ( SessionData )
      {
        v29 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
        if ( v29 )
        {
          KeStackAttachProcess(v29, &ApcState);
          v45 = 1;
        }
      }
    }
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2) + 504LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v45 )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
    v31[3] = 275LL;
    v31[4] = 16LL;
    v31[5] = this;
    v31[6] = CurrentIrql;
    v32 = KeGetCurrentIrql();
    v31[7] = v32;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v23 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
    v33[3] = 275LL;
    v33[4] = 38LL;
    v34 = *(int *)(v18 + 136);
    v33[7] = 0LL;
    v33[5] = v34;
    v33[6] = v23;
    WdLogEvent5_WdCriticalError(v33);
  }
  v5 = v44;
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
LABEL_57:
  v35 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v35[3] = (int)v16;
  v35[4] = a2->VidPnSourceId;
  v35[5] = a2->PrimarySegment;
  v35[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v35[7] = hAllocation;
  if ( v16 != -1073741811 && v16 != -1073741801 && v16 )
  {
    v38 = WdLogNewEntry5_WdError(hAllocation);
    *(_QWORD *)(v38 + 24) = (int)v16;
    WdLogEvent5_WdError(v38);
  }
  if ( v13 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v3 )
  {
    v39 = *(_DWORD *)(v3 + 140);
    if ( !v39 )
    {
      v40 = WdLogNewEntry5_WdAssertion(hAllocation);
      *(_QWORD *)(v40 + 24) = 232LL;
      WdLogEvent5_WdAssertion(v40);
      v39 = *(_DWORD *)(v3 + 140);
    }
    v41 = v39 - 1;
    *(_DWORD *)(v3 + 140) = v41;
    if ( !v41 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(hAllocation, &EventProfilerExit, v36, v43);
  return v16;
}
