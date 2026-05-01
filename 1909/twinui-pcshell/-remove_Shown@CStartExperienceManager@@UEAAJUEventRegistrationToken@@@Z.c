/*
 * XREFs of ?remove_Shown@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1801B9140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801671DC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

__int64 __fastcall CStartExperienceManager::remove_Shown(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         this + 7,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
