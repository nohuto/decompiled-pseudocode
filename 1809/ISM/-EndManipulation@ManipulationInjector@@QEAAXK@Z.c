/*
 * XREFs of ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800B9190
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800346C0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037698 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18004CFF4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?DetachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004E058 (-DetachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800B926C (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800B9D2C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800BA61C (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall ManipulationInjector::EndManipulation(ManipulationInjector *this, unsigned int a2)
{
  const char *v3; // r9
  int v4; // r11d
  unsigned int v5; // r8d
  _DWORD *v6; // rax
  _DWORD *i; // rcx
  unsigned int v8; // ecx
  __int64 v9; // rax
  _DWORD *j; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ManipulationInjector::IsInContactForDeviceId(this, a2) )
  {
    v5 = 0;
    if ( !*((_DWORD *)this + 12) )
      return;
    v6 = (_DWORD *)((char *)this + 124);
    for ( i = (_DWORD *)((char *)this + 712); *i != v4 || *v6 != 2; ++i )
    {
      ++v5;
      v6 += 38;
      if ( v5 >= *((_DWORD *)this + 12) )
        return;
    }
  }
  if ( *((_DWORD *)this + 22) == 64 && (v8 = *((_DWORD *)this + 12), v8 > 1) )
  {
    v9 = 0LL;
    for ( j = (_DWORD *)((char *)this + 712); *j != v4; ++j )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x45A,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v3);
        JUMPOUT(0x1800B9265LL);
      }
    }
    *((_DWORD *)this + 38 * v9 + 31) = 0x40000;
    ManipulationInjector::InjectAndScrub(this);
    if ( *((_BYTE *)this + 13) )
      DbgPrint("Releasing drag contact\n");
  }
  else
  {
    ManipulationInjector::EndManipulationInternal(this, 0, 0);
  }
}
