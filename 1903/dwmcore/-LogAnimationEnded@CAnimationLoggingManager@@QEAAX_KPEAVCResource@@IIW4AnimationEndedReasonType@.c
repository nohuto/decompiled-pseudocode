/*
 * XREFs of ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801BFC00
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18008092C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x1801C0D0C (-ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMA.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180045C4C (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x18018AF44 (-SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpr.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x1801BFBAC (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 */

char __fastcall CAnimationLoggingManager::LogAnimationEnded(
        WCHAR *a1,
        __int64 a2,
        struct CResource *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  int v6; // r14d
  const WCHAR *v9; // rbx
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  int v11; // edx
  const WCHAR *v12; // rdx
  LPCWSTR v13; // r10
  struct CAnimationLoggingManager::ResourceDebugInfo *v14; // rbx
  DiagnosticCallbacksManager *v15; // rdi
  __int64 v16; // rax
  __int64 (__fastcall *v17)(struct CResource *, _QWORD, EVENT_DATA_DESCRIPTOR *); // rax
  int v18; // eax
  int *v19; // rcx
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-91h]
  unsigned int v22; // [rsp+40h] [rbp-79h] BYREF
  __int64 v23; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-69h] BYREF
  __int64 *v25; // [rsp+70h] [rbp-49h]
  int v26; // [rsp+78h] [rbp-41h]
  int v27; // [rsp+7Ch] [rbp-3Dh]
  unsigned int *v28; // [rsp+80h] [rbp-39h]
  int v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+8Ch] [rbp-2Dh]
  int *v31; // [rsp+90h] [rbp-29h]
  int v32; // [rsp+98h] [rbp-21h]
  int v33; // [rsp+9Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+B0h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v6 = a6;
  v23 = a2;
  v22 = a4;
  if ( a6 )
  {
    switch ( a6 )
    {
      case 1:
        v9 = L"Animation disconnected due to direct property set (API)";
        break;
      case 2:
        v9 = L"Animation disconnected because the target was destroyed";
        break;
      case 3:
        v9 = L"Animation was stopped (StopAnimation)";
        break;
      default:
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
  }
  else
  {
    v9 = L"Animation completed";
  }
  LOBYTE(DebugInfoForResource) = (unsigned __int8)CAnimationLoggingManager::GetCommentForObject(
                                                    (CAnimationLoggingManager *)a1,
                                                    a4);
  if ( dword_18033A240 > 5u )
  {
    LOBYTE(DebugInfoForResource) = TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 1uLL);
    if ( (_BYTE)DebugInfoForResource )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v25 = &v23;
      v28 = &v22;
      v29 = v11 + 3;
      v32 = v11 + 3;
      v31 = &a5;
      v26 = 8;
      TlgCreateWsz(&pDesc, v9);
      v12 = a1 + 76;
      if ( *((_QWORD *)a1 + 22) >= 8uLL )
        v12 = *(const WCHAR **)v12;
      TlgCreateWsz(&v35, v12);
      TlgCreateWsz(&v36, v13);
      LOBYTE(DebugInfoForResource) = TlgWrite(
                                       (TraceLoggingHProvider)&dword_18033A240,
                                       &unk_1802DB4E5,
                                       0LL,
                                       0LL,
                                       8u,
                                       &v24);
    }
  }
  if ( a3 )
  {
    DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource((CAnimationLoggingManager *)a1, a3);
    v14 = DebugInfoForResource;
    if ( DebugInfoForResource )
    {
      if ( *((_DWORD *)DebugInfoForResource + 10) )
      {
        v15 = *(DiagnosticCallbacksManager **)(*((_QWORD *)a1 + 2) + 1264LL);
        memset_0(&v24, 0, 0x40uLL);
        v16 = *(_QWORD *)a3;
        v31 = 0LL;
        v32 = 18;
        v17 = *(__int64 (__fastcall **)(struct CResource *, _QWORD, EVENT_DATA_DESCRIPTOR *))(v16 + 136);
        LOBYTE(v33) = 0;
        v18 = v17(a3, (unsigned int)a5, &v24);
        if ( v18 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2A1,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v18);
          __debugbreak();
        }
        LODWORD(DebugInfoForResource) = DiagnosticCallbacksManager::SendAnimationEnded(
                                          v15,
                                          *((_DWORD *)v14 + 10),
                                          *((_DWORD *)v14 + 11),
                                          v23,
                                          a5,
                                          (__int64)pData,
                                          v6,
                                          (CExpressionValue *)&v24);
        if ( (int)DebugInfoForResource < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2AB,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)DebugInfoForResource);
          __debugbreak();
        }
        v19 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          LOBYTE(DebugInfoForResource) = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
  }
  return (char)DebugInfoForResource;
}
