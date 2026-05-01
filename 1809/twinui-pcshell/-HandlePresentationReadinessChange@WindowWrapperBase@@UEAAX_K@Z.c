/*
 * XREFs of ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180021560
 * Callers:
 *     <none>
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18002167C (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800217E8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180021820 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180021874 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x180064088 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x18024DDFC (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 */

void __fastcall WindowWrapperBase::HandlePresentationReadinessChange(WindowWrapperBase *this, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  unsigned int *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 184LL))(*((_QWORD *)this + 33), &SRWLock);
  v5 = (_QWORD *)((char *)this + 344);
  v6 = (unsigned int *)(v5 + 1);
  if ( *v5 && !*v6 )
    goto LABEL_13;
  switch ( a2 )
  {
    case 31LL:
      v7 = v5 + 2;
      v8 = v5[2];
      if ( v8 )
      {
        *v7 = v8 - 1;
        ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
          v5,
          v5 + 2);
        if ( !*v7 )
        {
          v11 = *v6;
          *v6 = v11 & 0xFFFFFFF7;
          ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
            v5,
            &v11,
            v5 + 1);
        }
      }
      else
      {
        ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(v5);
      }
      goto LABEL_7;
    case 36LL:
      v10 = 4LL;
      break;
    case 38LL:
      v10 = 2LL;
      break;
    default:
      goto LABEL_7;
  }
  WindowReadyState::WaitFlags::Clear(v5 + 1, v5, v10);
LABEL_7:
  v9 = *v5;
  if ( *v5 )
  {
    if ( !*v6 )
    {
      WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v5);
      v9 = *v5;
    }
    if ( v9 && !*v6 )
    {
      LOBYTE(v4) = 1;
      std::_Func_class<void,bool>::operator()(v5 + 5, v4);
    }
  }
LABEL_13:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
