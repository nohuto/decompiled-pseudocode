/*
 * XREFs of ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800217E8
 * Callers:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180021084 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180021160 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180021460 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180021560 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x18024DF14 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18024E090 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,bool>::operator()(__int64 a1, char a2)
{
  __int64 v2; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x180021816LL);
  }
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
