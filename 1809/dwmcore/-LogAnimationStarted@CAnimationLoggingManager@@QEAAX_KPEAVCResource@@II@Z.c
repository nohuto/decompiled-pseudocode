/*
 * XREFs of ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x18018AFB4
 * Callers:
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180051448 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x1800C359C (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x180155470 (-SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 */

void __fastcall CAnimationLoggingManager::LogAnimationStarted(
        CAnimationLoggingManager *this,
        __int64 a2,
        struct CResource *a3,
        __int64 a4,
        unsigned int a5)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v9; // rbx
  DiagnosticCallbacksManager *v10; // r14
  __int64 v11; // rax
  __int64 (__fastcall *v12)(struct CResource *, _QWORD, _BYTE *); // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int16 v16; // [rsp+28h] [rbp-A0h]
  _BYTE v17[64]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-48h]
  int v19; // [rsp+88h] [rbp-40h]
  char v20; // [rsp+8Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( a3 )
  {
    DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, a3);
    v9 = DebugInfoForResource;
    if ( DebugInfoForResource )
    {
      if ( *((_DWORD *)DebugInfoForResource + 10) )
      {
        v10 = *(DiagnosticCallbacksManager **)(*((_QWORD *)this + 2) + 1248LL);
        memset_0(v17, 0, sizeof(v17));
        v11 = *(_QWORD *)a3;
        v18 = 0LL;
        v19 = 18;
        v12 = *(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(v11 + 104);
        v20 = 0;
        v13 = v12(a3, a5, v17);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x239,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v14 = DiagnosticCallbacksManager::SendAnimationStarted(
                v10,
                *((_DWORD *)v9 + 10),
                *((_DWORD *)v9 + 11),
                a2,
                a5,
                v16,
                (const struct CExpressionValue *)v17);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x242,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
        v15 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
  }
}
