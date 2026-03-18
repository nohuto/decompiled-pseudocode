/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014C20
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014C00 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C7F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FC9E0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // edi
  __int64 v9; // rcx
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  char v12; // r12
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v15; // rsi
  struct _KTHREAD *v16; // rdi
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rax
  int v20; // ebp
  struct DXGADAPTER *v21; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  DXGGLOBAL *v25; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // edi
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  HANDLE hAllocation; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  char v43; // [rsp+20h] [rbp-88h]
  unsigned int v44; // [rsp+24h] [rbp-84h]
  char v45; // [rsp+28h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0LL;
  v44 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v44 = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter, a3, 5010LL);
  }
  else
  {
    v43 = 0;
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
      && !(unsigned int)IsThreadCrossSessionAttached(v9, a2)
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
      v11 = *(_DWORD *)(v3 + 140);
      if ( !v11 )
        *(_DWORD *)(v3 + 144) = 5010;
      *(_DWORD *)(v3 + 140) = v11 + 1;
    }
  }
  v12 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v12 = 1;
  }
  v13 = *((_QWORD *)this + 2);
  if ( *(int *)(v13 + 2452) < 1105 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v13 + 504))(
            *(_QWORD *)(v13 + 248),
            a2);
    goto LABEL_48;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 4248));
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v16 = KeGetCurrentThread();
    if ( !v16 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13, a2);
      *(_QWORD *)(v17 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = PsGetCurrentProcessSessionId(v13, a2);
    if ( v18
      && (unsigned int)PsGetThreadSessionId(v16) == v18
      && !(unsigned int)IsThreadCrossSessionAttached(v13, a2)
      && (v19 = PsGetThreadWin32Thread(v16)) != 0
      && *(_QWORD *)v19 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)v19 + 80LL);
      if ( v15 )
      {
        v20 = *(_DWORD *)(v15 + 136);
        goto LABEL_34;
      }
    }
    else
    {
      v15 = 0LL;
    }
  }
  v20 = 0;
LABEL_34:
  v21 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v45 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v13, (__int64)a2);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1284), v21) )
    {
      v25 = DXGGLOBAL::GetGlobal(v24, v23);
      SessionData = DXGGLOBAL::GetSessionData(v25);
      if ( SessionData )
      {
        v27 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
        if ( v27 )
        {
          KeStackAttachProcess(v27, &ApcState);
          v45 = 1;
        }
      }
    }
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2) + 504LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v45 )
    KeUnstackDetachProcess(&ApcState);
  v30 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v30 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v28);
    v31[3] = 275LL;
    v31[4] = 16LL;
    v31[5] = this;
    v31[6] = CurrentIrql;
    v32 = KeGetCurrentIrql();
    v31[7] = v32;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v20 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v28);
    v33[3] = 275LL;
    v33[4] = 38LL;
    v33[5] = *(int *)(v15 + 136);
    v33[6] = v20;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
LABEL_48:
  v34 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v34[3] = (int)v29;
  v34[4] = a2->VidPnSourceId;
  v34[5] = a2->PrimarySegment;
  v34[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v34[7] = hAllocation;
  if ( v29 && v29 != -1073741811 && v29 != -1073741801 )
  {
    v38 = WdLogNewEntry5_WdError(hAllocation, v35, v36);
    *(_QWORD *)(v38 + 24) = (int)v29;
    WdLogEvent5_WdError(v38);
  }
  if ( v12 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v3 )
  {
    v39 = *(_DWORD *)(v3 + 140);
    if ( !v39 )
    {
      v40 = WdLogNewEntry5_WdAssertion(hAllocation, v35);
      *(_QWORD *)(v40 + 24) = 251LL;
      WdLogEvent5_WdAssertion(v40);
      v39 = *(_DWORD *)(v3 + 140);
    }
    v41 = v39 - 1;
    *(_DWORD *)(v3 + 140) = v41;
    if ( !v41 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(hAllocation, &EventProfilerExit, v36, v44);
  return v29;
}
